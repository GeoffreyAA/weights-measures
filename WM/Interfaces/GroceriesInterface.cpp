#include "stdafx.h"
#include "GroceriesInterface.h"

static const wchar_t *const szTitles[] = {L"IDS_TITLE_PRICE", L"IDS_TITLE_WEIGHT", L"", L"IDS_TITLE_PRICE_KG"};
static const wchar_t *const szAbrv[]   = {L"IDS_ABRV_CURRENCY", L"IDS_ABRV_GROCERIES_KILOGRAMS", L"IDS_ABRV_GROCERIES_GRAMS", L"IDS_ABRV_CURRENCY"};

const wchar_t *GroceriesInterface::getName() const
{
	return L"IDS_GROCERIES";
}

int GroceriesInterface::getValueCount() const
{
	return 4;
}

double GroceriesInterface::getValue0() const
{
	return g.getPrice();
}

double GroceriesInterface::getValue1() const
{
	return g.getKilograms();
}

double GroceriesInterface::getValue2() const
{
	return g.getGrams();
}

double GroceriesInterface::getValue3() const
{
	return g.getPricePerKilogram();
}

const wchar_t *GroceriesInterface::getTitle(int i) const
{
	if ((0 <= i) && (i < (sizeof(szTitles) / sizeof(szTitles[0]))))
	{
		return szTitles[i];
	}

	return ConversionInterface::getTitle(i);
}

const wchar_t *GroceriesInterface::getAbbreviation(int i) const
{
	if ((0 <= i) && (i < (sizeof(szAbrv) / sizeof(szAbrv[0]))))
	{
		return szAbrv[i];
	}

	return ConversionInterface::getAbbreviation(i);
}

void GroceriesInterface::setValue0(double x)
{
	g.setPrice(x);
}

void GroceriesInterface::setValue1(double x)
{
	g.setKilograms(x);
}

void GroceriesInterface::setValue2(double x)
{
	g.setGrams(x);
}

void GroceriesInterface::setValue3(double x)
{
}