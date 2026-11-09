#include "stdafx.h"
#include "DensityInterface.h"

static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_KILOGRAMS_PER_CUBIC_METRE", L"IDS_ABBRV_OUNCE_PER_GALLON_UK", L"IDS_ABBRV_OUNCE_PER_GALLON_US", L"IDS_ABBRV_POUND_PER_CUBIC_FOOT", L"IDS_ABBRV_GRAM_PER_CUBIC_CENTIMETRE"};

const wchar_t *DensityInterface::getName() const
{
	return L"IDS_DENSITY";
}

int DensityInterface::getValueCount() const
{
	return 5;
}

Decimal DensityInterface::getValue0() const
{
	return d.getKilogramsPerCubicMetre();
}

Decimal DensityInterface::getValue1() const
{
	return d.getOuncesPerGallonUK();
}

Decimal DensityInterface::getValue2() const
{
	return d.getOuncesPerGallonUS();
}

Decimal DensityInterface::getValue3() const
{
	return d.getPoundsPerCubicFoot();
}

Decimal DensityInterface::getValue4() const
{
	return d.getGramsPerCubicCentimetre();
}

/*
const wchar_t *DensityInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}
*/

const wchar_t *DensityInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void DensityInterface::setValue0(Decimal x)
{
	d.setKilogramsPerCubicMetre(x);
}

void DensityInterface::setValue1(Decimal x)
{
	d.setOuncesPerGallonUK(x);
}

void DensityInterface::setValue2(Decimal x)
{
	d.setOuncesPerGallonUS(x);
}

void DensityInterface::setValue3(Decimal x)
{
	d.setPoundsPerCubicFoot(x);
}

void DensityInterface::setValue4(Decimal x)
{
	d.setGramsPerCubicCentimetre(x);
}