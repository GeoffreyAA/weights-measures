#include "stdafx.h"
#include "Pressure.h"

DEC_CONST Decimal	KILOPASCAL_PA				= DEC_LIT(1000.0);
DEC_CONST Decimal	POUND_PER_SQUARE_INCH_PA	= DEC_LIT(6894.757293168);
DEC_CONST Decimal	BAR_PA						= DEC_LIT(100000.0);
DEC_CONST Decimal	STANDARD_ATMOSPHERE_PA		= DEC_LIT(101325.0);
DEC_CONST Decimal	MILLIMETRE_OF_MERCURY_PA	= DEC_LIT(133.322387415);
DEC_CONST Decimal	INCH_OF_MERCURY_PA			= DEC_LIT(3386.389);
DEC_CONST Decimal	CENTIMETRE_OF_WATER_PA		= DEC_LIT(98.0665);
DEC_CONST Decimal	INCH_OF_WATER_PA			= DEC_LIT(249.082);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
	return getPascals() / KILOPASCAL_PA;
}

Decimal Pressure::getPoundsPerSquareInch() const
{
	return getPascals() / POUND_PER_SQUARE_INCH_PA;
}

Decimal Pressure::getBars() const
{
	return getPascals() / BAR_PA;
}

Decimal Pressure::getStandardAtmosphere() const
{
	return getPascals() / STANDARD_ATMOSPHERE_PA;
}

Decimal Pressure::getMillimetresOfMercury() const
{
	return getPascals() / MILLIMETRE_OF_MERCURY_PA;
}

Decimal Pressure::getInchesOfMercury() const
{
	return getPascals() / INCH_OF_MERCURY_PA;
}

Decimal Pressure::getCentimetresOfWater() const
{
	return getPascals() / CENTIMETRE_OF_WATER_PA;
}

Decimal Pressure::getInchesOfWater() const
{
	return getPascals() / INCH_OF_WATER_PA;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pressure::setPascals(Decimal x)
{
	Pascals = x;
}

void Pressure::setKilopascals(Decimal x)
{
	setPascals(x * KILOPASCAL_PA);
}

void Pressure::setPoundsPerSquareInch(Decimal x)
{
	setPascals(x * POUND_PER_SQUARE_INCH_PA);
}

void Pressure::setBars(Decimal x)
{
	setPascals(x * BAR_PA);
}

void Pressure::setStandardAtmosphere(Decimal x)
{
	setPascals(x * STANDARD_ATMOSPHERE_PA);
}

void Pressure::setMillimetresOfMercury(Decimal x)
{
	setPascals(x * MILLIMETRE_OF_MERCURY_PA);
}

void Pressure::setInchesOfMercury(Decimal x)
{
	setPascals(x * INCH_OF_MERCURY_PA);
}

void Pressure::setCentimetresOfWater(Decimal x)
{
	setPascals(x * CENTIMETRE_OF_WATER_PA);
}

void Pressure::setInchesOfWater(Decimal x)
{
	setPascals(x * INCH_OF_WATER_PA);
}