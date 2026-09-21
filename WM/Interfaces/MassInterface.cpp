#include "stdafx.h"
#include "MassInterface.h"

static const wchar_t *const szTitle[] = {L"IDS_TITLE_GRAMS", L"IDS_TITLE_OUNCES", L"IDS_TITLE_POUNDS", L"IDS_TITLE_KILOGRAMS", L"IDS_TITLE_STONE", L"IDS_TITLE_TONNES", L"IDS_TITLE_TONS"};
static const wchar_t *const szAbbrv[] = {L"IDS_ABBRV_GRAMS", L"IDS_ABBRV_OUNCES", L"IDS_ABBRV_POUNDS", L"IDS_ABBRV_KILOGRAMS", L"IDS_ABBRV_STONE", L"IDS_ABBRV_TONNES", L"IDS_ABBRV_TONS"};

const wchar_t *MassInterface::getName() const
{
	return L"IDS_MASS";
}

int MassInterface::getValueCount() const
{
	return 7;
}

double MassInterface::getValue0() const
{
	return m.getGrams();
}

double MassInterface::getValue1() const
{
	return m.getOunces();
}

double MassInterface::getValue2() const
{
	return m.getPounds();
}

double MassInterface::getValue3() const
{
	return m.getKilograms();
}

double MassInterface::getValue4() const
{
	return m.getStone();
}

double MassInterface::getValue5() const
{
	return m.getTonnes();
}

double MassInterface::getValue6() const
{
	return m.getTons();
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

void MassInterface::setValue0(double x)
{
	m.setGrams(x);
}

void MassInterface::setValue1(double x)
{
	m.setOunces(x);
}

void MassInterface::setValue2(double x)
{
	m.setPounds(x);
}

void MassInterface::setValue3(double x)
{
	m.setKilograms(x);
}

void MassInterface::setValue4(double x)
{
	m.setStone(x);
}

void MassInterface::setValue5(double x)
{
	m.setTonnes(x);
}

void MassInterface::setValue6(double x)
{
	m.setTons(x);
}