#include "stdafx.h"
#include "AngleInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_GRADIANS", L"IDS_TITLE_DEGREES", L"IDS_TITLE_RADIANS", L"IDS_TITLE_TURNS"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_GRADIANS", L"IDS_ABBRV_DEGREES", L"IDS_ABBRV_RADIANS", L"IDS_ABBRV_TURNS"};

const wchar_t *AngleInterface::getName() const
{
	return L"IDS_ANGLE";
}

int AngleInterface::getValueCount() const
{
	return 4;
}

double AngleInterface::getValue0() const
{
	return a.getGradians();
}

double AngleInterface::getValue1() const
{
	return a.getDegrees();
}

double AngleInterface::getValue2() const
{
	return a.getRadians();
}

double AngleInterface::getValue3() const
{
	return a.getTurns();
}

const wchar_t *AngleInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *AngleInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void AngleInterface::setValue0(double x)
{
	a.setGradians(x);
}

void AngleInterface::setValue1(double x)
{
	a.setDegrees(x);
}

void AngleInterface::setValue2(double x)
{
	a.setRadians(x);
}

void AngleInterface::setValue3(double x)
{
	a.setTurns(x);
}