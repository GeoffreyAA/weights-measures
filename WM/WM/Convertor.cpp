#include "stdafx.h"

#include "Convertor.h"
#include "ConvertorDlg.h"


///////////////////////////////////////////////////////////////

CConvertorApp Application;


///////////////////////////////////////////////////////////////

CConvertorApp::CConvertorApp()
{
}

BEGIN_MESSAGE_MAP(CConvertorApp, CWinApp)
	//{{AFX_MSG_MAP(CConvertorApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

BOOL CConvertorApp::InitInstance()
{
#ifdef _AFXDLL
	Enable3dControls();
#else
	Enable3dControlsStatic();
#endif

	CConvertorDlg Main;
	m_pMainWnd = &Main;

	Main.DoModal();

	return FALSE;
}