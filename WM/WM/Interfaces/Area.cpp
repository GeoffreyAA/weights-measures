#include "stdafx.h"
#include "Area.h"

Area::Area(double sqm) : SquareMetres(sqm)
{
}

double Area::getSquareInches() const
{
	return (getSquareMetres() / 0.00064516);
}

double Area::getSquareFeet() const
{
	return (getSquareMetres() / 0.09290304);
}

double Area::getSquareYards() const
{
	return (getSquareMetres() / 0.83612736);
}

double Area::getSquareMetres() const
{
	return (SquareMetres);
}

double Area::getAcres() const
{
	return (getSquareMetres() / 4046.8564224);
}

double Area::getHectares() const
{
	return (getSquareMetres() / 10000.0);
}

double Area::getSquareKilometres() const
{
	return (getSquareMetres() / 1000000.0);
}

double Area::getSquareMiles() const
{
	return (getSquareMetres() / 2589988.110336);
}

void Area::setSquareInches(double x)
{
	setSquareMetres(x * 0.00064516);
}

void Area::setSquareFeet(double x)
{
	setSquareMetres(x * 0.09290304);
}

void Area::setSquareYards(double x)
{
	setSquareMetres(x * 0.83612736);
}

void Area::setSquareMetres(double x)
{
	SquareMetres = x;
}

void Area::setAcres(double x)
{
	setSquareMetres(x * 4046.8564224);
}

void Area::setHectares(double x)
{
	setSquareMetres(x * 10000.0);
}

void Area::setSquareKilometres(double x)
{
	setSquareMetres(x * 1000000.0);
}

void Area::setSquareMiles(double x)
{
	setSquareMetres(x * 2589988.110336);
}