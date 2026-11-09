#include "stdafx.h"
#include "Area.h"

DEC_CONST Decimal	SQUARE_CENTIMETRE_SQM	= DEC_LIT(0.0001);
DEC_CONST Decimal	SQUARE_INCH_SQM			= DEC_LIT(0.00064516);
DEC_CONST Decimal	SQUARE_FOOT_SQM			= DEC_LIT(0.09290304);
DEC_CONST Decimal	SQUARE_YARD_SQM			= DEC_LIT(0.83612736);
DEC_CONST Decimal	ACRE_SQM				= DEC_LIT(4046.8564224);
DEC_CONST Decimal	HECTARE_SQM				= DEC_LIT(10000.0);
DEC_CONST Decimal	SQUARE_KILOMETRE_SQM	= DEC_LIT(1000000.0);
DEC_CONST Decimal	SQUARE_MILE_SQM			= DEC_LIT(2589988.110336);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Area::Area(Decimal sqm) : SquareMetres(sqm)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Area::getSquareCentimetres() const
{
	return getSquareMetres() / SQUARE_CENTIMETRE_SQM;
}

Decimal Area::getSquareInches() const
{
	return getSquareMetres() / SQUARE_INCH_SQM;
}

Decimal Area::getSquareFeet() const
{
	return getSquareMetres() / SQUARE_FOOT_SQM;
}

Decimal Area::getSquareYards() const
{
	return getSquareMetres() / SQUARE_YARD_SQM;
}

Decimal Area::getSquareMetres() const
{
	return SquareMetres;
}

Decimal Area::getAcres() const
{
	return getSquareMetres() / ACRE_SQM;
}

Decimal Area::getHectares() const
{
	return getSquareMetres() / HECTARE_SQM;
}

Decimal Area::getSquareKilometres() const
{
	return getSquareMetres() / SQUARE_KILOMETRE_SQM;
}

Decimal Area::getSquareMiles() const
{
	return getSquareMetres() / SQUARE_MILE_SQM;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Area::setSquareCentimetres(Decimal x)
{
	setSquareMetres(x * SQUARE_CENTIMETRE_SQM);
}

void Area::setSquareInches(Decimal x)
{
	setSquareMetres(x * SQUARE_INCH_SQM);
}

void Area::setSquareFeet(Decimal x)
{
	setSquareMetres(x * SQUARE_FOOT_SQM);
}

void Area::setSquareYards(Decimal x)
{
	setSquareMetres(x * SQUARE_YARD_SQM);
}

void Area::setSquareMetres(Decimal x)
{
	SquareMetres = x;
}

void Area::setAcres(Decimal x)
{
	setSquareMetres(x * ACRE_SQM);
}

void Area::setHectares(Decimal x)
{
	setSquareMetres(x * HECTARE_SQM);
}

void Area::setSquareKilometres(Decimal x)
{
	setSquareMetres(x * SQUARE_KILOMETRE_SQM);
}

void Area::setSquareMiles(Decimal x)
{
	setSquareMetres(x * SQUARE_MILE_SQM);
}