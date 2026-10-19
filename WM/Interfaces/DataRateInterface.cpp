#include "stdafx.h"
#include "DataRateInterface.h"

static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_BITS_PER_SEC", L"IDS_ABBRV_KILOBITS_PER_SEC", L"IDS_ABBRV_MEGABITS_PER_SEC", L"IDS_ABBRV_GIGABITS_PER_SEC", L"IDS_ABBRV_BYTES_PER_SEC", L"IDS_ABBRV_KILOBYTES_PER_SEC", L"IDS_ABBRV_MEGABYTES_PER_SEC", L"IDS_ABBRV_GIGABYTES_PER_SEC"};

const wchar_t *DataRateInterface::getName() const
{
	return L"IDS_DATA_RATE";
}

int DataRateInterface::getValueCount() const
{
	return 8;
}

Decimal DataRateInterface::getValue0() const
{
	return d.getBitsPerSecond();
}

Decimal DataRateInterface::getValue1() const
{
	return d.getKilobitsPerSecond();
}

Decimal DataRateInterface::getValue2() const
{
	return d.getMegabitsPerSecond();
}

Decimal DataRateInterface::getValue3() const
{
	return d.getGigabitsPerSecond();
}

Decimal DataRateInterface::getValue4() const
{
	return d.getBytesPerSecond();
}

Decimal DataRateInterface::getValue5() const
{
	return d.getKilobytesPerSecond();
}

Decimal DataRateInterface::getValue6() const
{
	return d.getMegabytesPerSecond();
}

Decimal DataRateInterface::getValue7() const
{
	return d.getGigabytesPerSecond();
}

const wchar_t *DataRateInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void DataRateInterface::setValue0(Decimal x)
{
	d.setBitsPerSecond(x);
}

void DataRateInterface::setValue1(Decimal x)
{
	d.setKilobitsPerSecond(x);
}

void DataRateInterface::setValue2(Decimal x)
{
	d.setMegabitsPerSecond(x);
}

void DataRateInterface::setValue3(Decimal x)
{
	d.setGigabitsPerSecond(x);
}

void DataRateInterface::setValue4(Decimal x)
{
	d.setBytesPerSecond(x);
}

void DataRateInterface::setValue5(Decimal x)
{
	d.setKilobytesPerSecond(x);
}

void DataRateInterface::setValue6(Decimal x)
{
	d.setMegabytesPerSecond(x);
}

void DataRateInterface::setValue7(Decimal x)
{
	d.setGigabytesPerSecond(x);
}