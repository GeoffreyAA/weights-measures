#include "stdafx.h"
#include "AngleInterface.h"

static const wchar_t* const szTitles[] = {L"IDS_TITLE_GRADIANS", L"IDS_TITLE_DEGREES", L"IDS_TITLE_RADIANS", L"IDS_TITLE_TURNS"};
static const wchar_t* const szAbrv[] = {L"IDS_ABRV_GRADIANS", L"IDS_ABRV_DEGREES", L"IDS_ABRV_RADIANS", L"IDS_ABRV_TURNS"};

int AngleInterface::getValueCount() const
{
	return (4);
}

double AngleInterface::getValue1() const
{
	return (a.getGradians());
}

double AngleInterface::getValue2() const
{
	return (a.getDegrees());
}

double AngleInterface::getValue3() const
{
	return (a.getRadians());
}

double AngleInterface::getValue4() const
{
	return (a.getTurns());
}

const wchar_t *AngleInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *AngleInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void AngleInterface::setValue1(double x)
{
	a.setGradians(x);
}

void AngleInterface::setValue2(double x)
{
	a.setDegrees(x);
}

void AngleInterface::setValue3(double x)
{
	a.setRadians(x);
}

void AngleInterface::setValue4(double x)
{
	a.setTurns(x);
}