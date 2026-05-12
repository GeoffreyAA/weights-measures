#include "stdafx.h"
#include "TemperatureInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_CELSIUS", L"IDS_TITLE_KELVIN", L"IDS_TITLE_FAHRENHEIT", L"IDS_TITLE_RANKINE"};
static const wchar_t *const szAbrv[] = {L"IDS_ABRV_CELSIUS", L"IDS_ABRV_KELVIN", L"IDS_ABRV_FAHRENHEIT", L"IDS_ABRV_RANKINE"};

int TemperatureInterface::getValueCount() const
{
	return (4);
}

double TemperatureInterface::getValue1() const
{
	return (t.getCelsius());
}

double TemperatureInterface::getValue2() const
{
	return (t.getKelvin());
}

double TemperatureInterface::getValue3() const
{
	return (t.getFahrenheit());
}

double TemperatureInterface::getValue4() const
{
	return (t.getRankine());
}

const wchar_t *TemperatureInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *TemperatureInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void TemperatureInterface::setValue1(double x)
{
	t.setCelsius(x);
}

void TemperatureInterface::setValue2(double x)
{
	t.setKelvin(x);
}

void TemperatureInterface::setValue3(double x)
{
	t.setFahrenheit(x);
}

void TemperatureInterface::setValue4(double x)
{
	t.setRankine(x);
}