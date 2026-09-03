#include "stdafx.h"
#include "SpaceTravelInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_DISTANCE", L"IDS_TITLE_SPEED_KMS", L"", L"IDS_TITLE_TIME"};
static const wchar_t *const szAbrv[] = {L"IDS_ABRV_DISTANCE", L"IDS_ABRV_SPEED_KMS", L"IDS_ABRV_SPEED_LIGHT", L"IDS_ABRV_TIME"};

const wchar_t *SpaceTravelInterface::getName() const
{
	return (L"IDS_SPACE_TRAVEL");
}

int SpaceTravelInterface::getValueCount() const
{
	return (4);
}

double SpaceTravelInterface::getValue0() const
{
	return (s.getDistanceLightYears());
}

double SpaceTravelInterface::getValue1() const
{
	return (s.getSpeedKmPerSecond());
}

double SpaceTravelInterface::getValue2() const
{
	return (s.getSpeedLightPercent());
}

double SpaceTravelInterface::getValue3() const
{
	return (s.getTravelTimeYears());
}

const wchar_t *SpaceTravelInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *SpaceTravelInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void SpaceTravelInterface::setValue0(double x)
{
	s.setDistanceLightYears(x);
}

void SpaceTravelInterface::setValue1(double x)
{
	s.setSpeedKmPerSecond(x);
}

void SpaceTravelInterface::setValue2(double x)
{
	s.setSpeedLightPercent(x);
}

void SpaceTravelInterface::setValue3(double x)
{
}