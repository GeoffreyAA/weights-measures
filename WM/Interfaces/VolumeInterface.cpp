#include "stdafx.h"
#include "VolumeInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_MILLILITRES", L"IDS_TITLE_LITRES", L"IDS_TITLE_TEASPOONS_METRIC", L"IDS_TITLE_TABLESPOONS_METRIC", L"IDS_TITLE_CUPS_METRIC"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_MILLILITRES", L"IDS_ABBRV_LITRES", L"IDS_ABBRV_TEASPOONS_METRIC", L"IDS_ABBRV_TABLESPOONS_METRIC", L"IDS_ABBRV_CUPS_METRIC"};

const wchar_t *VolumeInterface::getName() const
{
	return L"IDS_VOLUME";
}

int VolumeInterface::getValueCount() const
{
	return 5;
}

double VolumeInterface::getValue0() const
{
	return v.getMillilitres();
}

double VolumeInterface::getValue1() const
{
	return v.getLitres();
}

double VolumeInterface::getValue2() const
{
	return v.getTeaspoonsMetric();
}

double VolumeInterface::getValue3() const
{
	return v.getTablepoonsMetric();
}

double VolumeInterface::getValue4() const
{
	return v.getCupsMetric();
}

const wchar_t *VolumeInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *VolumeInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void VolumeInterface::setValue0(double x)
{
	v.setMillilitres(x);
}

void VolumeInterface::setValue1(double x)
{
	v.setLitres(x);
}

void VolumeInterface::setValue2(double x)
{
	v.setTeaspoonsMetric(x);
}

void VolumeInterface::setValue3(double x)
{
	v.setTablepoonsMetric(x);
}

void VolumeInterface::setValue4(double x)
{
	v.setCupsMetric(x);
}