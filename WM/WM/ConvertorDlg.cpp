#include "stdafx.h"

#include "Convertor.h"
#include "ConvertorDlg.h"

#include "AboutDlg.h"
#include "SettingsDlg.h"

#include "Application.h"
#include "Library\Library.h"
#include "Library\Win32Library.h"
#include "Library\ResourceString.h"
#include "Library\Registry.h"
#include "Library\File.h"
#include "Library\Templates.h"
#include "Report.h"

#include "Glue.h"

static const int TitleList[] = {IDC_LABEL1, IDC_LABEL2, IDC_LABEL3, IDC_LABEL4, IDC_LABEL5, IDC_LABEL6, IDC_LABEL7, IDC_LABEL8, IDC_LABEL9};
static const int AbrvList[] = {IDC_LABEL10, IDC_LABEL11, IDC_LABEL12, IDC_LABEL13, IDC_LABEL14, IDC_LABEL15, IDC_LABEL16, IDC_LABEL17, IDC_LABEL18};

CConvertorDlg::CConvertorDlg(CWnd *pParent) : CDialog(CConvertorDlg::IDD, pParent), pCurrentInterface(NULL)
{
	//{{AFX_DATA_INIT(CConvertorDlg)
	//}}AFX_DATA_INIT
	hIcon = AfxGetApp()->LoadIcon(IDR_CONVERTOR_ICON);

	ASSERT((sizeof(TitleList) / sizeof(TitleList[0])) == (sizeof(AbrvList) / sizeof(AbrvList[0])));
	ASSERT((sizeof(TitleList) / sizeof(TitleList[0])) == ValueList.size());

	ValueList[0] = &Value1;
	ValueList[1] = &Value2;
	ValueList[2] = &Value3;
	ValueList[3] = &Value4;
	ValueList[4] = &Value5;
	ValueList[5] = &Value6;
	ValueList[6] = &Value7;
	ValueList[7] = &Value8;
	ValueList[8] = &Value9;
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
	DDX_Control(pDX, IDC_EDIT1, Value1);
	DDX_Control(pDX, IDC_EDIT2, Value2);
	DDX_Control(pDX, IDC_EDIT3, Value3);
	DDX_Control(pDX, IDC_EDIT4, Value4);
	DDX_Control(pDX, IDC_EDIT5, Value5);
	DDX_Control(pDX, IDC_EDIT6, Value6);
	DDX_Control(pDX, IDC_EDIT7, Value7);
	DDX_Control(pDX, IDC_EDIT8, Value8);
	DDX_Control(pDX, IDC_EDIT9, Value9);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CConvertorDlg, CDialog)
	//{{AFX_MSG_MAP(CConvertorDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELCHANGE(IDC_COMBO1, OnChangeModes)
	ON_EN_KILLFOCUS(IDC_EDIT1, OnChangeValue1)
	ON_EN_KILLFOCUS(IDC_EDIT2, OnChangeValue2)
	ON_EN_KILLFOCUS(IDC_EDIT3, OnChangeValue3)
	ON_EN_KILLFOCUS(IDC_EDIT4, OnChangeValue4)
	ON_EN_KILLFOCUS(IDC_EDIT5, OnChangeValue5)
	ON_EN_KILLFOCUS(IDC_EDIT6, OnChangeValue6)
	ON_EN_KILLFOCUS(IDC_EDIT7, OnChangeValue7)
	ON_EN_KILLFOCUS(IDC_EDIT8, OnChangeValue8)
	ON_EN_KILLFOCUS(IDC_EDIT9, OnChangeValue9)
	ON_COMMAND(ID_TOOLS_SETTINGS, OnToolsSettings)
	ON_COMMAND(ID_TOOLS_CALCULATOR, OnToolsCalculator)
	ON_COMMAND(ID_TOOLS_QUIT, OnToolsQuit)
	//ON_COMMAND(ID_HELP_HELP, OnHelpHelp)
	//ON_COMMAND(ID_HELP_LICENCE, OnHelpLicence)
	ON_COMMAND(ID_HELP_ABOUT, OnHelpAbout)
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


///////////////////////////////////////////////////////////////

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
	ConvertorDlgCfgSerializer().Retrieve(Cfg, Registry(GetRegistryKey(), KEY_READ, false));

	SelectMode(Cfg.nConversionType);
	::SetWindowPos(GetSafeHwnd(), NULL, Cfg.x, Cfg.y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
}

