#include "stdafx.h"
#include "PowerInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_BTU_H", L"IDS_TITLE_WATTS", L"IDS_TITLE_KILOWATTS", L"IDS_TITLE_HORSEPOWER_MECH"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_BTU_H", L"IDS_ABBRV_WATTS", L"IDS_ABBRV_KILOWATTS", L"IDS_ABBRV_HORSEPOWER_MECH"};

const wchar_t *PowerInterface::getName() const
{
	return L"IDS_POWER";
}

int PowerInterface::getValueCount() const
{
	return 4;
}

double PowerInterface::getValue0() const
{
	return p.getBtuPerHour();
}

double PowerInterface::getValue1() const
{
	return p.getWatts();
}

double PowerInterface::getValue2() const
{
	return p.getKilowatts();
}

double PowerInterface::getValue3() const
{
	return p.getHorsepowerMechanical();
}

const wchar_t *PowerInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *PowerInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void PowerInterface::setValue0(double x)
{
	p.setBtuPerHour(x);
}

void PowerInterface::setValue1(double x)
{
	p.setWatts(x);
}

void PowerInterface::setValue2(double x)
{
	p.setKilowatts(x);
}

void PowerInterface::setValue3(double x)
{
	p.setHorsepowerMechanical(x);
}