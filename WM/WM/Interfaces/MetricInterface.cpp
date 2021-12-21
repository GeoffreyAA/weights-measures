#include "stdafx.h"
#include "MetricInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_NANO", L"IDS_TITLE_MICRO", L"IDS_TITLE_MILLI", L"IDS_TITLE_CENTI", L"IDS_TITLE_BASE", L"IDS_TITLE_KILO", L"IDS_TITLE_MEGA", L"IDS_TITLE_GIGA", L"IDS_TITLE_TERA"};

int MetricInterface::getValueCount() const
{
	return (9);
}

double MetricInterface::getValue1() const
{
	return (m.getNano());
}

double MetricInterface::getValue2() const
{
	return (m.getMicro());
}

double MetricInterface::getValue3() const
{
	return (m.getMilli());
}

double MetricInterface::getValue4() const
{
	return (m.getCenti());
}

double MetricInterface::getValue5() const
{
	return (m.getBase());
}

double MetricInterface::getValue6() const
{
	return (m.getKilo());
}

double MetricInterface::getValue7() const
{
	return (m.getMega());
}

double MetricInterface::getValue8() const
{
	return (m.getGiga());
}

double MetricInterface::getValue9() const
{
	return (m.getTera());
}

const wchar_t *MetricInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

void MetricInterface::setValue1(double x)
{
	m.setNano(x);
}

void MetricInterface::setValue2(double x)
{
	m.setMicro(x);
}

void MetricInterface::setValue3(double x)
{
	m.setMilli(x);
}

void MetricInterface::setValue4(double x)
{
	m.setCenti(x);
}

void MetricInterface::setValue5(double x)
{
	m.setBase(x);
}

void MetricInterface::setValue6(double x)
{
	m.setKilo(x);
}

void MetricInterface::setValue7(double x)
{
	m.setMega(x);
}

void MetricInterface::setValue8(double x)
{
	m.setGiga(x);
}

void MetricInterface::setValue9(double x)
{
	m.setTera(x);
}