#include "stdafx.h"
#include "PressureInterface.h"

//static const wchar_t *const szTitles[] = {L"IDS_TITLE_PASCALS", L"IDS_TITLE_KILOPASCALS", L"IDS_TITLE_POUNDS_PER_SQUARE_INCH", L"IDS_TITLE_BARS", L"IDS_TITLE_STD_ATMOSPHERE", L"IDS_TITLE_MILLIMETRES_MERCURY", L"IDS_TITLE_INCHES_MERCURY", L"IDS_TITLE_CENTIMETRES_WATER", L"IDS_TITLE_INCHES_WATER"};
static const wchar_t* const szAbrv[] = {L"IDS_ABRV_PASCALS", L"IDS_ABRV_KILOPASCALS", L"IDS_ABRV_POUNDS_PER_SQUARE_INCH", L"IDS_ABRV_BARS", L"IDS_ABRV_STD_ATMOSPHERE", L"IDS_ABRV_MILLIMETRES_MERCURY", L"IDS_ABRV_INCHES_MERCURY", L"IDS_ABRV_CENTIMETRES_WATER", L"IDS_ABRV_INCHES_WATER"};

int PressureInterface::getValueCount() const
{
	return (9);
}

double PressureInterface::getValue1() const
{
	return (p.getPascals());
}

double PressureInterface::getValue2() const
{
	return (p.getKilopascals());
}

double PressureInterface::getValue3() const
{
	return (p.getPoundsPerSquareInch());
}

double PressureInterface::getValue4() const
{
	return (p.getBars());
}

double PressureInterface::getValue5() const
{
	return (p.getStandardAtmosphere());
}

double PressureInterface::getValue6() const
{
	return (p.getMillimetresOfMercury());
}

double PressureInterface::getValue7() const
{
	return (p.getInchesOfMercury());
}

double PressureInterface::getValue8() const
{
	return (p.getCentimetresOfWater());
}

double PressureInterface::getValue9() const
{
	return (p.getInchesOfWater());
}

/*const wchar_t *PressureInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}*/

const wchar_t *PressureInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void PressureInterface::setValue1(double x)
{
	p.setPascals(x);
}

void PressureInterface::setValue2(double x)
{
	p.setKilopascals(x);
}

void PressureInterface::setValue3(double x)
{
	p.setPoundsPerSquareInch(x);
}

void PressureInterface::setValue4(double x)
{
	p.setBars(x);
}

void PressureInterface::setValue5(double x)
{
	p.setStandardAtmosphere(x);
}

void PressureInterface::setValue6(double x)
{
	p.setMillimetresOfMercury(x);
}

void PressureInterface::setValue7(double x)
{
	p.setInchesOfMercury(x);
}

void PressureInterface::setValue8(double x)
{
	p.setCentimetresOfWater(x);
}

void PressureInterface::setValue9(double x)
{
	p.setInchesOfWater(x);
}