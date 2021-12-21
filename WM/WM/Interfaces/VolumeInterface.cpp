#include "stdafx.h"
#include "VolumeInterface.h"

static const wchar_t* const szTitles[] = {L"IDS_TITLE_MILLILITRES", L"IDS_TITLE_LITRES", L"IDS_TITLE_TEASPOONS_METRIC", L"IDS_TITLE_TABLESPOONS_METRIC", L"IDS_TITLE_CUPS_METRIC"};
static const wchar_t* const szAbrv[] = {L"IDS_ABRV_MILLILITRES", L"IDS_ABRV_LITRES", L"IDS_ABRV_TEASPOONS_METRIC", L"IDS_ABRV_TABLESPOONS_METRIC", L"IDS_ABRV_CUPS_METRIC"};

int VolumeInterface::getValueCount() const
{
	return (5);
}

double VolumeInterface::getValue1() const
{
	return (v.getMillilitres());
}

double VolumeInterface::getValue2() const
{
	return (v.getLitres());
}

double VolumeInterface::getValue3() const
{
	return (v.getTeaspoonsMetric());
}

double VolumeInterface::getValue4() const
{
	return (v.getTablepoonsMetric());
}

double VolumeInterface::getValue5() const
{
	return (v.getCupsMetric());
}

const wchar_t *VolumeInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *VolumeInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void VolumeInterface::setValue1(double x)
{
	v.setMillilitres(x);
}

void VolumeInterface::setValue2(double x)
{
	v.setLitres(x);
}

void VolumeInterface::setValue3(double x)
{
	v.setTeaspoonsMetric(x);
}

void VolumeInterface::setValue4(double x)
{
	v.setTablepoonsMetric(x);
}

void VolumeInterface::setValue5(double x)
{
	v.setCupsMetric(x);
}