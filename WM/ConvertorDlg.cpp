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

const int ValueList[] = {IDC_EDIT1,  IDC_EDIT2,  IDC_EDIT3,  IDC_EDIT4,  IDC_EDIT5,  IDC_EDIT6,  IDC_EDIT7,  IDC_EDIT8,  IDC_EDIT9,  IDC_EDIT10,  IDC_EDIT11,  IDC_EDIT12,  IDC_EDIT13,  IDC_EDIT14,  IDC_EDIT15,  IDC_EDIT16};
const int TitleList[] = {IDC_TITLE1, IDC_TITLE2, IDC_TITLE3, IDC_TITLE4, IDC_TITLE5, IDC_TITLE6, IDC_TITLE7, IDC_TITLE8, IDC_TITLE9, IDC_TITLE10, IDC_TITLE11, IDC_TITLE12, IDC_TITLE13, IDC_TITLE14, IDC_TITLE15, IDC_TITLE16};
const int AbrvList[]  = {IDC_ABRV1,  IDC_ABRV2,  IDC_ABRV3,  IDC_ABRV4,  IDC_ABRV5,  IDC_ABRV6,  IDC_ABRV7,  IDC_ABRV8,  IDC_ABRV9,  IDC_ABRV10,  IDC_ABRV11,  IDC_ABRV12,  IDC_ABRV13,  IDC_ABRV14,  IDC_ABRV15,  IDC_ABRV16};

CConvertorDlg::CConvertorDlg(CWnd *pParent) : CDialog(CConvertorDlg::IDD, pParent), pCurrentInterface(NULL)
{
	//{{AFX_DATA_INIT(CConvertorDlg)
	//}}AFX_DATA_INIT
	hIcon = AfxGetApp()->LoadIcon(IDR_CONVERTOR_ICON);

	ASSERT((sizeof(ValueList) / sizeof(ValueList[0])) == (sizeof(TitleList) / sizeof(TitleList[0])));
	ASSERT((sizeof(TitleList) / sizeof(TitleList[0])) == (sizeof(AbrvList) / sizeof(AbrvList[0])));
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
	DDX_Control(pDX, IDC_EDIT1,  Value1);
	DDX_Control(pDX, IDC_EDIT2,  Value2);
	DDX_Control(pDX, IDC_EDIT3,  Value3);
	DDX_Control(pDX, IDC_EDIT4,  Value4);
	DDX_Control(pDX, IDC_EDIT5,  Value5);
	DDX_Control(pDX, IDC_EDIT6,  Value6);
	DDX_Control(pDX, IDC_EDIT7,  Value7);
	DDX_Control(pDX, IDC_EDIT8,  Value8);
	DDX_Control(pDX, IDC_EDIT9,  Value9);
	DDX_Control(pDX, IDC_EDIT10, Value10);
	DDX_Control(pDX, IDC_EDIT11, Value11);
	DDX_Control(pDX, IDC_EDIT12, Value12);
	DDX_Control(pDX, IDC_EDIT13, Value13);
	DDX_Control(pDX, IDC_EDIT14, Value14);
	DDX_Control(pDX, IDC_EDIT15, Value15);
	DDX_Control(pDX, IDC_EDIT16, Value16);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CConvertorDlg, CDialog)
	//{{AFX_MSG_MAP(CConvertorDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELCHANGE(IDC_COMBO1, OnChangeModes)
	ON_EN_KILLFOCUS(IDC_EDIT1,  OnChangeValue1)
	ON_EN_KILLFOCUS(IDC_EDIT2,  OnChangeValue2)
	ON_EN_KILLFOCUS(IDC_EDIT3,  OnChangeValue3)
	ON_EN_KILLFOCUS(IDC_EDIT4,  OnChangeValue4)
	ON_EN_KILLFOCUS(IDC_EDIT5,  OnChangeValue5)
	ON_EN_KILLFOCUS(IDC_EDIT6,  OnChangeValue6)
	ON_EN_KILLFOCUS(IDC_EDIT7,  OnChangeValue7)
	ON_EN_KILLFOCUS(IDC_EDIT8,  OnChangeValue8)
	ON_EN_KILLFOCUS(IDC_EDIT9,  OnChangeValue9)
	ON_EN_KILLFOCUS(IDC_EDIT10, OnChangeValue10)
	ON_EN_KILLFOCUS(IDC_EDIT11, OnChangeValue11)
	ON_EN_KILLFOCUS(IDC_EDIT12, OnChangeValue12)
	ON_EN_KILLFOCUS(IDC_EDIT13, OnChangeValue13)
	ON_EN_KILLFOCUS(IDC_EDIT14, OnChangeValue14)
	ON_EN_KILLFOCUS(IDC_EDIT15, OnChangeValue15)
	ON_EN_KILLFOCUS(IDC_EDIT16, OnChangeValue16)
	ON_COMMAND(ID_TOOLS_CALCULATOR, OnToolsCalculator)
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

	AddModes();

	RetrieveConfiguration();
	OnChangeModes();

	Value1.SetFocus();
	Value1.SetSel(0, -1);
}

