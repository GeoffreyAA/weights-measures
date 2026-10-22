#include "stdafx.h"
#include "ConversionInterface.h"
#include <atomic>
#include <assert.h>

DEC_CONST Decimal Default = DEC_LIT(0.0);
std::atomic<int> Counter(0);

// June 1, 2026:
// Got the idea to use std::atomic for the ID from https://stackoverflow.com/questions/25048900

ConversionInterface::ConversionInterface() : ID(Counter.fetch_add(1))
{
}

ConversionInterface::~ConversionInterface()
{
}

int ConversionInterface::getType() const
{
	return ID;
}

const wchar_t *ConversionInterface::getName() const
{
	return L"";
}

int ConversionInterface::getValueCount() const
{
	return 0;
}

Decimal ConversionInterface::getValue0() const
{
	return Default;
}

Decimal ConversionInterface::getValue1() const
{
	return Default;
}

Decimal ConversionInterface::getValue2() const
{
	return Default;
}

Decimal ConversionInterface::getValue3() const
{
	return Default;
}

Decimal ConversionInterface::getValue4() const
{
	return Default;
}

Decimal ConversionInterface::getValue5() const
{
	return Default;
}

Decimal ConversionInterface::getValue6() const
{
	return Default;
}

Decimal ConversionInterface::getValue7() const
{
	return Default;
}

Decimal ConversionInterface::getValue8() const
{
	return Default;
}

Decimal ConversionInterface::getValue9() const
{
	return Default;
}

Decimal ConversionInterface::getValue10() const
{
	return Default;
}

Decimal ConversionInterface::getValue11() const
{
	return Default;
}

Decimal ConversionInterface::getValue12() const
{
	return Default;
}

Decimal ConversionInterface::getValue13() const
{
	return Default;
}

Decimal ConversionInterface::getValue14() const
{
	return Default;
}

Decimal ConversionInterface::getValue15() const
{
	return Default;
}

Decimal ConversionInterface::getValue(int i) const
{
	assert((0 <= i) && (i < getValueCount()));

	switch (i)
	{
		case 0:
			return getValue0();

		case 1:
			return getValue1();

		case 2:
			return getValue2();

		case 3:
			return getValue3();

		case 4:
			return getValue4();

		case 5:
			return getValue5();

		case 6:
			return getValue6();

		case 7:
			return getValue7();

		case 8:
			return getValue8();

		case 9:
			return getValue9();

		case 10:
			return getValue10();

		case 11:
			return getValue11();

		case 12:
			return getValue12();

		case 13:
			return getValue13();

		case 14:
			return getValue14();

		case 15:
			return getValue15();
	}

	return Default;
}

const wchar_t *ConversionInterface::getTitle(int i) const
{
	return L"";
}

const wchar_t *ConversionInterface::getAbbreviation(int i) const
{
	return L"";
}

void ConversionInterface::setValue0(Decimal x)
{
}

void ConversionInterface::setValue1(Decimal x)
{
}

void ConversionInterface::setValue2(Decimal x)
{
}

void ConversionInterface::setValue3(Decimal x)
{
}

void ConversionInterface::setValue4(Decimal x)
{
}

void ConversionInterface::setValue5(Decimal x)
{
}

void ConversionInterface::setValue6(Decimal x)
{
}

void ConversionInterface::setValue7(Decimal x)
{
}

void ConversionInterface::setValue8(Decimal x)
{
}

void ConversionInterface::setValue9(Decimal x)
{
}

void ConversionInterface::setValue10(Decimal x)
{
}

void ConversionInterface::setValue11(Decimal x)
{
}

void ConversionInterface::setValue12(Decimal x)
{
}

void ConversionInterface::setValue13(Decimal x)
{
}

void ConversionInterface::setValue14(Decimal x)
{
}

void ConversionInterface::setValue15(Decimal x)
{
}

void ConversionInterface::setValue(int i, Decimal x)
{
	assert((0 <= i) && (i < getValueCount()));

	switch (i)
	{
		case 0:
			setValue0(x);
			break;

		case 1:
			setValue1(x);
			break;

		case 2:
			setValue2(x);
			break;

		case 3:
			setValue3(x);
			break;

		case 4:
			setValue4(x);
			break;

		case 5:
			setValue5(x);
			break;

		case 6:
			setValue6(x);
			break;

		case 7:
			setValue7(x);
			break;

		case 8:
			setValue8(x);
			break;

		case 9:
			setValue9(x);
			break;

		case 10:
			setValue10(x);
			break;

		case 11:
			setValue11(x);
			break;

		case 12:
			setValue12(x);
			break;

		case 13:
			setValue13(x);
			break;

		case 14:
			setValue14(x);
			break;

		case 15:
			setValue15(x);
			break;
	}
}