#include "stdafx.h"
#include "LengthInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_MILLIMETRES", L"IDS_TITLE_CENTIMETRES", L"IDS_TITLE_INCHES", L"IDS_TITLE_FEET", L"IDS_TITLE_YARDS", L"IDS_TITLE_METRES", L"IDS_TITLE_KILOMETRES", L"IDS_TITLE_MILES"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_MILLIMETRES", L"IDS_ABBRV_CENTIMETRES", L"IDS_ABBRV_INCHES", L"IDS_ABBRV_FEET", L"IDS_ABBRV_YARDS", L"IDS_ABBRV_METRES", L"IDS_ABBRV_KILOMETRES", L"IDS_ABBRV_MILES"};

const wchar_t *LengthInterface::getName() const
{
	return L"IDS_LENGTH";
}

int LengthInterface::getValueCount() const
{
	return 8;
}

Decimal LengthInterface::getValue0() const
{
	return l.getMillimetres();
}

Decimal LengthInterface::getValue1() const
{
	return l.getCentimetres();
}

Decimal LengthInterface::getValue2() const
{
	return l.getInches();
}

Decimal LengthInterface::getValue3() const
{
	return l.getFeet();
}

Decimal LengthInterface::getValue4() const
{
	return l.getYards();
}

Decimal LengthInterface::getValue5() const
{
	return l.getMetres();
}

Decimal LengthInterface::getValue6() const
{
	return l.getKilometres();
}

Decimal LengthInterface::getValue7() const
{
	return l.getMiles();
}

const wchar_t *LengthInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *LengthInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void LengthInterface::setValue0(Decimal x)
{
	l.setMillimetres(x);
}

void LengthInterface::setValue1(Decimal x)
{
	l.setCentimetres(x);
}

void LengthInterface::setValue2(Decimal x)
{
	l.setInches(x);
}

void LengthInterface::setValue3(Decimal x)
{
	l.setFeet(x);
}

void LengthInterface::setValue4(Decimal x)
{
	l.setYards(x);
}

void LengthInterface::setValue5(Decimal x)
{
	l.setMetres(x);
}

void LengthInterface::setValue6(Decimal x)
{
	l.setKilometres(x);
}

void LengthInterface::setValue7(Decimal x)
{
	l.setMiles(x);
}