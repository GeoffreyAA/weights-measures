#include "stdafx.h"
#include "TemperatureInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_CENTIGRADE", L"IDS_TITLE_FAHRENHEIT", L"IDS_TITLE_KELVIN"};
static const wchar_t *const szAbrv[] = {L"IDS_ABRV_CENTIGRADE", L"IDS_ABRV_FAHRENHEIT", L"IDS_ABRV_KELVIN"};

int TemperatureInterface::getValueCount() const
{
	return (3);
}

double TemperatureInterface::getValue1() const
{
	return (t.getCentigrade());
}

double TemperatureInterface::getValue2() const
{
	return (t.getFahrenheit());
}

double TemperatureInterface::getValue3() const
{
	return (t.getKelvin());
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
	t.setCentigrade(x);
}

void TemperatureInterface::setValue2(double x)
{
	t.setFahrenheit(x);
}

void TemperatureInterface::setValue3(double x)
{
	t.setKelvin(x);
}