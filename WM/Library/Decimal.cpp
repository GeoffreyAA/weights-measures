#include "stdafx.h"
#include "Decimal.h"
#include "Library.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if (DECIMAL_TYPE == 1)

#define FMT_HEADER_ONLY
#include <boost/decimal/fmt_format.hpp>
#include <fmt/compile.h>

String GetDecimalName()
{
	return L"Boost.Decimal";
}

String DecimalToString(const Decimal &x)
{
	return fmt::format(FMT_COMPILE(L"{}"), x);
}

void DecimalToString(const Decimal &x, wchar_t *s, size_t size)
{
	if (s != nullptr && size > 0)
	{
		auto r = fmt::format_to_n(s, size - 1, FMT_COMPILE(L"{}"), x);
		*r.out = L'\0';
	}
}

Decimal StringToDecimal(const wchar_t *s)
{
	if (s)
	{
		wchar_t w[128];
		wcscpys(w, sizeof(w) / sizeof(w[0]), s);

		if (!IsNumber(w))
			RemoveNonNbrs(w);

		return boost::decimal::wcstod64(w, nullptr);
	}

	return Decimal(0);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#elif (DECIMAL_TYPE == 2)

#include <sstream>
#include <iomanip>
#include "StrW.h"

String GetDecimalName()
{
	return L"Boost.Multiprecision";
}

String DecimalToString(const Decimal &x)
{
	std::stringstream s;

	s << std::setprecision(16) << x;

	return StrW(s.str().c_str()).c_str();
}

void DecimalToString(const Decimal &x, wchar_t *s, size_t size)
{
	wcscpys(s, size, DecimalToString(x).c_str());
}

Decimal StringToDecimal(const wchar_t *s)
{
	if (s)
	{
		wchar_t w[128];
		wcscpys(w, sizeof(w) / sizeof(w[0]), s);

		if (!IsNumber(w))
			RemoveNonNbrs(w);

		return Decimal(StrA(w).c_str());
	}

	return Decimal(0);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#else

String GetDecimalName()
{
	return L"double";
}

String DecimalToString(const Decimal &x)
{
	wchar_t s[128];
	DecimalToString(x, s, sizeof(s) / sizeof(s[0]));

	return s;
}

void DecimalToString(const Decimal &x, wchar_t *s, size_t size)
{
	if (s)
		swprintf(s, size, L"%.16g", x);
}

Decimal StringToDecimal(const wchar_t *s)
{
	if (s)
	{
		wchar_t w[128];
		wcscpys(w, sizeof(w) / sizeof(w[0]), s);

		if (!IsNumber(w))
			RemoveNonNbrs(w);

		return wcstod(w, nullptr);
	}

	return 0.0;
}

#endif