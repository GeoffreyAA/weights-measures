#include "stdafx.h"
#include "StringDictionary.h"
#include <stdio.h>
#include <string.h>
#include "Library.h"

bool StringDictionaryReader::read(const wchar_t *pszFile, StringDictionary &d) const
{
	if (pszFile)
	{
		FILE *f = _wfopen(pszFile, L"rb");

		if (f)
		{
			d.clear();

			wchar_t a[4096];

			while (fgetws(a, sizeof(a) / sizeof(a[0]), f) != NULL)
			{
				wchar_t *b = BreakString(a);

				if (b)
				{
					d.insert(StringDictionary::value_type(a, b));
				}
			}

			fclose(f);

			return true;
		}
	}

	return false;
}

wchar_t *StringDictionaryReader::BreakString(wchar_t *s) const
{
	if (s)
	{
		wchar_t *Separator = (wchar_t *)wcschr(s, L'=');

		if (Separator)
		{
			*Separator = L'\0';

			wchar_t *b = Separator + 1;

			Trim(s);
			Trim(b);

			ReplaceNewlines(b);

			if (wcslen(s) && wcslen(b))
			{
				return (b);
			}
		}
	}

	return (NULL);
}

void StringDictionaryReader::ReplaceNewlines(wchar_t *s) const
{
	if (s)
	{
		for (size_t i = wcslen(s); i > 0; i--)
		{
			if ((s[i] == L'n') && (s[i - 1] == L'\\'))
			{
				s[i] = L'\n';

				StringDelete(s, i - 1);
			}
		}
	}
}

bool StringDictionaryWriter::write(const wchar_t *pszFile, const StringDictionary &d) const
{
	if (pszFile)
	{
		FILE *f = _wfopen(pszFile, L"wb");

		if (f)
		{
			for (StringDictionary::const_iterator i = d.begin(); i != d.end(); i++)
			{
				fwprintf(f, L"%s=%s\r\n", (*i).first.c_str(), TranslateNewlines((*i).second).c_str());
			}

			fclose(f);

			return true;
		}
	}

	return false;
}

String StringDictionaryWriter::TranslateNewlines(const String &s) const
{
	String a;
	a.reserve(s.size());

	for (String::const_iterator i = s.begin(); i != s.end(); i++)
	{
		if ((*i) == L'\n')
		{
			a.append(L"\\n");
		}
		else
		{
			a.append(1, *i);
		}
	}

	return (a);
}