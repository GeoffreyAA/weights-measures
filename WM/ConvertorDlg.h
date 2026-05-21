#ifndef __C_CONVERTOR_DLG_H__
#define __C_CONVERTOR_DLG_H__

#include "Interfaces\ConversionInterfaceFactory.h"
#include "Library\Configuration.h"

class CConvertorDlg : public CDialog
{
public:
	CConvertorDlg(CWnd *pParent = NULL);
	~CConvertorDlg();

	//{{AFX_DATA(CConvertorDlg)
	enum { IDD = IDD_CONVERTOR_DIALOG };
	CButton	Group;
	CComboBox	Modes;
	//}}AFX_DATA

	//{{AFX_VIRTUAL(CConvertorDlg)
	protected:
	virtual void DoDataExchange(CDataExchange *pDX);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	public:
	virtual BOOL PreTranslateMessage(MSG *pMsg);
	//}}AFX_VIRTUAL

protected:
	void Initialise();
	void RetrieveConfiguration();
	void SaveConfiguration();
	void OnBeforeClose();

	void SetupControls();

	int GetMode() const;
	void SetMode(int nType);

	ConversionInterface *GetInterface() const;
	void SetInterface(ConversionInterface *p);
	bool IsValidInterface() const;

	void UpdateWindowTitle();
	void UpdateMenu();
	void UpdateControls();
	void UpdateStrings();
	void UpdateWindowSize();
	void UpdateWindowPos();

	void OnChangeValueX(int i);
	void OnReturnKey();

	//{{AFX_MSG(CConvertorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	afx_msg void OnClose();
	afx_msg void OnChangeModes();
	afx_msg void OnToolsCalculator();
	afx_msg void OnToolsSettings();
	afx_msg void OnToolsAbout();
	afx_msg void OnToolsQuit();
	afx_msg BOOL OnHelpInfo(HELPINFO *pHelpInfo);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	ConversionInterfaceFactory Factory;
	ConversionInterface *pInterface;
	HICON hIcon;
};

struct ConvertorDlgCfg
{
	ConvertorDlgCfg();

	int nConversionType;
	int x;
	int y;
};

class ConvertorDlgCfgSerialiser
{
public:
	bool Save(const ConvertorDlgCfg &a, Configuration &b) const;
	bool Retrieve(ConvertorDlgCfg &a, const Configuration &b) const;
};

//{{AFX_INSERT_LOCATION}}

#endif