void CConvertorDlg::SaveConfiguration()
{
	ConvertorDlgCfg Cfg;

	Cfg.nConversionType = GetSelectedMode();
	Cfg.x = GetWindowLeft(GetSafeHwnd());
	Cfg.y = GetWindowTop(GetSafeHwnd());

	//ConvertorDlgCfgSerializer().Save(Cfg, Registry(GetRegistryKey(), KEY_WRITE, true));

	Registry r(GetRegistryKey(), KEY_WRITE, true);	// Fixes warning concerning temporary object being passed as non-const reference
	ConvertorDlgCfgSerializer().Save(Cfg, r);
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
#ifndef _DEBUG
	SetWindowText(GetApplicationName());
#else
	SetWindowText(GetApplicationNameFull().c_str());
#endif
}

void CConvertorDlg::UpdateMenu()
{
	HMENU h = ::GetMenu(GetSafeHwnd());

	if (h)
	{
		ModifyMenu(h, 0, MF_BYPOSITION | MF_STRING, 0, ResourceString(L"IDS_MENU_TOOLS"));
		//ModifyMenu(h, 1, MF_BYPOSITION | MF_STRING, 0, ResourceString(L"IDS_MENU_HELP"));

		SetMenuString(h, ID_TOOLS_SETTINGS, ResourceString(L"IDS_TOOLS_SETTINGS"));
		//SetMenuString(h, ID_TOOLS_REPORT, ResourceString(L"IDS_TOOLS_REPORT"));
		SetMenuString(h, ID_TOOLS_CALCULATOR, ResourceString(L"IDS_TOOLS_CALCULATOR"));
		SetMenuString(h, ID_TOOLS_QUIT, ResourceString(L"IDS_TOOLS_QUIT"));

		//SetMenuString(h, ID_HELP_HELP, ResourceString(L"IDS_HELP_HELP"));
		//SetMenuString(h, ID_HELP_HOMEPAGE, ResourceString(L"IDS_HELP_HOMEPAGE"));
		//SetMenuString(h, ID_HELP_LICENCE, ResourceString(L"IDS_HELP_LICENCE"));
		SetMenuString(h, ID_HELP_ABOUT, ResourceString(L"IDS_HELP_ABOUT"));

		::DrawMenuBar(GetSafeHwnd());
	}
}

void CConvertorDlg::UpdateControls()
{
	if (IsValidInterface())
	{
		SetWindowFloat(Value1.GetSafeHwnd(), GetCurrentInterface()->getValue1());
		SetWindowFloat(Value2.GetSafeHwnd(), GetCurrentInterface()->getValue2());
		SetWindowFloat(Value3.GetSafeHwnd(), GetCurrentInterface()->getValue3());
		SetWindowFloat(Value4.GetSafeHwnd(), GetCurrentInterface()->getValue4());
		SetWindowFloat(Value5.GetSafeHwnd(), GetCurrentInterface()->getValue5());
		SetWindowFloat(Value6.GetSafeHwnd(), GetCurrentInterface()->getValue6());
		SetWindowFloat(Value7.GetSafeHwnd(), GetCurrentInterface()->getValue7());
		SetWindowFloat(Value8.GetSafeHwnd(), GetCurrentInterface()->getValue8());
		SetWindowFloat(Value9.GetSafeHwnd(), GetCurrentInterface()->getValue9());
	}
}

