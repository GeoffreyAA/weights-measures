#include "stdafx.h"
#include "PressureInterface.h"

//static const wchar_t *const szTitle[] = {L"IDS_TITLE_PASCALS", L"IDS_TITLE_KILOPASCALS", L"IDS_TITLE_POUNDS_PER_SQUARE_INCH", L"IDS_TITLE_BARS", L"IDS_TITLE_STD_ATMOSPHERE", L"IDS_TITLE_MILLIMETRES_MERCURY", L"IDS_TITLE_INCHES_MERCURY", L"IDS_TITLE_CENTIMETRES_WATER", L"IDS_TITLE_INCHES_WATER"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_PASCALS", L"IDS_ABBRV_KILOPASCALS", L"IDS_ABBRV_POUNDS_PER_SQUARE_INCH", L"IDS_ABBRV_BARS", L"IDS_ABBRV_STD_ATMOSPHERE", L"IDS_ABBRV_MILLIMETRES_MERCURY", L"IDS_ABBRV_INCHES_MERCURY", L"IDS_ABBRV_CENTIMETRES_WATER", L"IDS_ABBRV_INCHES_WATER"};

const wchar_t *PressureInterface::getName() const
{
	return L"IDS_PRESSURE";
}

int PressureInterface::getValueCount() const
{
	return 9;
}

Decimal PressureInterface::getValue0() const
{
	return p.getPascals();
}

Decimal PressureInterface::getValue1() const
{
	return p.getKilopascals();
}

Decimal PressureInterface::getValue2() const
{
	return p.getPoundsPerSquareInch();
}

Decimal PressureInterface::getValue3() const
{
	return p.getBars();
}

Decimal PressureInterface::getValue4() const
{
	return p.getStandardAtmosphere();
}

Decimal PressureInterface::getValue5() const
{
	return p.getMillimetresOfMercury();
}

Decimal PressureInterface::getValue6() const
{
	return p.getInchesOfMercury();
}

Decimal PressureInterface::getValue7() const
{
	return p.getCentimetresOfWater();
}

Decimal PressureInterface::getValue8() const
{
	return p.getInchesOfWater();
}

/*
const wchar_t *PressureInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}
*/

const wchar_t *PressureInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void PressureInterface::setValue0(Decimal x)
{
	p.setPascals(x);
}

void PressureInterface::setValue1(Decimal x)
{
	p.setKilopascals(x);
}

void PressureInterface::setValue2(Decimal x)
{
	p.setPoundsPerSquareInch(x);
}

void PressureInterface::setValue3(Decimal x)
{
	p.setBars(x);
}

void PressureInterface::setValue4(Decimal x)
{
	p.setStandardAtmosphere(x);
}

void PressureInterface::setValue5(Decimal x)
{
	p.setMillimetresOfMercury(x);
}

void PressureInterface::setValue6(Decimal x)
{
	p.setInchesOfMercury(x);
}

void PressureInterface::setValue7(Decimal x)
{
	p.setCentimetresOfWater(x);
}

void PressureInterface::setValue8(Decimal x)
{
	p.setInchesOfWater(x);
}