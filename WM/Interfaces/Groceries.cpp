#include "stdafx.h"
#include "Groceries.h"

const Decimal KILO = DEC_LIT(1000.0);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Groceries::Groceries() : Price(DEC_LIT(1.0)), Grams(DEC_LIT(1000.0))
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Groceries::getPrice() const
{
	return Price;
}

Decimal Groceries::getKilograms() const
{
	return Grams / KILO;
}

Decimal Groceries::getGrams() const
{
	return Grams;
}

Decimal Groceries::getPricePerKilogram() const
{
	Decimal factor = KILO / Grams;

	return Price * factor;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Groceries::setPrice(Decimal x)
{
	Price = x;
}

void Groceries::setKilograms(Decimal x)
{
	Grams = x * KILO;
}

void Groceries::setGrams(Decimal x)
{
	Grams = x;
}