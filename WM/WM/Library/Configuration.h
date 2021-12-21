#ifndef __CONFIGURATION_H__
#define __CONFIGURATION_H__

#include <stddef.h>

class Configuration
{
public:
	virtual int getInteger(const wchar_t *pszName, int nDefault = -1) const = 0;
	virtual double getFloat(const wchar_t *pszName, double fDefault = -1.0) const = 0;
	virtual bool getBool(const wchar_t *pszName, bool bDefault = false) const = 0;
	virtual bool getString(const wchar_t *pszName, char *pszBuffer, size_t cbSize) const = 0;
	virtual bool getString(const wchar_t *pszName, wchar_t *pszBuffer, size_t cbSize) const = 0;
	virtual bool getBinary(const wchar_t *pszName, void *pBuffer, size_t nBytes) const = 0;

	virtual bool setInteger(const wchar_t *pszName, int nValue) const = 0;
	virtual bool setFloat(const wchar_t *pszName, double fValue) const = 0;
	virtual bool setBool(const wchar_t *pszName, bool bValue) const = 0;
	virtual bool setString(const wchar_t *pszName, const char *pszString) const = 0;
	virtual bool setString(const wchar_t *pszName, const wchar_t *pszString) const = 0;
	virtual bool setBinary(const wchar_t *pszName, const void *pData, size_t nBytes) const = 0;

	virtual bool deleteValue(const wchar_t *pszName) const = 0;

	virtual ~Configuration() {}
};

#endif