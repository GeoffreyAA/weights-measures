#include "stdafx.h"
#include "Pressure.h"

Pressure::Pressure(double Pa) : Pascals(Pa)
{
}


///////////////////////////////////////////////////////////////

double Pressure::getPascals() const
{
	return (Pascals);
}

double Pressure::getKilopascals() const
{
	return (getPascals() / 1000.0);
}

double Pressure::getPoundsPerSquareInch() const
{
	return (getPascals() / 6894.757293168);
}

double Pressure::getBars() const
{
	return (getPascals() / 100000.0);
}

double Pressure::getStandardAtmosphere() const
{
	return (getPascals() / 101325.0);
}

double Pressure::getMillimetresOfMercury() const
{
	return (getPascals() / 133.322387415);
}

double Pressure::getInchesOfMercury() const
{
	return (getPascals() / 3386.389);
}

double Pressure::getCentimetresOfWater() const
{
	return (getPascals() / 98.0665);
}

double Pressure::getInchesOfWater() const
{
	return (getPascals() / 249.082);
}


///////////////////////////////////////////////////////////////

void Pressure::setPascals(double x)
{
	Pascals = x;
}

void Pressure::setKilopascals(double x)
{
	setPascals(x * 1000.0);
}

void Pressure::setPoundsPerSquareInch(double x)
{
	setPascals(x * 6894.757293168);
}

void Pressure::setBars(double x)
{
	setPascals(x * 100000.0);
}

void Pressure::setStandardAtmosphere(double x)
{
	setPascals(x * 101325.0);
}

void Pressure::setMillimetresOfMercury(double x)
{
	setPascals(x * 133.322387415);
}

void Pressure::setInchesOfMercury(double x)
{
	setPascals(x * 3386.389);
}

void Pressure::setCentimetresOfWater(double x)
{
	setPascals(x * 98.0665);
}

void Pressure::setInchesOfWater(double x)
{
	setPascals(x * 249.082);
}