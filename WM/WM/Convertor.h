#ifndef __C_CONVERTOR_APP_H__
#define __C_CONVERTOR_APP_H__

#if _MSC_VER > 1000
#pragma once
#endif

#ifndef __AFXWIN_H__
	#error Include "stdafx.h" before including this file for PCH
#endif

#include "Resource.h"

class CConvertorApp : public CWinApp
{
public:
	CConvertorApp();

	//{{AFX_VIRTUAL(CConvertorApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CConvertorApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif