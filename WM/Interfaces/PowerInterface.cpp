#include "stdafx.h"
#include "PowerInterface.h"

static const wchar_t* const szTitles[] = {L"IDS_TITLE_BTU_H", L"IDS_TITLE_WATTS", L"IDS_TITLE_KILOWATTS", L"IDS_TITLE_HORSEPOWER_MECH"};
static const wchar_t* const szAbrv[] = {L"IDS_ABRV_BTU_H", L"IDS_ABRV_WATTS", L"IDS_ABRV_KILOWATTS", L"IDS_ABRV_HORSEPOWER_MECH"};

int PowerInterface::getValueCount() const
{
	return (4);
}

double PowerInterface::getValue1() const
{
	return (p.getBtuPerHour());
}

double PowerInterface::getValue2() const
{
	return (p.getWatts());
}

double PowerInterface::getValue3() const
{
	return (p.getKilowatts());
}

double PowerInterface::getValue4() const
{
	return (p.getHorsepowerMechanical());
}

const wchar_t *PowerInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *PowerInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void PowerInterface::setValue1(double x)
{
	p.setBtuPerHour(x);
}

void PowerInterface::setValue2(double x)
{
	p.setWatts(x);
}

void PowerInterface::setValue3(double x)
{
	p.setKilowatts(x);
}

void PowerInterface::setValue4(double x)
{
	p.setHorsepowerMechanical(x);
}