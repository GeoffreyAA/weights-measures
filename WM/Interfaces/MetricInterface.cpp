#include "stdafx.h"
#include "MetricInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_FEMTO", L"IDS_TITLE_PICO", L"IDS_TITLE_NANO", L"IDS_TITLE_MICRO", L"IDS_TITLE_MILLI", L"IDS_TITLE_CENTI", L"IDS_TITLE_DECI", L"IDS_TITLE_BASE", L"IDS_TITLE_DECA", L"IDS_TITLE_HECTO", L"IDS_TITLE_KILO", L"IDS_TITLE_MEGA", L"IDS_TITLE_GIGA", L"IDS_TITLE_TERA", L"IDS_TITLE_PETA"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_FEMTO", L"IDS_ABBRV_PICO", L"IDS_ABBRV_NANO", L"IDS_ABBRV_MICRO", L"IDS_ABBRV_MILLI", L"IDS_ABBRV_CENTI", L"IDS_ABBRV_DECI", L"IDS_ABBRV_BASE", L"IDS_ABBRV_DECA", L"IDS_ABBRV_HECTO", L"IDS_ABBRV_KILO", L"IDS_ABBRV_MEGA", L"IDS_ABBRV_GIGA", L"IDS_ABBRV_TERA", L"IDS_ABBRV_PETA"};

const wchar_t *MetricInterface::getName() const
{
	return L"IDS_METRIC";
}

int MetricInterface::getValueCount() const
{
	return 15;
}

Decimal MetricInterface::getValue0() const
{
	return m.getFemto();
}

Decimal MetricInterface::getValue1() const
{
	return m.getPico();
}

Decimal MetricInterface::getValue2() const
{
	return m.getNano();
}

Decimal MetricInterface::getValue3() const
{
	return m.getMicro();
}

Decimal MetricInterface::getValue4() const
{
	return m.getMilli();
}

Decimal MetricInterface::getValue5() const
{
	return m.getCenti();
}

Decimal MetricInterface::getValue6() const
{
	return m.getDeci();
}

Decimal MetricInterface::getValue7() const
{
	return m.getBase();
}

Decimal MetricInterface::getValue8() const
{
	return m.getDeca();
}

Decimal MetricInterface::getValue9() const
{
	return m.getHecto();
}

Decimal MetricInterface::getValue10() const
{
	return m.getKilo();
}

Decimal MetricInterface::getValue11() const
{
	return m.getMega();
}

Decimal MetricInterface::getValue12() const
{
	return m.getGiga();
}

Decimal MetricInterface::getValue13() const
{
	return m.getTera();
}

Decimal MetricInterface::getValue14() const
{
	return m.getPeta();
}

const wchar_t *MetricInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return (szTitle[i]);
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *MetricInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void MetricInterface::setValue0(Decimal x)
{
	m.setFemto(x);
}

void MetricInterface::setValue1(Decimal x)
{
	m.setPico(x);
}

void MetricInterface::setValue2(Decimal x)
{
	m.setNano(x);
}

void MetricInterface::setValue3(Decimal x)
{
	m.setMicro(x);
}

void MetricInterface::setValue4(Decimal x)
{
	m.setMilli(x);
}

void MetricInterface::setValue5(Decimal x)
{
	m.setCenti(x);
}

void MetricInterface::setValue6(Decimal x)
{
	m.setDeci(x);
}

void MetricInterface::setValue7(Decimal x)
{
	m.setBase(x);
}

void MetricInterface::setValue8(Decimal x)
{
	m.setDeca(x);
}

void MetricInterface::setValue9(Decimal x)
{
	m.setHecto(x);
}

void MetricInterface::setValue10(Decimal x)
{
	m.setKilo(x);
}

void MetricInterface::setValue11(Decimal x)
{
	m.setMega(x);
}

void MetricInterface::setValue12(Decimal x)
{
	m.setGiga(x);
}

void MetricInterface::setValue13(Decimal x)
{
	m.setTera(x);
}

void MetricInterface::setValue14(Decimal x)
{
	m.setPeta(x);
}