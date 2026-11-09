#include "stdafx.h"
#include "Groceries.h"

DEC_CONST Decimal	KILOGRAM_G	= DEC_LIT(1000.0);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Groceries::Groceries() : Price(DEC_LIT(1.0)),
						 Grams(KILOGRAM_G)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Groceries::getPrice() const
{
	return Price;
}

Decimal Groceries::getKilograms() const
{
	return getGrams() / KILOGRAM_G;
}

Decimal Groceries::getGrams() const
{
	return Grams;
}

Decimal Groceries::getPricePerKilogram() const
{
	Decimal factor = KILOGRAM_G / getGrams();

	return Price * factor;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Groceries::setPrice(Decimal x)
{
	Price = x;
}

void Groceries::setKilograms(Decimal x)
{
	setGrams(x * KILOGRAM_G);
}

void Groceries::setGrams(Decimal x)
{
	Grams = x;
}