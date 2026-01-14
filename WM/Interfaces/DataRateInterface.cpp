#include "stdafx.h"
#include "DataRateInterface.h"

static const wchar_t *const szAbrv[] = {L"IDS_ABRV_BITS_PER_SEC", L"IDS_ABRV_KILOBITS_PER_SEC", L"IDS_ABRV_MEGABITS_PER_SEC", L"IDS_ABRV_GIGABITS_PER_SEC", L"IDS_ABRV_BYTES_PER_SEC", L"IDS_ABRV_KILOBYTES_PER_SEC", L"IDS_ABRV_MEGABYTES_PER_SEC", L"IDS_ABRV_GIGABYTES_PER_SEC"};

int DataRateInterface::getValueCount() const
{
	return (8);
}

double DataRateInterface::getValue1() const
{
	return (d.getBitsPerSecond());
}

double DataRateInterface::getValue2() const
{
	return (d.getKilobitsPerSecond());
}

double DataRateInterface::getValue3() const
{
	return (d.getMegabitsPerSecond());
}

double DataRateInterface::getValue4() const
{
	return (d.getGigabitsPerSecond());
}

double DataRateInterface::getValue5() const
{
	return (d.getBytesPerSecond());
}

double DataRateInterface::getValue6() const
{
	return (d.getKilobytesPerSecond());
}

double DataRateInterface::getValue7() const
{
	return (d.getMegabytesPerSecond());
}

double DataRateInterface::getValue8() const
{
	return (d.getGigabytesPerSecond());
}

const wchar_t *DataRateInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void DataRateInterface::setValue1(double x)
{
	d.setBitsPerSecond(x);
}

void DataRateInterface::setValue2(double x)
{
	d.setKilobitsPerSecond(x);
}

void DataRateInterface::setValue3(double x)
{
	d.setMegabitsPerSecond(x);
}

void DataRateInterface::setValue4(double x)
{
	d.setGigabitsPerSecond(x);
}

void DataRateInterface::setValue5(double x)
{
	d.setBytesPerSecond(x);
}

void DataRateInterface::setValue6(double x)
{
	d.setKilobytesPerSecond(x);
}

void DataRateInterface::setValue7(double x)
{
	d.setMegabytesPerSecond(x);
}

void DataRateInterface::setValue8(double x)
{
	d.setGigabytesPerSecond(x);
}