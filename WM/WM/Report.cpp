#include "stdafx.h"
#include "Report.h"

#include <stdio.h>
#include "Application.h"
#include "Library\Win32Library.h"
#include "Library\String.h"
#include "Library\StrW.h"
#include "Library\ResourceString.h"

StrUTF8 ResourceStringUTF8(const wchar_t *pszName)
{
	String s(ResourceString(pszName).c_str());

	for (String::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] == L'<')
		{
			s[i] = L'[';
		}
		else if (s[i] == L'>')
		{
			s[i] = L']';
		}
	}

	return (s.c_str());
}

bool SaveReport(const wchar_t *pszFile, const ConversionInterface *p)
{
	if (pszFile && p)
	{
		FILE *f = _wfopen(pszFile, L"wb");

		if (f)
		{
			fprintf(f, "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\"\n\t\"http://www.w3.org/TR/html4/strict.dtd\">\n\n");

			fprintf(f, "<html>\n\n");

			fprintf(f, "<head>\n");
			fprintf(f, "<title>%s</title>\n", ResourceStringUTF8(L"IDS_REPORT").c_str());
			fprintf(f, "<style type=\"text/css\">\n");
			fprintf(f, "</style>\n");
			fprintf(f, "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n");
			fprintf(f, "</head>\n\n");

			fprintf(f, "<body>\n\n");

			wchar_t w[128];

			fprintf(f, "<h1>%s (%s)</h1>\n\n", ResourceStringUTF8(L"IDS_REPORT").c_str()
											 , GetDateTimeFormatted(w, sizeof(w) / sizeof(w[0]), NULL) ? StrUTF8(w).c_str() : ResourceStringUTF8(L"IDS_ERROR").c_str());

			const double v[] = {p->getValue1(), p->getValue2(), p->getValue3(),
								p->getValue4(), p->getValue5(), p->getValue6(),
								p->getValue7(), p->getValue8(), p->getValue9()};

			const int count = (p->getValueCount() < (sizeof(v) / sizeof(v[0]))) ? p->getValueCount() : (sizeof(v) / sizeof(v[0]));

			for (int i = 0; i < count; i++)
			{
				fprintf(f, "<p>%s %.16g %s</p>\n\n", ResourceStringUTF8(p->getTitle(i)).c_str()
												   , v[i]
												   , ResourceStringUTF8(p->getAbbreviation(i)).c_str());
			}

			fprintf(f, "</body>\n\n");

			fprintf(f, "</html>");

			fclose(f);

			return true;
		}
	}

	return false;
}