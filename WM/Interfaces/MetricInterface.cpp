#include "stdafx.h"
#include "MetricInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_NANO", L"IDS_TITLE_MICRO", L"IDS_TITLE_MILLI", L"IDS_TITLE_CENTI", L"IDS_TITLE_DECI", L"IDS_TITLE_BASE", L"IDS_TITLE_DECA", L"IDS_TITLE_HECTO", L"IDS_TITLE_KILO", L"IDS_TITLE_MEGA", L"IDS_TITLE_GIGA", L"IDS_TITLE_TERA", L"IDS_TITLE_PETA", L"IDS_TITLE_EXA", L"IDS_TITLE_ZETTA", L"IDS_TITLE_YOTTA"};

int MetricInterface::getValueCount() const
{
	return (16);
}

double MetricInterface::getValue0() const
{
	return (m.getNano());
}

double MetricInterface::getValue1() const
{
	return (m.getMicro());
}

double MetricInterface::getValue2() const
{
	return (m.getMilli());
}

double MetricInterface::getValue3() const
{
	return (m.getCenti());
}

double MetricInterface::getValue4() const
{
	return (m.getDeci());
}

double MetricInterface::getValue5() const
{
	return (m.getBase());
}

double MetricInterface::getValue6() const
{
	return (m.getDeca());
}

double MetricInterface::getValue7() const
{
	return (m.getHecto());
}

double MetricInterface::getValue8() const
{
	return (m.getKilo());
}

double MetricInterface::getValue9() const
{
	return (m.getMega());
}

double MetricInterface::getValue10() const
{
	return (m.getGiga());
}

double MetricInterface::getValue11() const
{
	return (m.getTera());
}

double MetricInterface::getValue12() const
{
	return (m.getPeta());
}

double MetricInterface::getValue13() const
{
	return (m.getExa());
}

double MetricInterface::getValue14() const
{
	return (m.getZetta());
}

double MetricInterface::getValue15() const
{
	return (m.getYotta());
}

const wchar_t *MetricInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

void MetricInterface::setValue0(double x)
{
	m.setNano(x);
}

void MetricInterface::setValue1(double x)
{
	m.setMicro(x);
}

void MetricInterface::setValue2(double x)
{
	m.setMilli(x);
}

void MetricInterface::setValue3(double x)
{
	m.setCenti(x);
}

void MetricInterface::setValue4(double x)
{
	m.setDeci(x);
}

void MetricInterface::setValue5(double x)
{
	m.setBase(x);
}

void MetricInterface::setValue6(double x)
{
	m.setDeca(x);
}

void MetricInterface::setValue7(double x)
{
	m.setHecto(x);
}

void MetricInterface::setValue8(double x)
{
	m.setKilo(x);
}

void MetricInterface::setValue9(double x)
{
	m.setMega(x);
}

void MetricInterface::setValue10(double x)
{
	m.setGiga(x);
}

void MetricInterface::setValue11(double x)
{
	m.setTera(x);
}

void MetricInterface::setValue12(double x)
{
	m.setPeta(x);
}

void MetricInterface::setValue13(double x)
{
	m.setExa(x);
}

void MetricInterface::setValue14(double x)
{
	m.setZetta(x);
}

void MetricInterface::setValue15(double x)
{
	m.setYotta(x);
}