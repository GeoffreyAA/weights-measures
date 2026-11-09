#include "stdafx.h"
#include "AstronomyInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_KILOMETRES", L"IDS_TITLE_ASTRONOMICAL_UNITS", L"IDS_TITLE_LIGHT_YEARS", L"IDS_TITLE_PARSECS"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_KILOMETRES", L"IDS_ABBRV_ASTRONOMICAL_UNITS", L"IDS_ABBRV_LIGHT_YEARS", L"IDS_ABBRV_PARSECS"};

const wchar_t *AstronomyInterface::getName() const
{
	return L"IDS_ASTRONOMY";
}

int AstronomyInterface::getValueCount() const
{
	return 4;
}

Decimal AstronomyInterface::getValue0() const
{
	return l.getKilometres();
}

Decimal AstronomyInterface::getValue1() const
{
	return l.getAstronomicalUnits();
}

Decimal AstronomyInterface::getValue2() const
{
	return l.getLightYears();
}

Decimal AstronomyInterface::getValue3() const
{
	return l.getParsecs();
}

const wchar_t *AstronomyInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *AstronomyInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void AstronomyInterface::setValue0(Decimal x)
{
	l.setKilometres(x);
}

void AstronomyInterface::setValue1(Decimal x)
{
	l.setAstronomicalUnits(x);
}

void AstronomyInterface::setValue2(Decimal x)
{
	l.setLightYears(x);
}

void AstronomyInterface::setValue3(Decimal x)
{
	l.setParsecs(x);
}