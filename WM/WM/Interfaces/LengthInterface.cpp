#include "stdafx.h"
#include "LengthInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_MILLIMETRES", L"IDS_TITLE_CENTIMETRES", L"IDS_TITLE_INCHES", L"IDS_TITLE_FEET", L"IDS_TITLE_YARDS", L"IDS_TITLE_METRES", L"IDS_TITLE_KILOMETRES", L"IDS_TITLE_MILES"};
static const wchar_t *const szAbrv[] = {L"IDS_ABRV_MILLIMETRES", L"IDS_ABRV_CENTIMETRES", L"IDS_ABRV_INCHES", L"IDS_ABRV_FEET", L"IDS_ABRV_YARDS", L"IDS_ABRV_METRES", L"IDS_ABRV_KILOMETRES", L"IDS_ABRV_MILES"};

int LengthInterface::getValueCount() const
{
	return (8);
}

double LengthInterface::getValue1() const
{
	return (l.getMillimetres());
}

double LengthInterface::getValue2() const
{
	return (l.getCentimetres());
}

double LengthInterface::getValue3() const
{
	return (l.getInches());
}

double LengthInterface::getValue4() const
{
	return (l.getFeet());
}

double LengthInterface::getValue5() const
{
	return (l.getYards());
}

double LengthInterface::getValue6() const
{
	return (l.getMetres());
}

double LengthInterface::getValue7() const
{
	return (l.getKilometres());
}

double LengthInterface::getValue8() const
{
	return (l.getMiles());
}

const wchar_t *LengthInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *LengthInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void LengthInterface::setValue1(double x)
{
	l.setMillimetres(x);
}

void LengthInterface::setValue2(double x)
{
	l.setCentimetres(x);
}

void LengthInterface::setValue3(double x)
{
	l.setInches(x);
}

void LengthInterface::setValue4(double x)
{
	l.setFeet(x);
}

void LengthInterface::setValue5(double x)
{
	l.setYards(x);
}

void LengthInterface::setValue6(double x)
{
	l.setMetres(x);
}

void LengthInterface::setValue7(double x)
{
	l.setKilometres(x);
}

void LengthInterface::setValue8(double x)
{
	l.setMiles(x);
}