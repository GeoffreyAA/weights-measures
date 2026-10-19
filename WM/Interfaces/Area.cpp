#include "stdafx.h"
#include "Area.h"

Area::Area(Decimal sqm) : SquareMetres(sqm)
{
}

Decimal Area::getSquareInches() const
{
	return getSquareMetres() / DEC_LIT(0.00064516);
}

Decimal Area::getSquareFeet() const
{
	return getSquareMetres() / DEC_LIT(0.09290304);
}

Decimal Area::getSquareYards() const
{
	return getSquareMetres() / DEC_LIT(0.83612736);
}

Decimal Area::getSquareMetres() const
{
	return SquareMetres;
}

Decimal Area::getAcres() const
{
	return getSquareMetres() / DEC_LIT(4046.8564224);
}

Decimal Area::getHectares() const
{
	return getSquareMetres() / DEC_LIT(10000.0);
}

Decimal Area::getSquareKilometres() const
{
	return getSquareMetres() / DEC_LIT(1000000.0);
}

Decimal Area::getSquareMiles() const
{
	return getSquareMetres() / DEC_LIT(2589988.110336);
}

void Area::setSquareInches(Decimal x)
{
	setSquareMetres(x * DEC_LIT(0.00064516));
}

void Area::setSquareFeet(Decimal x)
{
	setSquareMetres(x * DEC_LIT(0.09290304));
}

void Area::setSquareYards(Decimal x)
{
	setSquareMetres(x * DEC_LIT(0.83612736));
}

void Area::setSquareMetres(Decimal x)
{
	SquareMetres = x;
}

void Area::setAcres(Decimal x)
{
	setSquareMetres(x * DEC_LIT(4046.8564224));
}

void Area::setHectares(Decimal x)
{
	setSquareMetres(x * DEC_LIT(10000.0));
}

void Area::setSquareKilometres(Decimal x)
{
	setSquareMetres(x * DEC_LIT(1000000.0));
}

void Area::setSquareMiles(Decimal x)
{
	setSquareMetres(x * DEC_LIT(2589988.110336));
}