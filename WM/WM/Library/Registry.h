#ifndef __REGISTRY_H__
#define __REGISTRY_H__

#include "Configuration.h"
#include <windows.h>

class Registry : public Configuration
{
public:
	Registry();
	Registry(HKEY hKey);
	Registry(const wchar_t *pszSubKey, REGSAM samDesired, bool bCreate);
	Registry(HKEY hKey, const wchar_t *pszSubKey, REGSAM samDesired, bool bCreate);
	~Registry();

	int getInteger(const wchar_t *pszName, int nDefault = -1) const;
	double getFloat(const wchar_t *pszName, double fDefault = -1.0) const;
	bool getBool(const wchar_t *pszName, bool bDefault = false) const;
	bool getString(const wchar_t *pszName, char *pszBuffer, size_t cbSize) const;
	bool getString(const wchar_t *pszName, wchar_t *pszBuffer, size_t cbSize) const;
	bool getBinary(const wchar_t *pszName, void *pBuffer, size_t nBytes) const;

	bool setInteger(const wchar_t *pszName, int nValue) const;
	bool setFloat(const wchar_t *pszName, double fValue) const;
	bool setBool(const wchar_t *pszName, bool bValue) const;
	bool setString(const wchar_t *pszName, const char *pszString) const;
	bool setString(const wchar_t *pszName, const wchar_t *pszString) const;
	bool setBinary(const wchar_t *pszName, const void *pData, size_t nBytes) const;

	bool deleteValue(const wchar_t *pszName) const;

	bool open(const wchar_t *pszSubKey, REGSAM samDesired, bool bCreate);
	bool open(HKEY hKey, const wchar_t *pszSubKey, REGSAM samDesired, bool bCreate);
	bool close();

	bool attach(HKEY hKey);
	HKEY detach();

	bool isReady() const;

	HKEY getHandle() const;

private:
	Registry(const Registry &);
	Registry& operator=(const Registry &);

private:
	HKEY h;
};

#endif