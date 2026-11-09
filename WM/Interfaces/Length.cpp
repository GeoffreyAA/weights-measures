#include "stdafx.h"
#include "Length.h"

DEC_CONST Decimal	INCH_M				= DEC_LIT(0.0254);
DEC_CONST Decimal	FOOT_M				= DEC_LIT(0.3048);
DEC_CONST Decimal	YARD_M				= DEC_LIT(0.9144);
DEC_CONST Decimal	MILE_M				= DEC_LIT(1609.344);
DEC_CONST Decimal	NAUT_MILE_M			= DEC_LIT(1852.0);
DEC_CONST Decimal	LIGHT_SECOND_M		= DEC_LIT(299792458.0);
DEC_CONST Decimal	AST_UNIT_M			= DEC_LIT(149597870700.0);
DEC_CONST Decimal	LIGHT_YEAR_M		= DEC_LIT(9460730472580800.0);
DEC_CONST Decimal	PARSEC_M			= DEC_LIT(30856775814913673.0);		// IAU 2015 definition, Wikipedia


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Length::Length(Decimal m) : Metres(m)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Length::getMillimetres() const
{
	return Metres.getMilli();
}

Decimal Length::getCentimetres() const
{
	return Metres.getCenti();
}

Decimal Length::getInches() const
{
	return getMetres() / INCH_M;
}

Decimal Length::getFeet() const
{
	return getMetres() / FOOT_M;
}

Decimal Length::getYards() const
{
	return getMetres() / YARD_M;
}

Decimal Length::getMetres() const
{
	return Metres.getBase();
}

Decimal Length::getKilometres() const
{
	return Metres.getKilo();
}

Decimal Length::getMiles() const
{
	return getMetres() / MILE_M;
}

Decimal Length::getNauticalMiles() const
{
	return getMetres() / NAUT_MILE_M;
}

Decimal Length::getLightSeconds() const
{
	return getMetres() / LIGHT_SECOND_M;
}

Decimal Length::getAstronomicalUnits() const
{
	return getMetres() / AST_UNIT_M;
}

Decimal Length::getLightYears() const
{
	return getMetres() / LIGHT_YEAR_M;
}

Decimal Length::getParsecs() const
{
	return getMetres() / PARSEC_M;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Length::setMillimetres(Decimal x)
{
	Metres.setMilli(x);
}

void Length::setCentimetres(Decimal x)
{
	Metres.setCenti(x);
}

void Length::setInches(Decimal x)
{
	setMetres(x * INCH_M);
}

void Length::setFeet(Decimal x)
{
	setMetres(x * FOOT_M);
}

void Length::setYards(Decimal x)
{
	setMetres(x * YARD_M);
}

void Length::setMetres(Decimal x)
{
	Metres.setBase(x);
}

void Length::setKilometres(Decimal x)
{
	Metres.setKilo(x);
}

void Length::setMiles(Decimal x)
{
	setMetres(x * MILE_M);
}

void Length::setNauticalMiles(Decimal x)
{
	setMetres(x * NAUT_MILE_M);
}

void Length::setLightSeconds(Decimal x)
{
	setMetres(x * LIGHT_SECOND_M);
}

void Length::setAstronomicalUnits(Decimal x)
{
	setMetres(x * AST_UNIT_M);
}

void Length::setLightYears(Decimal x)
{
	setMetres(x * LIGHT_YEAR_M);
}

void Length::setParsecs(Decimal x)
{
	setMetres(x * PARSEC_M);
}