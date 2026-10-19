#include "stdafx.h"
#include "SpeedInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_KILOMETRES_PER_HOUR", L"IDS_TITLE_FEET_PER_SECOND", L"IDS_TITLE_MILES_PER_HOUR", L"IDS_TITLE_METRES_PER_SECOND", L"IDS_TITLE_KNOTS", L"IDS_TITLE_MACH", L"IDS_TITLE_LIGHT"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_KILOMETRES_PER_HOUR", L"IDS_ABBRV_FEET_PER_SECOND", L"IDS_ABBRV_MILES_PER_HOUR", L"IDS_ABBRV_METRES_PER_SECOND", L"IDS_ABBRV_KNOTS", L"IDS_ABBRV_MACH", L"IDS_ABBRV_LIGHT"};

const wchar_t *SpeedInterface::getName() const
{
	return L"IDS_SPEED";
}

int SpeedInterface::getValueCount() const
{
	return 7;
}

Decimal SpeedInterface::getValue0() const
{
	return s.getKilometresPerHour();
}

Decimal SpeedInterface::getValue1() const
{
	return s.getFeetPerSecond();
}

Decimal SpeedInterface::getValue2() const
{
	return s.getMilesPerHour();
}

Decimal SpeedInterface::getValue3() const
{
	return s.getMetresPerSecond();
}

Decimal SpeedInterface::getValue4() const
{
	return s.getKnots();
}

Decimal SpeedInterface::getValue5() const
{
	return s.getMach();
}

Decimal SpeedInterface::getValue6() const
{
	return s.getLight();
}

const wchar_t *SpeedInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *SpeedInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void SpeedInterface::setValue0(Decimal x)
{
	s.setKilometresPerHour(x);
}

void SpeedInterface::setValue1(Decimal x)
{
	s.setFeetPerSecond(x);
}

void SpeedInterface::setValue2(Decimal x)
{
	s.setMilesPerHour(x);
}

void SpeedInterface::setValue3(Decimal x)
{
	s.setMetresPerSecond(x);
}

void SpeedInterface::setValue4(Decimal x)
{
	s.setKnots(x);
}

void SpeedInterface::setValue5(Decimal x)
{
	s.setMach(x);
}

void SpeedInterface::setValue6(Decimal x)
{
	s.setLight(x);
}