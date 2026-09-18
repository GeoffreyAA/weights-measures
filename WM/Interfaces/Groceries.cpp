#include "stdafx.h"
#include "Groceries.h"

const double KILO = 1000.0;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Groceries::Groceries() : Price(1.0), Grams(1000.0)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double Groceries::getPrice() const
{
	return Price;
}

double Groceries::getKilograms() const
{
	return Grams / KILO;
}

double Groceries::getGrams() const
{
	return Grams;
}

double Groceries::getPricePerKilogram() const
{
	double factor = KILO / Grams;

	return Price * factor;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Groceries::setPrice(double x)
{
	Price = x;
}

void Groceries::setKilograms(double x)
{
	Grams = x * KILO;
}

void Groceries::setGrams(double x)
{
	Grams = x;
}