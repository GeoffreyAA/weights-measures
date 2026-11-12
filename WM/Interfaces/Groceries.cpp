#include "stdafx.h"
#include "Groceries.h"

Groceries::Groceries() : Price(DEC_LIT(1.0)), Weight(DEC_LIT(1000.0))
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Groceries::getPrice() const
{
	return Price;
}

Decimal Groceries::getKilograms() const
{
	return Weight.getKilograms();
}

Decimal Groceries::getGrams() const
{
	return Weight.getGrams();
}

Decimal Groceries::getPricePerKilogram() const
{
	return getPrice() / getKilograms();
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Groceries::setPrice(Decimal x)
{
	Price = x;
}

void Groceries::setKilograms(Decimal x)
{
	Weight.setKilograms(x);
}

void Groceries::setGrams(Decimal x)
{
	Weight.setGrams(x);
}