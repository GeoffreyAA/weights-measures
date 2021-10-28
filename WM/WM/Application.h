#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include <stddef.h>
#include <time.h>
#include "Library\String.h"

const wchar_t *GetApplicationName();
wchar_t *GetApplicationNameFull(wchar_t *c, size_t cbSize);
String GetApplicationNameFull();
const wchar_t *GetApplicationVersion();
int GetBuildNumber();
time_t GetBuildTime();
const wchar_t *GetRegistryKey();
const wchar_t *GetHelpFileName();

#endif