#include "stdafx.h"
#include "EnergyInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_BTU_ISO", L"IDS_TITLE_CALORIES", L"IDS_TITLE_JOULES", L"IDS_TITLE_KILOJOULES", L"IDS_TITLE_FOOT_POUND_FORCE", L"IDS_TITLE_KILOWATT_HOURS", L"IDS_TITLE_ERGS", L"IDS_TITLE_ELECTRONVOLTS"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_BTU_ISO", L"IDS_ABBRV_CALORIES", L"IDS_ABBRV_JOULES", L"IDS_ABBRV_KILOJOULES", L"IDS_ABBRV_FOOT_POUND_FORCE", L"IDS_ABBRV_KILOWATT_HOURS", L"IDS_ABBRV_ERGS", L"IDS_ABBRV_ELECTRONVOLTS"};

const wchar_t *EnergyInterface::getName() const
{
	return L"IDS_ENERGY";
}

int EnergyInterface::getValueCount() const
{
	return 8;
}

Decimal EnergyInterface::getValue0() const
{
	return e.getBtuISO();
}

Decimal EnergyInterface::getValue1() const
{
	return e.getCalories();
}

Decimal EnergyInterface::getValue2() const
{
	return e.getJoules();
}

Decimal EnergyInterface::getValue3() const
{
	return e.getKilojoules();
}

Decimal EnergyInterface::getValue4() const
{
	return e.getFootPoundForce();
}

Decimal EnergyInterface::getValue5() const
{
	return e.getKilowattHours();
}

Decimal EnergyInterface::getValue6() const
{
	return e.getErgs();
}

Decimal EnergyInterface::getValue7() const
{
	return e.getElectronvolts();
}

const wchar_t *EnergyInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *EnergyInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void EnergyInterface::setValue0(Decimal x)
{
	e.setBtuISO(x);
}

void EnergyInterface::setValue1(Decimal x)
{
	e.setCalories(x);
}

void EnergyInterface::setValue2(Decimal x)
{
	e.setJoules(x);
}

void EnergyInterface::setValue3(Decimal x)
{
	e.setKilojoules(x);
}

void EnergyInterface::setValue4(Decimal x)
{
	e.setFootPoundForce(x);
}

void EnergyInterface::setValue5(Decimal x)
{
	e.setKilowattHours(x);
}

void EnergyInterface::setValue6(Decimal x)
{
	e.setErgs(x);
}

void EnergyInterface::setValue7(Decimal x)
{
	e.setElectronvolts(x);
}