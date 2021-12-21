#ifndef __REPORT_H__
#define __REPORT_H__

#include <stddef.h>
#include "Interfaces\ConversionInterface.h"

bool SaveReport(const wchar_t *pszFile, const ConversionInterface *p);

#endif