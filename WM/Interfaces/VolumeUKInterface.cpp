#include "stdafx.h"
#include "VolumeUKInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_MILLILITRES", L"IDS_TITLE_LITRES", L"IDS_TITLE_FLUID_OUNCES_UK", L"IDS_TITLE_PINTS_UK", L"IDS_TITLE_QUARTS_UK", L"IDS_TITLE_GALLONS_UK", L"IDS_TITLE_TEASPOONS_UK", L"IDS_TITLE_TABLESPOONS_UK", L"IDS_TITLE_CUPS_UK"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_MILLILITRES", L"IDS_ABBRV_LITRES", L"IDS_ABBRV_FLUID_OUNCES_UK", L"IDS_ABBRV_PINTS_UK", L"IDS_ABBRV_QUARTS_UK", L"IDS_ABBRV_GALLONS_UK", L"IDS_ABBRV_TEASPOONS_UK", L"IDS_ABBRV_TABLESPOONS_UK", L"IDS_ABBRV_CUPS_UK"};

const wchar_t *VolumeUKInterface::getName() const
{
	return L"IDS_VOLUME_UK";
}

int VolumeUKInterface::getValueCount() const
{
	return 9;
}

double VolumeUKInterface::getValue0() const
{
	return v.getMillilitres();
}

double VolumeUKInterface::getValue1() const
{
	return v.getLitres();
}

double VolumeUKInterface::getValue2() const
{
	return v.getFluidOuncesUK();
}

double VolumeUKInterface::getValue3() const
{
	return v.getPintsUK();
}

double VolumeUKInterface::getValue4() const
{
	return v.getQuartsUK();
}

double VolumeUKInterface::getValue5() const
{
	return v.getGallonsUK();
}

double VolumeUKInterface::getValue6() const
{
	return v.getTeaspoonsUK();
}

double VolumeUKInterface::getValue7() const
{
	return v.getTablepoonsUK();
}

double VolumeUKInterface::getValue8() const
{
	return v.getCupsUK();
}

const wchar_t *VolumeUKInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *VolumeUKInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void VolumeUKInterface::setValue0(double x)
{
	v.setMillilitres(x);
}

void VolumeUKInterface::setValue1(double x)
{
	v.setLitres(x);
}

void VolumeUKInterface::setValue2(double x)
{
	v.setFluidOuncesUK(x);
}

void VolumeUKInterface::setValue3(double x)
{
	v.setPintsUK(x);
}

void VolumeUKInterface::setValue4(double x)
{
	v.setQuartsUK(x);
}

void VolumeUKInterface::setValue5(double x)
{
	v.setGallonsUK(x);
}

void VolumeUKInterface::setValue6(double x)
{
	v.setTeaspoonsUK(x);
}

void VolumeUKInterface::setValue7(double x)
{
	v.setTablepoonsUK(x);
}

void VolumeUKInterface::setValue8(double x)
{
	v.setCupsUK(x);
}