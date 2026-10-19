#include "stdafx.h"
#include "AreaInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_SQUARE_INCHES", L"IDS_TITLE_SQUARE_FEET", L"IDS_TITLE_SQUARE_YARDS", L"IDS_TITLE_SQUARE_METRES", L"IDS_TITLE_ACRES", L"IDS_TITLE_HECTARES", L"IDS_TITLE_SQUARE_KILOMETRES", L"IDS_TITLE_SQUARE_MILES"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_SQUARE_INCHES", L"IDS_ABBRV_SQUARE_FEET", L"IDS_ABBRV_SQUARE_YARDS", L"IDS_ABBRV_SQUARE_METRES", L"IDS_ABBRV_ACRES", L"IDS_ABBRV_HECTARES", L"IDS_ABBRV_SQUARE_KILOMETRES", L"IDS_ABBRV_SQUARE_MILES"};

const wchar_t *AreaInterface::getName() const
{
	return L"IDS_AREA";
}

int AreaInterface::getValueCount() const
{
	return 8;
}

Decimal AreaInterface::getValue0() const
{
	return a.getSquareInches();
}

Decimal AreaInterface::getValue1() const
{
	return a.getSquareFeet();
}

Decimal AreaInterface::getValue2() const
{
	return a.getSquareYards();
}

Decimal AreaInterface::getValue3() const
{
	return a.getSquareMetres();
}

Decimal AreaInterface::getValue4() const
{
	return a.getAcres();
}

Decimal AreaInterface::getValue5() const
{
	return a.getHectares();
}

Decimal AreaInterface::getValue6() const
{
	return a.getSquareKilometres();
}

Decimal AreaInterface::getValue7() const
{
	return a.getSquareMiles();
}

const wchar_t *AreaInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *AreaInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void AreaInterface::setValue0(Decimal x)
{
	a.setSquareInches(x);
}

void AreaInterface::setValue1(Decimal x)
{
	a.setSquareFeet(x);
}

void AreaInterface::setValue2(Decimal x)
{
	a.setSquareYards(x);
}

void AreaInterface::setValue3(Decimal x)
{
	a.setSquareMetres(x);
}

void AreaInterface::setValue4(Decimal x)
{
	a.setAcres(x);
}

void AreaInterface::setValue5(Decimal x)
{
	a.setHectares(x);
}

void AreaInterface::setValue6(Decimal x)
{
	a.setSquareKilometres(x);
}

void AreaInterface::setValue7(Decimal x)
{
	a.setSquareMiles(x);
}