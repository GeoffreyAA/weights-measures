#include "stdafx.h"
#include "MassInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_GRAMS", L"IDS_TITLE_OUNCES", L"IDS_TITLE_POUNDS", L"IDS_TITLE_KILOGRAMS", L"IDS_TITLE_STONE", L"IDS_TITLE_TONNES", L"IDS_TITLE_TONS"};
static const wchar_t *const szAbrv[] = {L"IDS_ABRV_GRAMS", L"IDS_ABRV_OUNCES", L"IDS_ABRV_POUNDS", L"IDS_ABRV_KILOGRAMS", L"IDS_ABRV_STONE", L"IDS_ABRV_TONNES", L"IDS_ABRV_TONS"};

int MassInterface::getValueCount() const
{
	return (7);
}

double MassInterface::getValue1() const
{
	return (m.getGrams());
}

double MassInterface::getValue2() const
{
	return (m.getOunces());
}

double MassInterface::getValue3() const
{
	return (m.getPounds());
}

double MassInterface::getValue4() const
{
	return (m.getKilograms());
}

double MassInterface::getValue5() const
{
	return (m.getStone());
}

double MassInterface::getValue6() const
{
	return (m.getTonnes());
}

double MassInterface::getValue7() const
{
	return (m.getTons());
}

const wchar_t *MassInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return (szTitles[i]);
	}

	return (ConversionInterface::getTitle(i));
}

const wchar_t *MassInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return (szAbrv[i]);
	}

	return (ConversionInterface::getAbbreviation(i));
}

void MassInterface::setValue1(double x)
{
	m.setGrams(x);
}

void MassInterface::setValue2(double x)
{
	m.setOunces(x);
}

void MassInterface::setValue3(double x)
{
	m.setPounds(x);
}

void MassInterface::setValue4(double x)
{
	m.setKilograms(x);
}

void MassInterface::setValue5(double x)
{
	m.setStone(x);
}

void MassInterface::setValue6(double x)
{
	m.setTonnes(x);
}

void MassInterface::setValue7(double x)
{
	m.setTons(x);
}