#include "stdafx.h"
#include "Language.h"
#include "ConfigFile.h"
#include "File.h"
#include "Library.h"
#include <windows.h>

Language::Language(const wchar_t *pszName, const StringDictionary &s) : Name(pszName ? pszName : String()), Strings(s)
{
}

const String& Language::getName() const
{
	return (Name);
}

String Language::getString(const wchar_t *pszName) const
{
	if (pszName)
	{
		StringDictionary::const_iterator i = Strings.find(pszName);

		if (i != Strings.end())
		{
			return ((*i).second);
		}

		if (ContainsText(pszName))
		{
			wchar_t s[256];

			swprintfs(s, sizeof(s) / sizeof(s[0]), L"<%s>", pszName);

			return (s);
		}
	}

	return (L"");
}


///////////////////////////////////////////////////////////////

const wchar_t sLanguageName[] = L"Language";

LanguageManager LanguageManager::Instance;

LanguageManager::LanguageManager() : pLanguage(NULL), DefaultLanguage(L"None", StringDictionary())
{
	wchar_t w[256];

	if (ConfigFile().getString(sLanguageName, w, sizeof(w) / sizeof(w[0])))
	{
		setCurrentLanguage(w);
	}
	else
	{
		setCurrentLanguage(L"English");
	}
}

LanguageManager::~LanguageManager()
{
	std::lock_guard<std::mutex> lock(cs);

	if (pLanguage)
	{
		ConfigFile().setString(sLanguageName, pLanguage->getName().c_str());

		delete pLanguage;
	}
}

StringList LanguageManager::getAvailableLanguages() const
{
	StringList s;

	wchar_t w[MAX_PATH];
	const size_t size = sizeof(w) / sizeof(w[0]);

	if (GetProgramPath(w, size) && AddFileName(w, L"Languages\\*.lng", size))
	{
		WIN32_FIND_DATAW wfd;
		memset(&wfd, 0, sizeof(wfd));

		HANDLE hFile = FindFirstFileW(w, &wfd);

		if (hFile != INVALID_HANDLE_VALUE)
		{
			do {

				RemoveFileExt(wfd.cFileName);
				s.push_back(wfd.cFileName);

			} while (FindNextFileW(hFile, &wfd));

			FindClose(hFile);
		}
	}

	return (s);
}

Language LanguageManager::getCurrentLanguage()
{
	std::lock_guard<std::mutex> lock(cs);

	return (pLanguage ? *pLanguage : DefaultLanguage);
}

bool LanguageManager::setCurrentLanguage(const wchar_t *pszName)
{
	Language *p = LoadLanguage(pszName);

	if (p)
	{
		std::lock_guard<std::mutex> lock(cs);

		if (pLanguage)
		{
			delete pLanguage;
		}

		pLanguage = p;

		return true;
	}

	return false;
}

void LanguageManager::getCurrentLanguageName(String &s)
{
	std::lock_guard<std::mutex> lock(cs);

	s = pLanguage ? pLanguage->getName() : DefaultLanguage.getName();
}

void LanguageManager::getStringFromCurrentLanguage(const wchar_t *pszName, String &s)
{
	std::lock_guard<std::mutex> lock(cs);

	s = pLanguage ? pLanguage->getString(pszName) : DefaultLanguage.getString(pszName);
}

Language *LanguageManager::LoadLanguage(const wchar_t *pszName) const
{
	if (pszName)
	{
		wchar_t w[MAX_PATH];
		const size_t size = sizeof(w) / sizeof(w[0]);

		if (GetProgramPath(w, size) && AddFileName(w, L"Languages", size) && AddFileName(w, pszName, size) && AddFileExt(w, L"lng", size))
		{
			StringDictionary d;

			if (StringDictionaryReader().read(w, d))
			{
				return (new Language(pszName, d));
			}
		}
	}

	return (NULL);
}

LanguageManager& LanguageManager::getInstance()
{
	return (Instance);
}