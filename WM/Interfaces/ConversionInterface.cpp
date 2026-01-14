#include "stdafx.h"
#include "ConversionInterface.h"

const double nDefaultValue = 0.0;
const wchar_t szDefault[] = L"";

ConversionInterface::~ConversionInterface()
{
}

int ConversionInterface::getValueCount() const
{
	return (0);
}

double ConversionInterface::getValue1() const
{
	return (nDefaultValue);
}

double ConversionInterface::getValue2() const
{
	return (nDefaultValue);
}

double ConversionInterface::getValue3() const
{
	return (nDefaultValue);
}

double ConversionInterface::getValue4() const
{
	return (nDefaultValue);
}

double ConversionInterface::getValue5() const
{
	return (nDefaultValue);
}

double ConversionInterface::getValue6() const
{
	return (nDefaultValue);
}

double ConversionInterface::getValue7() const
{
	return (nDefaultValue);
}

double ConversionInterface::getValue8() const
{
	return (nDefaultValue);
}

double ConversionInterface::getValue9() const
{
	return (nDefaultValue);
}

const wchar_t *ConversionInterface::getTitle(int i) const
{
	return (szDefault);
}

const wchar_t *ConversionInterface::getAbbreviation(int i) const
{
	return (szDefault);
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