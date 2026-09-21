#include "stdafx.h"
#include "Convertor.h"
#include "ConvertorDlg.h"
#include "AboutDlg.h"
#include "SettingsDlg.h"

#include "Application.h"
#include "Name.h"
#include "Library\ConfigFile.h"
#include "Library\File.h"
#include "Library\Library.h"
#include "Library\ResourceString.h"
#include "Library\Templates.h"
#include "Library\Win32Library.h"
#include <intsafe.h>

const int ValueList[] = {IDC_EDIT0,  IDC_EDIT1,  IDC_EDIT2,  IDC_EDIT3,  IDC_EDIT4,  IDC_EDIT5,  IDC_EDIT6,  IDC_EDIT7,  IDC_EDIT8,  IDC_EDIT9,  IDC_EDIT10,  IDC_EDIT11,  IDC_EDIT12,  IDC_EDIT13,  IDC_EDIT14,  IDC_EDIT15};
const int TitleList[] = {IDC_TITLE0, IDC_TITLE1, IDC_TITLE2, IDC_TITLE3, IDC_TITLE4, IDC_TITLE5, IDC_TITLE6, IDC_TITLE7, IDC_TITLE8, IDC_TITLE9, IDC_TITLE10, IDC_TITLE11, IDC_TITLE12, IDC_TITLE13, IDC_TITLE14, IDC_TITLE15};
const int AbbrvList[] = {IDC_ABRV0,  IDC_ABRV1,  IDC_ABRV2,  IDC_ABRV3,  IDC_ABRV4,  IDC_ABRV5,  IDC_ABRV6,  IDC_ABRV7,  IDC_ABRV8,  IDC_ABRV9,  IDC_ABRV10,  IDC_ABRV11,  IDC_ABRV12,  IDC_ABRV13,  IDC_ABRV14,  IDC_ABRV15};

const int ValueListSize = sizeof(ValueList) / sizeof(ValueList[0]);
const int TitleListSize = sizeof(TitleList) / sizeof(TitleList[0]);
const int AbbrvListSize = sizeof(AbbrvList) / sizeof(AbbrvList[0]);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CConvertorDlg::CConvertorDlg(CWnd *pParent) : CDialog(CConvertorDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CConvertorDlg)
	//}}AFX_DATA_INIT
	hIcon = AfxGetApp()->LoadIcon(IDR_CONVERTOR_ICON);

	ASSERT(ValueListSize == TitleListSize);
	ASSERT(TitleListSize == AbbrvListSize);
}

CConvertorDlg::~CConvertorDlg()
{
}

void CConvertorDlg::DoDataExchange(CDataExchange *pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CConvertorDlg)
	DDX_Control(pDX, IDC_GROUP1, Group);
	DDX_Control(pDX, IDC_COMBO1, Modes);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CConvertorDlg, CDialog)
	//{{AFX_MSG_MAP(CConvertorDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELCHANGE(IDC_COMBO1, OnChangeModes)
	ON_COMMAND(ID_TOOLS_CALCULATOR, OnToolsCalculator)
	ON_COMMAND(ID_TOOLS_GROUPING, OnToolsGrouping)
	ON_COMMAND(ID_TOOLS_FONT, OnToolsFont)
	ON_COMMAND(ID_TOOLS_SETTINGS, OnToolsSettings)
	ON_COMMAND(ID_TOOLS_ABOUT, OnToolsAbout)
	ON_COMMAND(ID_TOOLS_QUIT, OnToolsQuit)
	ON_WM_HELPINFO()
	ON_WM_CLOSE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BOOL CConvertorDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(hIcon, TRUE);
	SetIcon(hIcon, FALSE);

	Initialise();

	return FALSE;
}

void CConvertorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this);

		SendMessage(WM_ICONERASEBKGND, (WPARAM)dc.GetSafeHdc(), 0);

		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		dc.DrawIcon(x, y, hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR CConvertorDlg::OnQueryDragIcon()
{
	return (HCURSOR)hIcon;
}

BOOL CConvertorDlg::PreTranslateMessage(MSG *pMsg)
{
	if (pMsg && (pMsg->message == WM_KEYDOWN))
	{
		switch (pMsg->wParam)
		{
			case VK_RETURN:
				OnReturnKey();
				break;
		}
	}

	return CDialog::PreTranslateMessage(pMsg);
}

void CConvertorDlg::OnOK()
{
}

void CConvertorDlg::OnCancel()
{
	OnBeforeClose();
	EndDialog(IDOK);
}

void CConvertorDlg::OnClose()
{
	OnBeforeClose();
	CDialog::OnClose();
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CConvertorDlg::Initialise()
{
	UpdateWindowTitle();
	UpdateMenu();

	SetupControls();
	RetrieveConfiguration();
	OnChangeModes();

	HWND h = ::GetDlgItem(GetSafeHwnd(), IDC_EDIT0);

	if (h)
	{
		::SetFocus(h);
		::SendMessage(h, EM_SETSEL, (WPARAM)0, (LPARAM)-1);
	}
}

void CConvertorDlg::RetrieveConfiguration()
{
	ConvertorDlgCfg Cfg;

	if (!ConvertorDlgCfgSerialiser().Retrieve(Cfg, ConfigFile()))
		Cfg = ConvertorDlgCfg();

	SetMode(Cfg.Mode);
	SetMenuItemCheck(::GetMenu(GetSafeHwnd()), ID_TOOLS_GROUPING, Cfg.Grouping);

	Font1.Create(Cfg.FontName.c_str(), Cfg.FontSize, Cfg.FontWeight, Cfg.FontItalic);
	UpdateFonts();

	SetWindowPosition(GetSafeHwnd(), Cfg.x, Cfg.y);
}

void CConvertorDlg::SaveConfiguration()
{
	ConvertorDlgCfg Cfg;

	Cfg.Mode = IsValidInterface() ? GetInterface()->getType() : 0;
	Cfg.Grouping = GetMenuItemChecked(::GetMenu(GetSafeHwnd()), ID_TOOLS_GROUPING);

	LOGFONT lf;
	if (Font1.GetLogFont(&lf))
	{
		Cfg.FontName = lf.lfFaceName;
		Cfg.FontSize = FontLogicalToPointSize(lf.lfHeight);
		Cfg.FontWeight = lf.lfWeight;
		Cfg.FontItalic = lf.lfItalic;
	}

	Cfg.x = GetWindowLeft(GetSafeHwnd());
	Cfg.y = GetWindowTop(GetSafeHwnd());

	ConvertorDlgCfgSerialiser().Save(Cfg, ConfigFile());
}

void CConvertorDlg::OnBeforeClose()
{
	SaveConfiguration();
}

void CConvertorDlg::SetupControls()
{
	Modes.ResetContent();

	const ConversionInterfaceFactory::InterfaceList &r = Factory.GetInterfaces();

	for (ConversionInterfaceFactory::InterfaceList::const_iterator i = r.begin(); i != r.end(); i++)
	{
		if (*i)
		{
			const int nIndex = Modes.AddString(ResourceString((*i)->getName()));

			if (nIndex >= 0)
			{
				Modes.SetItemData(nIndex, (*i)->getType());
			}
		}
	}
}

int CConvertorDlg::GetMode() const
{
	DWORD_PTR dw = Modes.GetItemData(Modes.GetCurSel());
	int n;

	if ((dw != CB_ERR) && (DWordPtrToInt(dw, &n) == S_OK))
		return n;

	return -1;
}

void CConvertorDlg::SetMode(int nType)
{
	for (int i = 0; i < Modes.GetCount(); i++)
	{
		DWORD_PTR dw = Modes.GetItemData(i);
		int n;

		if ((dw != CB_ERR) && (DWordPtrToInt(dw, &n) == S_OK) && (n == nType))
		{
			Modes.SetCurSel(i);

			//OnChangeModes();

			return;
		}
	}
}

ConversionInterface *CConvertorDlg::GetInterface() const
{
	return Factory.GetSelectedInterface();
}

bool CConvertorDlg::IsValidInterface() const
{
	return GetInterface() != NULL;
}

void CConvertorDlg::UpdateWindowTitle()
{
	SetWindowText(GetApplicationName());

#ifdef _DEBUG
	SetWindowText(GetApplicationNameFull().c_str());
#endif
}

void CConvertorDlg::UpdateMenu()
{
	HMENU h = ::GetMenu(GetSafeHwnd());

	if (h)
	{
		ModifyMenu(h, 0, MF_BYPOSITION | MF_STRING, 0, ResourceString(L"IDS_MENU_TOOLS"));

		SetMenuString(h, ID_TOOLS_CALCULATOR, ResourceString(L"IDS_TOOLS_CALCULATOR"));
		SetMenuString(h, ID_TOOLS_GROUPING, ResourceString(L"IDS_TOOLS_GROUPING"));
		SetMenuString(h, ID_TOOLS_FONT, ResourceString(L"IDS_TOOLS_FONT"));
		SetMenuString(h, ID_TOOLS_SETTINGS, ResourceString(L"IDS_TOOLS_SETTINGS"));
		SetMenuString(h, ID_TOOLS_ABOUT, ResourceString(L"IDS_TOOLS_ABOUT"));
		SetMenuString(h, ID_TOOLS_QUIT, ResourceString(L"IDS_TOOLS_QUIT"));

		::DrawMenuBar(GetSafeHwnd());
	}
}

/*
void CConvertorDlg::UpdateControls()
{
	ConversionInterface *p = GetInterface();
	bool dg = GetMenuItemChecked(::GetMenu(GetSafeHwnd()), ID_TOOLS_GROUPING);

	if (p)
	{
		for (int i = 0; i < Min(p->getValueCount(), ValueListSize); i++)
		{
			SetWindowFloat2(::GetDlgItem(GetSafeHwnd(), ValueList[i]), p->getValue(i), dg);
		}
	}
}
*/

void CConvertorDlg::UpdateControls()
{
	ConversionInterface *p = GetInterface();

	if (p)
	{
		SetMode(p->getType());
		bool dg = GetMenuItemChecked(::GetMenu(GetSafeHwnd()), ID_TOOLS_GROUPING);

		for (int i = 0; i < ValueListSize; i++)
		{
			bool bEnable = i < (IsValidInterface() ? GetInterface()->getValueCount() : 0);
			int nCmdShow = bEnable ? SW_SHOW : SW_HIDE;

			::ShowWindow(::GetDlgItem(GetSafeHwnd(), ValueList[i]), nCmdShow);
			::ShowWindow(::GetDlgItem(GetSafeHwnd(), TitleList[i]), nCmdShow);
			::ShowWindow(::GetDlgItem(GetSafeHwnd(), AbbrvList[i]), nCmdShow);

			if (i < p->getValueCount())
			{
				SetWindowFloatDG(::GetDlgItem(GetSafeHwnd(), ValueList[i]), p->getValue(i), dg);
			}
		}
	}
}

void CConvertorDlg::UpdateStrings()
{
	ConversionInterface *p = GetInterface();

	if (p)
	{
		for (int i = 0; i < Min(p->getValueCount(), TitleListSize); i++)
		{
			::SetDlgItemText(GetSafeHwnd(), TitleList[i], ResourceString(p->getTitle(i)));
			::SetDlgItemText(GetSafeHwnd(), AbbrvList[i], ResourceString(p->getAbbreviation(i)));
		}
	}
}

void CConvertorDlg::UpdateFonts()
{
	for (int i = 0; i < ValueListSize; i++)
	{
		SetWindowFont(::GetDlgItem(GetSafeHwnd(), ValueList[i]), Font1.GetFont());
	}

	RedrawWindow();
}

void CConvertorDlg::UpdateWindowSize()
{
	HWND hDlg  = GetSafeHwnd();
	HWND hGrp  = Group.GetSafeHwnd();
	HWND hTop  = ::GetDlgItem(hDlg, ValueList[0]);
	HWND hLast = ::GetDlgItem(hDlg, ValueList[ Clamp(1, ValueListSize, IsValidInterface() ? GetInterface()->getValueCount() : 0) - 1 ]);

	if (!hGrp || !hTop || !hLast)
		return;

	int Bottom = GetWindowTop(hLast) +
				 GetWindowHeight(hLast);

	int Space = GetWindowTop(hTop) - GetWindowTop(hGrp) +
				GetWindowLeft(hGrp) - GetWindowLeft(hDlg);

	SetWindowHeight(hDlg, Bottom + Space - GetWindowTop(hDlg));

	SetWindowHeight(hGrp, GetWindowTop(hTop) -
						  GetWindowTop(hGrp) +
						  Bottom -
						  GetWindowTop(hGrp));
}

void CConvertorDlg::UpdateWindowPos()
{
	HWND hDlg = GetSafeHwnd();

	int x = GetWindowLeft(hDlg);
	int y = GetWindowTop(hDlg);

	int xMax = GetDesktopWidth() - GetWindowWidth(hDlg);
	int yMax = GetDesktopHeight() - GetWindowHeight(hDlg);

	if (!InRange(0, xMax, x) || !InRange(0, yMax, y))
	{
		SetWindowPosition(hDlg, Clamp(0, xMax, x), Clamp(0, yMax, y));
	}
}

void CConvertorDlg::OnChangeModes()
{
	Factory.SelectInterface(GetMode());

	UpdateControls();
	UpdateStrings();
	UpdateWindowSize();
	//UpdateWindowPos();
}

void CConvertorDlg::OnChangeValueX(int i)
{
	ASSERT((0 <= i) && (i < ValueListSize));

	if (IsValidInterface())
	{
		GetInterface()->setValue(i, GetWindowFloat(::GetDlgItem(GetSafeHwnd(), ValueList[i])));
		UpdateControls();
	}
}

void CConvertorDlg::OnReturnKey()
{
	CWnd *p = GetFocus();

	if (p)
	{
		for (int i = 0; i < ValueListSize; i++)
		{
			if (p->GetDlgCtrlID() == ValueList[i])
			{
				OnChangeValueX(i);
				return;
			}
		}
	}
}

BOOL CConvertorDlg::OnCommand(WPARAM wParam, LPARAM lParam)
{
	switch (HIWORD(wParam))
	{
		case EN_KILLFOCUS:
			for (int i = 0; i < ValueListSize; i++)
			{
				if (LOWORD(wParam) == ValueList[i])
				{
					OnChangeValueX(i);
					break;
				}
			}

			break;
	}

	return CDialog::OnCommand(wParam, lParam);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CConvertorDlg::OnToolsCalculator()
{
	if (!ShellOpen(L"calc", GetSafeHwnd()))
		MsgBox(ResourceString(L"IDS_CALCULATOR_ERROR"), ResourceString(L"IDS_ERROR"), GetSafeHwnd(), MSG_ERROR);
}

void CConvertorDlg::OnToolsGrouping()
{
	ToggleMenuItemCheck(::GetMenu(GetSafeHwnd()), ID_TOOLS_GROUPING);
	UpdateControls();
}

void CConvertorDlg::OnToolsFont()
{
	LOGFONT lf;
	ZeroMemory(&lf, sizeof(lf));

	if (Font1.GetLogFont(&lf))
	{
		CHOOSEFONT cf;
		ZeroMemory(&cf, sizeof(cf));

		cf.lStructSize = sizeof(CHOOSEFONT);
		cf.hwndOwner = GetSafeHwnd();
		cf.lpLogFont = &lf;
		cf.Flags = CF_INITTOLOGFONTSTRUCT | CF_LIMITSIZE | CF_SCREENFONTS /* XP */;
		cf.nSizeMax = 14;

		if (ChooseFont(&cf) && Font1.Create(cf.lpLogFont))
			UpdateFonts();
	}
}

void CConvertorDlg::OnToolsSettings()
{
	if (CSettingsDlg().DoModal() == IDOK)
	{
		UpdateWindowTitle();
		UpdateMenu();
		SetupControls();
		UpdateControls();
		UpdateStrings();
	}
}

void CConvertorDlg::OnToolsAbout()
{
	CAboutDlg().DoModal();
}

void CConvertorDlg::OnToolsQuit()
{
	OnBeforeClose();
	EndDialog(IDOK);
}

BOOL CConvertorDlg::OnHelpInfo(HELPINFO *pHelpInfo)
{
	ShellOpen(ApplicationFile(GetHelpFileName()), GetSafeHwnd());

	return TRUE;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ConvertorDlgCfg::ConvertorDlgCfg() : Mode(6),
									 Grouping(true),
									 FontName(L"Consolas"), FontSize(10), FontWeight(FW_NORMAL), FontItalic(false),
									 x(32), y(32)
{
}

bool ConvertorDlgCfgSerialiser::Save(const ConvertorDlgCfg &a, Configuration &b) const
{
	b.SetInt(L"Mode", a.Mode);
	b.SetBool(L"Grouping", a.Grouping);
	b.SetString(L"FontName", a.FontName);
	b.SetInt(L"FontSize", a.FontSize);
	b.SetInt(L"FontWeight", a.FontWeight);
	b.SetBool(L"FontItalic", a.FontItalic);
	b.SetInt(L"x", a.x);
	b.SetInt(L"y", a.y);

	return true;
}

bool ConvertorDlgCfgSerialiser::Retrieve(ConvertorDlgCfg &a, const Configuration &b) const
{
	const ConvertorDlgCfg def;

	if (!b.GetInt(L"Mode", a.Mode))					a.Mode = def.Mode;
	if (!b.GetBool(L"Grouping", a.Grouping))		a.Grouping = def.Grouping;
	if (!b.GetString(L"FontName", a.FontName))		a.FontName = def.FontName;
	if (!b.GetInt(L"FontSize", a.FontSize))			a.FontSize = def.FontSize;
	if (!b.GetInt(L"FontWeight", a.FontWeight))		a.FontWeight = def.FontWeight;
	if (!b.GetBool(L"FontItalic", a.FontItalic))	a.FontItalic = def.FontItalic;
	if (!b.GetInt(L"x", a.x))						a.x = def.x;
	if (!b.GetInt(L"y", a.y))						a.y = def.y;

	return true;
}