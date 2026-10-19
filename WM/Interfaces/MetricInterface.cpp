#include "stdafx.h"
#include "MetricInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_NANO", L"IDS_TITLE_MICRO", L"IDS_TITLE_MILLI", L"IDS_TITLE_CENTI", L"IDS_TITLE_DECI", L"IDS_TITLE_BASE", L"IDS_TITLE_DECA", L"IDS_TITLE_HECTO", L"IDS_TITLE_KILO", L"IDS_TITLE_MEGA", L"IDS_TITLE_GIGA", L"IDS_TITLE_TERA", L"IDS_TITLE_PETA", L"IDS_TITLE_EXA", L"IDS_TITLE_ZETTA", L"IDS_TITLE_YOTTA"};

const wchar_t *MetricInterface::getName() const
{
	return L"IDS_METRIC";
}

int MetricInterface::getValueCount() const
{
	return 16;
}

Decimal MetricInterface::getValue0() const
{
	return m.getNano();
}

Decimal MetricInterface::getValue1() const
{
	return m.getMicro();
}

Decimal MetricInterface::getValue2() const
{
	return m.getMilli();
}

Decimal MetricInterface::getValue3() const
{
	return m.getCenti();
}

Decimal MetricInterface::getValue4() const
{
	return m.getDeci();
}

Decimal MetricInterface::getValue5() const
{
	return m.getBase();
}

Decimal MetricInterface::getValue6() const
{
	return m.getDeca();
}

Decimal MetricInterface::getValue7() const
{
	return m.getHecto();
}

Decimal MetricInterface::getValue8() const
{
	return m.getKilo();
}

Decimal MetricInterface::getValue9() const
{
	return m.getMega();
}

Decimal MetricInterface::getValue10() const
{
	return m.getGiga();
}

Decimal MetricInterface::getValue11() const
{
	return m.getTera();
}

Decimal MetricInterface::getValue12() const
{
	return m.getPeta();
}

Decimal MetricInterface::getValue13() const
{
	return m.getExa();
}

Decimal MetricInterface::getValue14() const
{
	return m.getZetta();
}

Decimal MetricInterface::getValue15() const
{
	return m.getYotta();
}

const wchar_t *MetricInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return (szTitle[i]);
	}

	return ConversionInterface::getTitle(i);
}

void MetricInterface::setValue0(Decimal x)
{
	m.setNano(x);
}

void MetricInterface::setValue1(Decimal x)
{
	m.setMicro(x);
}

void MetricInterface::setValue2(Decimal x)
{
	m.setMilli(x);
}

void MetricInterface::setValue3(Decimal x)
{
	m.setCenti(x);
}

void MetricInterface::setValue4(Decimal x)
{
	m.setDeci(x);
}

void MetricInterface::setValue5(Decimal x)
{
	m.setBase(x);
}

void MetricInterface::setValue6(Decimal x)
{
	m.setDeca(x);
}

void MetricInterface::setValue7(Decimal x)
{
	m.setHecto(x);
}

void MetricInterface::setValue8(Decimal x)
{
	m.setKilo(x);
}

void MetricInterface::setValue9(Decimal x)
{
	m.setMega(x);
}

void MetricInterface::setValue10(Decimal x)
{
	m.setGiga(x);
}

void MetricInterface::setValue11(Decimal x)
{
	m.setTera(x);
}

void MetricInterface::setValue12(Decimal x)
{
	m.setPeta(x);
}

void MetricInterface::setValue13(Decimal x)
{
	m.setExa(x);
}

void MetricInterface::setValue14(Decimal x)
{
	m.setZetta(x);
}

void MetricInterface::setValue15(Decimal x)
{
	m.setYotta(x);
}