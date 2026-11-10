#include "stdafx.h"
#include "Decimal.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if (DECIMAL_TYPE == 1)

#define FMT_HEADER_ONLY
#include <boost/decimal/fmt_format.hpp>
#include <fmt/compile.h>

const wchar_t *GetDecimalName()
{
	return L"Boost.Decimal";
}

void DecimalToString(const Decimal &x, wchar_t *s, size_t size)
{
	if (s != nullptr && size > 0)
	{
		auto r = fmt::format_to_n(s, size - 1, FMT_COMPILE(L"{}"), x);
		*r.out = L'\0';
	}
}

String DecimalToString(const Decimal &x)
{
	return fmt::format(FMT_COMPILE(L"{}"), x);
}

Decimal StringToDecimal(const wchar_t *s)
{
	if (s)
		return boost::decimal::wcstod64(s, nullptr);

	return {0};
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#elif (DECIMAL_TYPE == 2)

#include "Library.h"
#include "StrW.h"

const wchar_t *GetDecimalName()
{
	return L"Boost.Multiprecision";
}

void DecimalToString(const Decimal &x, wchar_t *s, size_t size)
{
	wcscpys(s, size, DecimalToString(x).c_str());
}

String DecimalToString(const Decimal &x)
{
	return StrW(x.str().c_str()).c_str();
}

Decimal StringToDecimal(const wchar_t *s)
{
	return s ? static_cast<Decimal>(StrA(s).c_str())
			 : static_cast<Decimal>(0);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#else

const wchar_t *GetDecimalName()
{
	return L"double";
}

void DecimalToString(const Decimal &x, wchar_t *s, size_t size)
{
	if (s)
		swprintf(s, size, L"%.16g", x);
}

String DecimalToString(const Decimal &x)
{
	wchar_t s[128];

	DecimalToString(x, s, sizeof(s) / sizeof(s[0]));

	return s;
}

Decimal StringToDecimal(const wchar_t *s)
{
	if (s)
		return wcstod(s, nullptr);

	return {0.0};
}

#endif


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal	StringToDecimal(const String &s)
{
	return StringToDecimal(s.c_str());
}