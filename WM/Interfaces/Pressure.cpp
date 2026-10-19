#include "stdafx.h"
#include "Pressure.h"

Pressure::Pressure(Decimal Pa) : Pascals(Pa)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Pressure::getPascals() const
{
	return Pascals;
}

Decimal Pressure::getKilopascals() const
{
	return getPascals() / DEC_LIT(1000.0);
}

Decimal Pressure::getPoundsPerSquareInch() const
{
	return getPascals() / DEC_LIT(6894.757293168);
}

Decimal Pressure::getBars() const
{
	return getPascals() / DEC_LIT(100000.0);
}

Decimal Pressure::getStandardAtmosphere() const
{
	return getPascals() / DEC_LIT(101325.0);
}

Decimal Pressure::getMillimetresOfMercury() const
{
	return getPascals() / DEC_LIT(133.322387415);
}

Decimal Pressure::getInchesOfMercury() const
{
	return getPascals() / DEC_LIT(3386.389);
}

Decimal Pressure::getCentimetresOfWater() const
{
	return getPascals() / DEC_LIT(98.0665);
}

Decimal Pressure::getInchesOfWater() const
{
	return getPascals() / DEC_LIT(249.082);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pressure::setPascals(Decimal x)
{
	Pascals = x;
}

void Pressure::setKilopascals(Decimal x)
{
	setPascals(x * DEC_LIT(1000.0));
}

void Pressure::setPoundsPerSquareInch(Decimal x)
{
	setPascals(x * DEC_LIT(6894.757293168));
}

void Pressure::setBars(Decimal x)
{
	setPascals(x * DEC_LIT(100000.0));
}

void Pressure::setStandardAtmosphere(Decimal x)
{
	setPascals(x * DEC_LIT(101325.0));
}

void Pressure::setMillimetresOfMercury(Decimal x)
{
	setPascals(x * DEC_LIT(133.322387415));
}

void Pressure::setInchesOfMercury(Decimal x)
{
	setPascals(x * DEC_LIT(3386.389));
}

void Pressure::setCentimetresOfWater(Decimal x)
{
	setPascals(x * DEC_LIT(98.0665));
}

void Pressure::setInchesOfWater(Decimal x)
{
	setPascals(x * DEC_LIT(249.082));
}