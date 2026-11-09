#include "stdafx.h"
#include "MassInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_MILLIGRAMS", L"IDS_TITLE_GRAMS", L"IDS_TITLE_OUNCES", L"IDS_TITLE_POUNDS", L"IDS_TITLE_KILOGRAMS", L"IDS_TITLE_STONE", L"IDS_TITLE_SHORT_TONS", L"IDS_TITLE_TONNES", L"IDS_TITLE_LONG_TONS"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_MILLIGRAMS", L"IDS_ABBRV_GRAMS", L"IDS_ABBRV_OUNCES", L"IDS_ABBRV_POUNDS", L"IDS_ABBRV_KILOGRAMS", L"IDS_ABBRV_STONE", L"IDS_ABBRV_SHORT_TONS", L"IDS_ABBRV_TONNES", L"IDS_ABBRV_LONG_TONS"};

const wchar_t *MassInterface::getName() const
{
	return L"IDS_MASS";
}

int MassInterface::getValueCount() const
{
	return 9;
}

Decimal MassInterface::getValue0() const
{
	return m.getMilligrams();
}

Decimal MassInterface::getValue1() const
{
	return m.getGrams();
}

Decimal MassInterface::getValue2() const
{
	return m.getOunces();
}

Decimal MassInterface::getValue3() const
{
	return m.getPounds();
}

Decimal MassInterface::getValue4() const
{
	return m.getKilograms();
}

Decimal MassInterface::getValue5() const
{
	return m.getStone();
}

Decimal MassInterface::getValue6() const
{
	return m.getShortTons();
}

Decimal MassInterface::getValue7() const
{
	return m.getTonnes();
}

Decimal MassInterface::getValue8() const
{
	return m.getLongTons();
}

const wchar_t *MassInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitle) / sizeof(szTitle[0]))))
	{
		return szTitle[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *MassInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbbrv) / sizeof(szAbbrv[0]))))
	{
		return szAbbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void MassInterface::setValue0(Decimal x)
{
	m.setMilligrams(x);
}

void MassInterface::setValue1(Decimal x)
{
	m.setGrams(x);
}

void MassInterface::setValue2(Decimal x)
{
	m.setOunces(x);
}

void MassInterface::setValue3(Decimal x)
{
	m.setPounds(x);
}

void MassInterface::setValue4(Decimal x)
{
	m.setKilograms(x);
}

void MassInterface::setValue5(Decimal x)
{
	m.setStone(x);
}

void MassInterface::setValue6(Decimal x)
{
	m.setShortTons(x);
}

void MassInterface::setValue7(Decimal x)
{
	m.setTonnes(x);
}

void MassInterface::setValue8(Decimal x)
{
	m.setLongTons(x);
}