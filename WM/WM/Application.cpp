#include "stdafx.h"
#include "Application.h"
#include "Library\Library.h"
#include "Library\ResourceString.h"

extern "C" const int build_number;
extern "C" const time_t build_time;

const wchar_t *GetApplicationName()
{
	return (L"Weights & Measures");
}

wchar_t *GetApplicationNameFull(wchar_t *c, size_t cbSize)
{
	if (c)
	{
		swprintfs(c, cbSize, L"Weights && Measures %s (%s %d)"

#ifdef _DEBUG
							 L" (Debug)"
#endif

#ifdef _M_IX86
							 L" (x86)"
#endif

#ifdef _M_AMD64
							 L" (x64)"
#endif

#ifdef _M_ARM
							 L" (ARM)"
#endif

							 //, GetApplicationName()	// Just to fix the ampersand not showing up in the About dialog box, because Windows thinks it's an accelerator
							 , GetApplicationVersion()
							 , ResourceString(L"IDS_BUILD").c_str()
							 , GetBuildNumber());
	}

	return (c);
}

String GetApplicationNameFull()
{
	wchar_t w[64];

	GetApplicationNameFull(w, sizeof(w) / sizeof(w[0]));

	return (w);
}

const wchar_t *GetApplicationVersion()
{
	return (L"1.5");
}

int GetBuildNumber()
{
	return (build_number);
}

time_t GetBuildTime()
{
	return (build_time);
}

const wchar_t *GetRegistryKey()
{
	return (L"Software\\Weights and Measures");
}

const wchar_t *GetHelpFileName()
{
	//return (L"WM.chm");

	return (L"Readme.txt");
}