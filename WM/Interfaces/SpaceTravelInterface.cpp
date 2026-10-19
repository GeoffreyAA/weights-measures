#include "stdafx.h"
#include "SpaceTravelInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_DISTANCE", L"IDS_TITLE_SPEED_KMS", L"", L"IDS_TITLE_TIME"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_DISTANCE", L"IDS_ABBRV_SPEED_KMS", L"IDS_ABBRV_SPEED_LIGHT", L"IDS_ABBRV_TIME"};

const wchar_t *SpaceTravelInterface::getName() const
{
	return L"IDS_SPACE_TRAVEL";
}

int SpaceTravelInterface::getValueCount() const
{
	return 4;
}

Decimal SpaceTravelInterface::getValue0() const
{
	return s.getDistanceLightYears();
}

Decimal SpaceTravelInterface::getValue1() const
{
	return s.getSpeedKmPerSecond();
}

Decimal SpaceTravelInterface::getValue2() const
{
	return s.getSpeedLightPercent();
}

Decimal SpaceTravelInterface::getValue3() const
{
	return s.getTravelTimeYears();
}

const wchar_t *SpaceTravelInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *SpaceTravelInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void SpaceTravelInterface::setValue0(Decimal x)
{
	s.setDistanceLightYears(x);
}

void SpaceTravelInterface::setValue1(Decimal x)
{
	s.setSpeedKmPerSecond(x);
}

void SpaceTravelInterface::setValue2(Decimal x)
{
	s.setSpeedLightPercent(x);
}

void SpaceTravelInterface::setValue3(Decimal x)
{
}