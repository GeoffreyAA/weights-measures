#ifndef __DECIMAL_H__
#define __DECIMAL_H__

// DECIMAL_TYPE
//
// 0 or other == Use built-in double
// 1 == Use Boost Decimal
// 2 == Use Boost Multiprecision
//
// If using non-built-in types, the relevant libraries must be in the include directory,
// and other settings, such as C++ level, adjusted.
//
// Use the DEC_LIT macro to enclose number literals.
// For example, DEC_LIT(3.1415)

#define DECIMAL_TYPE	0


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef DECIMAL_TYPE
#error Decimal type not defined.
#endif

#if (DECIMAL_TYPE == 1)

#include <boost/decimal.hpp>

typedef boost::decimal::decimal64_t Decimal;
#define DEC_LIT(x)	(static_cast<Decimal>(#x))


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#elif (DECIMAL_TYPE == 2)

#include <boost/multiprecision/cpp_dec_float.hpp>

typedef boost::multiprecision::cpp_dec_float_50 Decimal;
#define DEC_LIT(x)	(static_cast<Decimal>(#x))


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#else

typedef double Decimal;
#define DEC_LIT(x)	(static_cast<Decimal>(x))

#endif


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "String.h"

String GetDecimalType();

void DecimalToString(Decimal x, wchar_t *s, size_t size);
String DecimalToString(Decimal x);
Decimal StringToDecimal(const wchar_t *s);

#endif