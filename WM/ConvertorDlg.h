#ifndef __C_CONVERTOR_DLG_H__
#define __C_CONVERTOR_DLG_H__

#if _MSC_VER > 1000
#pragma once
#endif

#include "Interfaces\ConversionInterfaceFactory.h"
#include "Library\array.h"
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
	CEdit	Value1;
	CEdit	Value2;
	CEdit	Value3;
	CEdit	Value4;
	CEdit	Value5;
	CEdit	Value6;
	CEdit	Value7;
	CEdit	Value8;
	CEdit	Value9;
	//}}AFX_DATA

	//{{AFX_VIRTUAL(CConvertorDlg)
	protected:
	virtual void DoDataExchange(CDataExchange *pDX);
	public:
	virtual BOOL PreTranslateMessage(MSG *pMsg);
	//}}AFX_VIRTUAL

protected:
	void Initialise();
	void RetrieveConfiguration();
	void SaveConfiguration();
	void OnBeforeClose();

	void AddModes();
	int GetSelectedMode() const;
	void SelectMode(int nType);

	ConversionInterface *GetCurrentInterface() const;
	void SetCurrentInterface(ConversionInterface *p);
	bool IsValidInterface() const;

	void UpdateWindowTitle();
	void UpdateMenu();
	void UpdateControls();
	void UpdateWindowSize();
	void UpdateWindowPos();

	void OnReturnKey();

	//{{AFX_MSG(CConvertorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	afx_msg void OnClose();
	afx_msg void OnChangeModes();
	afx_msg void OnChangeValue1();
	afx_msg void OnChangeValue2();
	afx_msg void OnChangeValue3();
	afx_msg void OnChangeValue4();
	afx_msg void OnChangeValue5();
	afx_msg void OnChangeValue6();
	afx_msg void OnChangeValue7();
	afx_msg void OnChangeValue8();
	afx_msg void OnChangeValue9();
	afx_msg void OnToolsSettings();
	afx_msg void OnToolsCalculator();
	afx_msg void OnToolsQuit();
	//afx_msg void OnHelpHelp();
	afx_msg BOOL OnHelpInfo(HELPINFO *pHelpInfo);
	//afx_msg void OnHelpLicence();
	afx_msg void OnHelpAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	ConversionInterfaceFactory Factory;
	ConversionInterface *pCurrentInterface;
	array<CEdit *, 9> ValueList;
	HICON hIcon;
};

struct ConvertorDlgCfg
{
	ConvertorDlgCfg();

	int nConversionType;
	int x;
	int y;
};

class ConvertorDlgCfgSerializer
{
public:
	bool Save(const ConvertorDlgCfg &a, Configuration &b) const;
	bool Retrieve(ConvertorDlgCfg &a, const Configuration &b) const;
};

//{{AFX_INSERT_LOCATION}}

#endif