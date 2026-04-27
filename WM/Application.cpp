#include "stdafx.h"
#include "Application.h"

extern "C" const int build_number;
extern "C" const time_t build_time;

const wchar_t *GetApplicationName()
{
	return (L"Weights & Measures");
}

const wchar_t *GetApplicationVersion()
{
	return (L"1.9");
}

int GetBuildNumber()
{
	return (build_number);
}

time_t GetBuildTime()
{
	return (build_time);
}

const wchar_t *GetCopyright()
{
	return (L"\u00a9 Geoffrey A., 2021");
}

const wchar_t *GetRegistryKey()
{
	return (L"Software\\Weights & Measures");
}

const wchar_t *GetHelpFileName()
{
	return (L"Readme.txt");
}