void CConvertorDlg::RetrieveConfiguration()
{
	ConvertorDlgCfg Cfg;

	if (!ConvertorDlgCfgSerialiser().Retrieve(Cfg, ConfigFile()))
		Cfg = ConvertorDlgCfg();

	SelectMode(Cfg.nConversionType);
	::SetWindowPos(GetSafeHwnd(), NULL, Cfg.x, Cfg.y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
}

void CConvertorDlg::SaveConfiguration()
{
	ConvertorDlgCfg Cfg;

	Cfg.nConversionType = GetSelectedMode();
	Cfg.x = GetWindowLeft(GetSafeHwnd());
	Cfg.y = GetWindowTop(GetSafeHwnd());

	ConvertorDlgCfgSerialiser().Save(Cfg, ConfigFile());
}

void CConvertorDlg::OnBeforeClose()
{
	SaveConfiguration();
}

void CConvertorDlg::AddModes()
{
	Modes.ResetContent();

	const ConversionInterfaceFactory::InterfaceListType &r = Factory.getInterfaces();

	for (ConversionInterfaceFactory::InterfaceListType::const_iterator i = r.begin(); i != r.end(); i++)
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

int CConvertorDlg::GetSelectedMode() const
{
	DWORD d = Modes.GetItemData(Modes.GetCurSel());

	return ((d != CB_ERR) ? d : -1);
}

void CConvertorDlg::SelectMode(int nType)
{
	for (int i = 0; i < Modes.GetCount(); i++)
	{
		DWORD d = Modes.GetItemData(i);

		if ((d != CB_ERR) && (d == nType))
		{
			Modes.SetCurSel(i);

			//OnChangeModes();

			return;
		}
	}
}

ConversionInterface *CConvertorDlg::GetCurrentInterface() const
{
	return (pCurrentInterface);
}

void CConvertorDlg::SetCurrentInterface(ConversionInterface *p)
{
	pCurrentInterface = p;
}

bool CConvertorDlg::IsValidInterface() const
{
	return (GetCurrentInterface() != NULL);
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
		SetMenuString(h, ID_TOOLS_SETTINGS, ResourceString(L"IDS_TOOLS_SETTINGS"));
		SetMenuString(h, ID_TOOLS_ABOUT, ResourceString(L"IDS_TOOLS_ABOUT"));
		SetMenuString(h, ID_TOOLS_QUIT, ResourceString(L"IDS_TOOLS_QUIT"));

		::DrawMenuBar(GetSafeHwnd());
	}
}

void CConvertorDlg::UpdateControls()
{
	if (IsValidInterface())
	{
		SetWindowFloat(Value1.GetSafeHwnd(),  GetCurrentInterface()->getValue1());
		SetWindowFloat(Value2.GetSafeHwnd(),  GetCurrentInterface()->getValue2());
		SetWindowFloat(Value3.GetSafeHwnd(),  GetCurrentInterface()->getValue3());
		SetWindowFloat(Value4.GetSafeHwnd(),  GetCurrentInterface()->getValue4());
		SetWindowFloat(Value5.GetSafeHwnd(),  GetCurrentInterface()->getValue5());
		SetWindowFloat(Value6.GetSafeHwnd(),  GetCurrentInterface()->getValue6());
		SetWindowFloat(Value7.GetSafeHwnd(),  GetCurrentInterface()->getValue7());
		SetWindowFloat(Value8.GetSafeHwnd(),  GetCurrentInterface()->getValue8());
		SetWindowFloat(Value9.GetSafeHwnd(),  GetCurrentInterface()->getValue9());
		SetWindowFloat(Value10.GetSafeHwnd(), GetCurrentInterface()->getValue10());
		SetWindowFloat(Value11.GetSafeHwnd(), GetCurrentInterface()->getValue11());
		SetWindowFloat(Value12.GetSafeHwnd(), GetCurrentInterface()->getValue12());
		SetWindowFloat(Value13.GetSafeHwnd(), GetCurrentInterface()->getValue13());
		SetWindowFloat(Value14.GetSafeHwnd(), GetCurrentInterface()->getValue14());
		SetWindowFloat(Value15.GetSafeHwnd(), GetCurrentInterface()->getValue15());
		SetWindowFloat(Value16.GetSafeHwnd(), GetCurrentInterface()->getValue16());
	}
}

void CConvertorDlg::UpdateWindowSize()
{
	const HWND hDlg = GetSafeHwnd();
	const HWND hGrp = Group.GetSafeHwnd();

	for (int i = sizeof(ValueList) / sizeof(ValueList[0]) - 1; i >= 0; i--)
	{
		const HWND hTop  = ::GetDlgItem(hDlg, ValueList[0]);
		const HWND hLast = ::GetDlgItem(hDlg, ValueList[i]);

		if (!hTop || !hLast)
			return;

		if (::IsWindowEnabled(hLast))
		{
			const int Bottom = GetWindowTop(hLast) +
							   GetWindowHeight(hLast);

			const int Space = GetWindowTop(hTop) - GetWindowTop(hGrp) +
							  GetWindowLeft(hGrp) - GetWindowLeft(hDlg);

			SetWindowHeight(hDlg, Bottom + Space - GetWindowTop(hDlg));

			SetWindowHeight(hGrp, GetWindowTop(hTop) -
								  GetWindowTop(hGrp) +
								  Bottom -
								  GetWindowTop(hGrp));

			return;
		}
	}
}

void CConvertorDlg::UpdateWindowPos()
{
	const HWND hDlg = GetSafeHwnd();

	const int x = GetWindowLeft(hDlg);
	const int y = GetWindowTop(hDlg);

	const int xMax = GetDesktopWidth() - GetWindowWidth(hDlg);
	const int yMax = GetDesktopHeight() - GetWindowHeight(hDlg);

	if (!InRange(0, xMax, x) || !InRange(0, yMax, y))
	{
		SetWindowPosition(hDlg, Clamp(0, xMax, x), Clamp(0, yMax, y));
	}
}

void CConvertorDlg::OnChangeModes()
{
	SetCurrentInterface(Factory.getConversionInterface(GetSelectedMode()));
	HWND hDlg = GetSafeHwnd();

	for (int i = 0; i < (sizeof(ValueList) / sizeof(ValueList[0])); i++)
	{
		const bool bEnable = i < (IsValidInterface() ? GetCurrentInterface()->getValueCount() : 0);
		const int nCmdShow = bEnable ? SW_SHOW : SW_HIDE;

		::EnableWindow(::GetDlgItem(hDlg, ValueList[i]), bEnable);
		::ShowWindow(::GetDlgItem(hDlg, ValueList[i]), nCmdShow);

		if (bEnable)
		{
			::SetDlgItemText(hDlg, TitleList[i], ResourceString(GetCurrentInterface()->getTitle(i)));
			::SetDlgItemText(hDlg, AbrvList[i], ResourceString(GetCurrentInterface()->getAbbreviation(i)));
		}

		::ShowWindow(::GetDlgItem(hDlg, TitleList[i]), nCmdShow);
		::ShowWindow(::GetDlgItem(hDlg, AbrvList[i]), nCmdShow);
	}

	UpdateControls();
	UpdateWindowSize();
	UpdateWindowPos();
}

void CConvertorDlg::OnChangeValue1()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue1(GetWindowFloat(Value1.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue2()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue2(GetWindowFloat(Value2.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue3()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue3(GetWindowFloat(Value3.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue4()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue4(GetWindowFloat(Value4.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue5()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue5(GetWindowFloat(Value5.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue6()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue6(GetWindowFloat(Value6.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue7()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue7(GetWindowFloat(Value7.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue8()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue8(GetWindowFloat(Value8.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue9()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue9(GetWindowFloat(Value9.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue10()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue10(GetWindowFloat(Value10.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue11()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue11(GetWindowFloat(Value11.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue12()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue12(GetWindowFloat(Value12.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue13()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue13(GetWindowFloat(Value13.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue14()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue14(GetWindowFloat(Value14.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue15()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue15(GetWindowFloat(Value15.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnChangeValue16()
{
	if (IsValidInterface())
	{
		GetCurrentInterface()->setValue16(GetWindowFloat(Value16.GetSafeHwnd()));
		UpdateControls();
	}
}

void CConvertorDlg::OnReturnKey()
{
	CWnd *p = GetFocus();

	if (p)
	{
		switch (p->GetDlgCtrlID())
		{
			case IDC_EDIT1:
				OnChangeValue1();
				break;

			case IDC_EDIT2:
				OnChangeValue2();
				break;

			case IDC_EDIT3:
				OnChangeValue3();
				break;

			case IDC_EDIT4:
				OnChangeValue4();
				break;

			case IDC_EDIT5:
				OnChangeValue5();
				break;

			case IDC_EDIT6:
				OnChangeValue6();
				break;

			case IDC_EDIT7:
				OnChangeValue7();
				break;

			case IDC_EDIT8:
				OnChangeValue8();
				break;

			case IDC_EDIT9:
				OnChangeValue9();
				break;

			case IDC_EDIT10:
				OnChangeValue10();
				break;

			case IDC_EDIT11:
				OnChangeValue11();
				break;

			case IDC_EDIT12:
				OnChangeValue12();
				break;

			case IDC_EDIT13:
				OnChangeValue13();
				break;

			case IDC_EDIT14:
				OnChangeValue14();
				break;

			case IDC_EDIT15:
				OnChangeValue15();
				break;

			case IDC_EDIT16:
				OnChangeValue16();
				break;
		}
	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CConvertorDlg::OnToolsCalculator()
{
	wchar_t c[MAX_PATH];

	const UINT cbSize = sizeof(c) / sizeof(c[0]);

	UINT n = GetSystemDirectory(c, cbSize);

	if ((0 < n) && (n < cbSize) && AddFileName(c, L"calc.exe", cbSize))
	{
		if (!ShellOpen(c, GetSafeHwnd()))
		{
			MsgBox(ResourceString(L"IDS_CALCULATOR_ERROR"), ResourceString(L"IDS_CALCULATOR_ERROR_TITLE"), GetSafeHwnd(), MSG_ERROR);
		}
	}
}

void CConvertorDlg::OnToolsSettings()
{
	if (CSettingsDlg().DoModal() == IDOK)
	{
		const int m = GetSelectedMode();

		UpdateWindowTitle();
		UpdateMenu();
		AddModes();
		SelectMode(m);
		OnChangeModes();
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

ConvertorDlgCfg::ConvertorDlgCfg() : nConversionType(4),
									 x(32), y(32)
{
}

bool ConvertorDlgCfgSerialiser::Save(const ConvertorDlgCfg &a, Configuration &b) const
{
	bool r;

	r = b.setInteger(L"CONVERTOR_DLG_MODE", a.nConversionType);
	r = b.setInteger(L"CONVERTOR_DLG_POS_X", a.x);
	r = b.setInteger(L"CONVERTOR_DLG_POS_Y", a.y);

	return r;
}

bool ConvertorDlgCfgSerialiser::Retrieve(ConvertorDlgCfg &a, const Configuration &b) const
{
	ConvertorDlgCfg def;

	a.nConversionType = b.getInteger(L"CONVERTOR_DLG_MODE", def.nConversionType);
	a.x				  = b.getInteger(L"CONVERTOR_DLG_POS_X", def.x);
	a.y				  = b.getInteger(L"CONVERTOR_DLG_POS_Y", def.y);

	return true;
}