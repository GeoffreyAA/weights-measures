#include "stdafx.h"
#include "VolumeUSInterface.h"

static const wchar_t *const szTitle[] = { L"IDS_TITLE_MILLILITRES", L"IDS_TITLE_LITRES", L"IDS_TITLE_FLUID_OUNCES_US", L"IDS_TITLE_PINTS_US", L"IDS_TITLE_QUARTS_US", L"IDS_TITLE_GALLONS_US", L"IDS_TITLE_TEASPOONS_US", L"IDS_TITLE_TABLESPOONS_US", L"IDS_TITLE_CUPS_US" };
static const wchar_t *const szAbbrv[] = { L"IDS_ABBRV_MILLILITRES", L"IDS_ABBRV_LITRES", L"IDS_ABBRV_FLUID_OUNCES_US", L"IDS_ABBRV_PINTS_US", L"IDS_ABBRV_QUARTS_US", L"IDS_ABBRV_GALLONS_US", L"IDS_ABBRV_TEASPOONS_US", L"IDS_ABBRV_TABLESPOONS_US", L"IDS_ABBRV_CUPS_US" };

const wchar_t *VolumeUSInterface::getName() const
{
	return L"IDS_VOLUME_US";
}

int VolumeUSInterface::getValueCount() const
{
	return 9;
}

Decimal VolumeUSInterface::getValue0() const
{
	return v.getMillilitres();
}

Decimal VolumeUSInterface::getValue1() const
{
	return v.getLitres();
}

Decimal VolumeUSInterface::getValue2() const
{
	return v.getFluidOuncesUS();
}

Decimal VolumeUSInterface::getValue3() const
{
	return v.getPintsUS();
}

Decimal VolumeUSInterface::getValue4() const
{
	return v.getQuartsUS();
}

Decimal VolumeUSInterface::getValue5() const
{
	return v.getGallonsUS();
}

Decimal VolumeUSInterface::getValue6() const
{
	return v.getTeaspoonsUS();
}

Decimal VolumeUSInterface::getValue7() const
{
	return v.getTablepoonsUS();
}

Decimal VolumeUSInterface::getValue8() const
{
	return v.getCupsUS();
}

const wchar_t *VolumeUSInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *VolumeUSInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void VolumeUSInterface::setValue0(Decimal x)
{
	v.setMillilitres(x);
}

void VolumeUSInterface::setValue1(Decimal x)
{
	v.setLitres(x);
}

void VolumeUSInterface::setValue2(Decimal x)
{
	v.setFluidOuncesUS(x);
}

void VolumeUSInterface::setValue3(Decimal x)
{
	v.setPintsUS(x);
}

void VolumeUSInterface::setValue4(Decimal x)
{
	v.setQuartsUS(x);
}

void VolumeUSInterface::setValue5(Decimal x)
{
	v.setGallonsUS(x);
}

void VolumeUSInterface::setValue6(Decimal x)
{
	v.setTeaspoonsUS(x);
}

void VolumeUSInterface::setValue7(Decimal x)
{
	v.setTablepoonsUS(x);
}

void VolumeUSInterface::setValue8(Decimal x)
{
	v.setCupsUS(x);
}