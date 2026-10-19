#include "stdafx.h"
#include "Decimal.h"
#include "Library.h"
#include "StrW.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if (DECIMAL_TYPE == 1)	// Boost Decimal

#include <format>

String GetDecimalType()
{
	return L"Boost Decimal";
}

void DecimalToString(Decimal x, wchar_t *s, size_t size)
{
	if (s != nullptr && size > 0)
	{
		std::format_to_n_result r = std::format_to_n(s, size - 1, L"{}", x);
		*r.out = L'\0';
	}
}

String DecimalToString(Decimal x)
{
	return std::format(L"{}", x);
}

Decimal StringToDecimal(const wchar_t *s)
{
	if (s)
	{
		wchar_t w[256];
		wcscpys(w, sizeof(w) / sizeof(w[0]), s);

		if (!IsNumber(w))
			RemoveNonNbrs(w);

		return Decimal(StrA(w).c_str());
	}

	return Decimal(0);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#elif (DECIMAL_TYPE == 2)	// Boost Multiprecision

#include <sstream>
#include <iomanip>

String GetDecimalType()
{
	return L"Boost Multiprecision";
}

void DecimalToString(Decimal x, wchar_t *s, size_t size)
{
	String str = DecimalToString(x);

	wcscpys(s, size, str.c_str());
}

String DecimalToString(Decimal x)
{
	std::stringstream s;

	s << std::setprecision(16) << x;

	return StrW(s.str().c_str()).c_str();
}

Decimal StringToDecimal(const wchar_t *s)
{
	if (s)
	{
		wchar_t w[256];
		wcscpys(w, sizeof(w) / sizeof(w[0]), s);

		if (!IsNumber(w))
			RemoveNonNbrs(w);

		return Decimal(StrA(w).c_str());
	}

	return Decimal(0);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#else	// double

String GetDecimalType()
{
	return L"double";
}

void DecimalToString(Decimal x, wchar_t *s, size_t size)
{
	if (s)
		swprintf(s, size, L"%.16g", x);
}

String DecimalToString(Decimal x)
{
	wchar_t s[256];
	DecimalToString(x, s, sizeof(s) / sizeof(s[0]));

	return s;
}

Decimal StringToDecimal(const wchar_t *s)
{
	if (s)
	{
		wchar_t w[256];
		wcscpys(w, sizeof(w) / sizeof(w[0]), s);

		if (!IsNumber(w))
			RemoveNonNbrs(w);

		return wcstod(w, nullptr);
	}

	return 0.0;
}

#endif