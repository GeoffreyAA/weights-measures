#include "stdafx.h"
#include "SpeedInterface.h"

static const wchar_t* const szTitles[] = {L"IDS_TITLE_KILOMETRES_PER_HOUR", L"IDS_TITLE_FEET_PER_SECOND", L"IDS_TITLE_MILES_PER_HOUR", L"IDS_TITLE_METRES_PER_SECOND", L"IDS_TITLE_KNOTS", L"IDS_TITLE_MACH", L"IDS_TITLE_LIGHT"};
static const wchar_t *const szAbrv[] = {L"IDS_ABRV_KILOMETRES_PER_HOUR", L"IDS_ABRV_FEET_PER_SECOND", L"IDS_ABRV_MILES_PER_HOUR", L"IDS_ABRV_METRES_PER_SECOND", L"IDS_ABRV_KNOTS", L"IDS_ABRV_MACH", L"IDS_ABRV_LIGHT"};

int SpeedInterface::getValueCount() const
{
	return (7);
}

double SpeedInterface::getValue1() const
{
	return (s.getKilometresPerHour());
}

double SpeedInterface::getValue2() const
{
	return (s.getFeetPerSecond());
}

double SpeedInterface::getValue3() const
{
	return (s.getMilesPerHour());
}

double SpeedInterface::getValue4() const
{
	return (s.getMetresPerSecond());
}

double SpeedInterface::getValue5() const
{
	return (s.getKnots());
}

double SpeedInterface::getValue6() const
{
	return (s.getMach());
}

double SpeedInterface::getValue7() const
{
	return (s.getLight());
}

const wchar_t *SpeedInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *SpeedInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void SpeedInterface::setValue1(double x)
{
	s.setKilometresPerHour(x);
}

void SpeedInterface::setValue2(double x)
{
	s.setFeetPerSecond(x);
}

void SpeedInterface::setValue3(double x)
{
	s.setMilesPerHour(x);
}

void SpeedInterface::setValue4(double x)
{
	s.setMetresPerSecond(x);
}

void SpeedInterface::setValue5(double x)
{
	s.setKnots(x);
}

void SpeedInterface::setValue6(double x)
{
	s.setMach(x);
}

void SpeedInterface::setValue7(double x)
{
	s.setLight(x);
}