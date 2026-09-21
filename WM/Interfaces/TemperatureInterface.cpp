#include "stdafx.h"
#include "TemperatureInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_CELSIUS", L"IDS_TITLE_KELVIN", L"IDS_TITLE_FAHRENHEIT", L"IDS_TITLE_RANKINE"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_CELSIUS", L"IDS_ABBRV_KELVIN", L"IDS_ABBRV_FAHRENHEIT", L"IDS_ABBRV_RANKINE"};

const wchar_t *TemperatureInterface::getName() const
{
	return L"IDS_TEMPERATURE";
}

int TemperatureInterface::getValueCount() const
{
	return 4;
}

double TemperatureInterface::getValue0() const
{
	return t.getCelsius();
}

double TemperatureInterface::getValue1() const
{
	return t.getKelvin();
}

double TemperatureInterface::getValue2() const
{
	return t.getFahrenheit();
}

double TemperatureInterface::getValue3() const
{
	return t.getRankine();
}

const wchar_t *TemperatureInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *TemperatureInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void TemperatureInterface::setValue0(double x)
{
	t.setCelsius(x);
}

void TemperatureInterface::setValue1(double x)
{
	t.setKelvin(x);
}

void TemperatureInterface::setValue2(double x)
{
	t.setFahrenheit(x);
}

void TemperatureInterface::setValue3(double x)
{
	t.setRankine(x);
}