#include "stdafx.h"
#include "AreaInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_SQUARE_INCHES", L"IDS_TITLE_SQUARE_FEET", L"IDS_TITLE_SQUARE_YARDS", L"IDS_TITLE_SQUARE_METRES", L"IDS_TITLE_ACRES", L"IDS_TITLE_HECTARES", L"IDS_TITLE_SQUARE_KILOMETRES", L"IDS_TITLE_SQUARE_MILES"};
static const wchar_t *const szAbrv[] = {L"IDS_ABRV_SQUARE_INCHES", L"IDS_ABRV_SQUARE_FEET", L"IDS_ABRV_SQUARE_YARDS", L"IDS_ABRV_SQUARE_METRES", L"IDS_ABRV_ACRES", L"IDS_ABRV_HECTARES", L"IDS_ABRV_SQUARE_KILOMETRES", L"IDS_ABRV_SQUARE_MILES"};

int AreaInterface::getValueCount() const
{
	return (8);
}

double AreaInterface::getValue1() const
{
	return (a.getSquareInches());
}

double AreaInterface::getValue2() const
{
	return (a.getSquareFeet());
}

double AreaInterface::getValue3() const
{
	return (a.getSquareYards());
}

double AreaInterface::getValue4() const
{
	return (a.getSquareMetres());
}

double AreaInterface::getValue5() const
{
	return (a.getAcres());
}

double AreaInterface::getValue6() const
{
	return (a.getHectares());
}

double AreaInterface::getValue7() const
{
	return (a.getSquareKilometres());
}

double AreaInterface::getValue8() const
{
	return (a.getSquareMiles());
}

const wchar_t *AreaInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *AreaInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void AreaInterface::setValue1(double x)
{
	a.setSquareInches(x);
}

void AreaInterface::setValue2(double x)
{
	a.setSquareFeet(x);
}

void AreaInterface::setValue3(double x)
{
	a.setSquareYards(x);
}

void AreaInterface::setValue4(double x)
{
	a.setSquareMetres(x);
}

void AreaInterface::setValue5(double x)
{
	a.setAcres(x);
}

void AreaInterface::setValue6(double x)
{
	a.setHectares(x);
}

void AreaInterface::setValue7(double x)
{
	a.setSquareKilometres(x);
}

void AreaInterface::setValue8(double x)
{
	a.setSquareMiles(x);
}