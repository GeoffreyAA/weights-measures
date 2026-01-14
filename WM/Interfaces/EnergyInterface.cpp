#include "stdafx.h"
#include "EnergyInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_BTU_ISO", L"IDS_TITLE_CALORIES", L"IDS_TITLE_JOULES", L"IDS_TITLE_KILOJOULES", L"IDS_TITLE_FOOT_POUND_FORCE", L"IDS_TITLE_KILOWATT_HOURS", L"IDS_TITLE_ERGS", L"IDS_TITLE_ELECTRONVOLTS"};
static const wchar_t* const szAbrv[] = {L"IDS_ABRV_BTU_ISO", L"IDS_ABRV_CALORIES", L"IDS_ABRV_JOULES", L"IDS_ABRV_KILOJOULES", L"IDS_ABRV_FOOT_POUND_FORCE", L"IDS_ABRV_KILOWATT_HOURS", L"IDS_ABRV_ERGS", L"IDS_ABRV_ELECTRONVOLTS"};

int EnergyInterface::getValueCount() const
{
	return (8);
}

double EnergyInterface::getValue1() const
{
	return (e.getBtuISO());
}

double EnergyInterface::getValue2() const
{
	return (e.getCalories());
}

double EnergyInterface::getValue3() const
{
	return (e.getJoules());
}

double EnergyInterface::getValue4() const
{
	return (e.getKilojoules());
}

double EnergyInterface::getValue5() const
{
	return (e.getFootPoundForce());
}

double EnergyInterface::getValue6() const
{
	return (e.getKilowattHours());
}

double EnergyInterface::getValue7() const
{
	return (e.getErgs());
}

double EnergyInterface::getValue8() const
{
	return (e.getElectronvolts());
}

const wchar_t *EnergyInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *EnergyInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void EnergyInterface::setValue1(double x)
{
	e.setBtuISO(x);
}

void EnergyInterface::setValue2(double x)
{
	e.setCalories(x);
}

void EnergyInterface::setValue3(double x)
{
	e.setJoules(x);
}

void EnergyInterface::setValue4(double x)
{
	e.setKilojoules(x);
}

void EnergyInterface::setValue5(double x)
{
	e.setFootPoundForce(x);
}

void EnergyInterface::setValue6(double x)
{
	e.setKilowattHours(x);
}

void EnergyInterface::setValue7(double x)
{
	e.setErgs(x);
}

void EnergyInterface::setValue8(double x)
{
	e.setElectronvolts(x);
}