void CConvertorDlg::UpdateWindowSize()
{
	for (int i = ValueList.size() - 1; i >= 0; i--)
	{
		if (ValueList[i]->IsWindowEnabled())
		{
			const HWND hDlg = GetSafeHwnd();

			const int LastValueBottom = GetWindowTop(ValueList[i]->GetSafeHwnd()) +
										GetWindowHeight(ValueList[i]->GetSafeHwnd());

			const int space = GetWindowTop(ValueList[0]->GetSafeHwnd()) - GetWindowTop(Group.GetSafeHwnd()) +
							  GetWindowLeft(Group.GetSafeHwnd()) - GetWindowLeft(hDlg);

			const int h = LastValueBottom + space /*48*/ - GetWindowTop(hDlg);	// the 48 px was a hard-coded value that worked with the dialog at Tahoma 8pt

			SetWindowSize(hDlg, GetWindowWidth(hDlg), h);

			const int h2 = GetWindowTop(ValueList[0]->GetSafeHwnd()) -
						   GetWindowTop(Group.GetSafeHwnd()) +
						   LastValueBottom -
						   GetWindowTop(Group.GetSafeHwnd());

			SetWindowSize(Group.GetSafeHwnd(), GetWindowWidth(Group.GetSafeHwnd()), h2);

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

	for (int i = 0; i < ValueList.size(); i++)
	{
		const bool bEnable = i < (IsValidInterface() ? GetCurrentInterface()->getValueCount() : 0);
		const int nCmdShow = bEnable ? SW_SHOW : SW_HIDE;

		ValueList[i]->EnableWindow(bEnable);
		ValueList[i]->ShowWindow(nCmdShow);

		HWND hDlg = GetSafeHwnd();

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
		}
	}
}


///////////////////////////////////////////////////////////////

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

/*
void CConvertorDlg::OnToolsReport()
{
	OPENFILENAME ofn;
	ZeroMemory(&ofn, sizeof(ofn));

	wchar_t w[MAX_PATH] = L"WM.htm";
	ResourceString s(L"IDS_REPORT_DLG_TITLE");

	ofn.lStructSize = sizeof(ofn);
	ofn.hwndOwner = GetSafeHwnd();
	ofn.lpstrFilter = L"HTML\0*.htm;*.html\0";
	ofn.lpstrFile = w;
	ofn.nMaxFile = sizeof(w) / sizeof(w[0]);
	ofn.lpstrTitle = s.c_str();
	ofn.Flags = OFN_HIDEREADONLY | OFN_NOREADONLYRETURN | OFN_OVERWRITEPROMPT | OFN_PATHMUSTEXIST;
	ofn.lpstrDefExt = L"htm";

	if (GetSaveFileName(&ofn))
	{
		if (!SaveReport(w, GetCurrentInterface()))
		{
			MsgBox(ResourceString(L"IDS_REPORT_ERROR"), ResourceString(L"IDS_REPORT_ERROR_TITLE"), GetSafeHwnd(), MSG_ERROR);
		}
	}
}
*/

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

void CConvertorDlg::OnToolsQuit()
{
	OnBeforeClose();

	EndDialog(IDOK);
}

/*
void CConvertorDlg::OnHelpHelp()
{
	HtmlHelp(ApplicationFile(GetHelpFileName()), NULL, GetSafeHwnd());
}
*/

BOOL CConvertorDlg::OnHelpInfo(HELPINFO *pHelpInfo)
{
	//OnHelpHelp();

	ShellOpen(ApplicationFile(GetHelpFileName()), GetSafeHwnd());

	return TRUE;
}

/*
void CConvertorDlg::OnHelpLicence()
{
	if (::MessageBox(GetSafeHwnd(), ResourceString(L"IDS_LICENCE_MSG"), ResourceString(L"IDS_LICENCE_TITLE"), MB_OKCANCEL | MB_ICONINFORMATION) == IDOK)
	{
		if (!HtmlHelp(ApplicationFile(GetHelpFileName()), L"Licence.txt", GetSafeHwnd()))
		{
			MsgBox(ResourceString(L"IDS_LICENCE_ERROR"), ResourceString(L"IDS_LICENCE_TITLE"), GetSafeHwnd(), MSG_ERROR);
		}
	}
}
*/

void CConvertorDlg::OnHelpAbout()
{
	CAboutDlg().DoModal();
}


///////////////////////////////////////////////////////////////

ConvertorDlgCfg::ConvertorDlgCfg() : nConversionType(1), x(32), y(32)
{
}


///////////////////////////////////////////////////////////////

const wchar_t szConfig[] = L"Configuration";

bool ConvertorDlgCfgSerializer::Save(const ConvertorDlgCfg &a, Configuration &b) const
{
	return (b.setBinary(szConfig, &a, sizeof(a)));
}

bool ConvertorDlgCfgSerializer::Retrieve(ConvertorDlgCfg &a, const Configuration &b) const
{
	if (!b.getBinary(szConfig, &a, sizeof(a)))
	{
		a = ConvertorDlgCfg();

		return false;
	}

	return true;
}