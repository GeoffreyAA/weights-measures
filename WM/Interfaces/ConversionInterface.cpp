#include "stdafx.h"
#include "ConversionInterface.h"
#include <assert.h>

const double DefaultValue = 0.0;
const wchar_t szDefault[] = L"";

ConversionInterface::~ConversionInterface()
{
}

int ConversionInterface::getValueCount() const
{
	return 0;
}

double ConversionInterface::getValue0() const
{
	return DefaultValue;
}

double ConversionInterface::getValue1() const
{
	return DefaultValue;
}

double ConversionInterface::getValue2() const
{
	return DefaultValue;
}

double ConversionInterface::getValue3() const
{
	return DefaultValue;
}

double ConversionInterface::getValue4() const
{
	return DefaultValue;
}

double ConversionInterface::getValue5() const
{
	return DefaultValue;
}

double ConversionInterface::getValue6() const
{
	return DefaultValue;
}

double ConversionInterface::getValue7() const
{
	return DefaultValue;
}

double ConversionInterface::getValue8() const
{
	return DefaultValue;
}

double ConversionInterface::getValue9() const
{
	return DefaultValue;
}

double ConversionInterface::getValue10() const
{
	return DefaultValue;
}

double ConversionInterface::getValue11() const
{
	return DefaultValue;
}

double ConversionInterface::getValue12() const
{
	return DefaultValue;
}

double ConversionInterface::getValue13() const
{
	return DefaultValue;
}

double ConversionInterface::getValue14() const
{
	return DefaultValue;
}

double ConversionInterface::getValue15() const
{
	return DefaultValue;
}

double ConversionInterface::getValue(int i) const
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

	return DefaultValue;
}

const wchar_t *ConversionInterface::getTitle(int i) const
{
	return szDefault;
}

const wchar_t *ConversionInterface::getAbbreviation(int i) const
{
	return szDefault;
}

void ConversionInterface::setValue0(double x)
{
}

void ConversionInterface::setValue1(double x)
{
}

void ConversionInterface::setValue2(double x)
{
}

void ConversionInterface::setValue3(double x)
{
}

void ConversionInterface::setValue4(double x)
{
}

void ConversionInterface::setValue5(double x)
{
}

void ConversionInterface::setValue6(double x)
{
}

void ConversionInterface::setValue7(double x)
{
}

void ConversionInterface::setValue8(double x)
{
}

void ConversionInterface::setValue9(double x)
{
}

void ConversionInterface::setValue10(double x)
{
}

void ConversionInterface::setValue11(double x)
{
}

void ConversionInterface::setValue12(double x)
{
}

void ConversionInterface::setValue13(double x)
{
}

void ConversionInterface::setValue14(double x)
{
}

void ConversionInterface::setValue15(double x)
{
}

void ConversionInterface::setValue(int i, double x)
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