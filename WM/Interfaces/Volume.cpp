#include "stdafx.h"
#include "Volume.h"

DEC_CONST Decimal	LITRE_ML				= DEC_LIT(1000.0);
DEC_CONST Decimal	PINT_UK_ML				= DEC_LIT(568.26125);
DEC_CONST Decimal	PINT_US_ML				= DEC_LIT(473.176473);
DEC_CONST Decimal	QUART_UK_L				= DEC_LIT(1.1365225);
DEC_CONST Decimal	QUART_US_L				= DEC_LIT(0.946352946);
DEC_CONST Decimal	GALLON_UK_L				= DEC_LIT(4.54609);
DEC_CONST Decimal	GALLON_US_L				= DEC_LIT(3.785411784);
DEC_CONST Decimal	FLUID_OUNCE_UK_ML		= DEC_LIT(28.4130625);
DEC_CONST Decimal	FLUID_OUNCE_US_ML		= DEC_LIT(29.5735295625);
DEC_CONST Decimal	CUP_METRIC_ML			= DEC_LIT(250.0);
DEC_CONST Decimal	CUP_UK_ML				= FLUID_OUNCE_UK_ML * DEC_LIT(6.0);
DEC_CONST Decimal	CUP_US_ML				= DEC_LIT(236.5882365);
DEC_CONST Decimal	TEASPOON_METRIC_ML		= DEC_LIT(5.0);
DEC_CONST Decimal	TEASPOON_UK_ML			= FLUID_OUNCE_UK_ML / DEC_LIT(8.0);
DEC_CONST Decimal	TEASPOON_US_ML			= DEC_LIT(4.92892159375);
DEC_CONST Decimal	TABLESPOON_METRIC_ML	= DEC_LIT(15.0);
DEC_CONST Decimal	TABLESPOON_UK_ML		= FLUID_OUNCE_UK_ML / DEC_LIT(2.0);
DEC_CONST Decimal	TABLESPOON_US_ML		= DEC_LIT(14.78676478125);
DEC_CONST Decimal	CUBIC_METRE_ML			= DEC_LIT(1000000.0);
DEC_CONST Decimal	CUBIC_INCH_ML			= DEC_LIT(16.387064);
DEC_CONST Decimal	CUBIC_FOOT_M3			= DEC_LIT(0.028316846592);
DEC_CONST Decimal	CUBIC_YARD_M3			= DEC_LIT(0.764554857984);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Volume::Volume(Decimal mL) : Millilitres(mL)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Volume::getMillilitres() const
{
	return Millilitres;
}

Decimal Volume::getLitres() const
{
	return getMillilitres() / LITRE_ML;
}

Decimal Volume::getPintsUK() const
{
	return getMillilitres() / PINT_UK_ML;
}

Decimal Volume::getPintsUS() const
{
	return getMillilitres() / PINT_US_ML;
}

Decimal Volume::getQuartsUK() const
{
	return getLitres() / QUART_UK_L;
}

Decimal Volume::getQuartsUS() const
{
	return getLitres() / QUART_US_L;
}

Decimal Volume::getGallonsUK() const
{
	return getLitres() / GALLON_UK_L;
}

Decimal Volume::getGallonsUS() const
{
	return getLitres() / GALLON_US_L;
}

Decimal Volume::getFluidOuncesUK() const
{
	return getMillilitres() / FLUID_OUNCE_UK_ML;
}

Decimal Volume::getFluidOuncesUS() const
{
	return getMillilitres() / FLUID_OUNCE_US_ML;
}

Decimal Volume::getCupsMetric() const
{
	return getMillilitres() / CUP_METRIC_ML;
}

Decimal Volume::getCupsUK() const
{
	return getMillilitres() / CUP_UK_ML;
}

Decimal Volume::getCupsUS() const
{
	return getMillilitres() / CUP_US_ML;
}

Decimal Volume::getTeaspoonsMetric() const
{
	return getMillilitres() / TEASPOON_METRIC_ML;
}

Decimal Volume::getTeaspoonsUK() const
{
	return getMillilitres() / TEASPOON_UK_ML;
}

Decimal Volume::getTeaspoonsUS() const
{
	return getMillilitres() / TEASPOON_US_ML;
}

Decimal Volume::getTablepoonsMetric() const
{
	return getMillilitres() / TABLESPOON_METRIC_ML;
}

Decimal Volume::getTablepoonsUK() const
{
	return getMillilitres() / TABLESPOON_UK_ML;
}

Decimal Volume::getTablepoonsUS() const
{
	return getMillilitres() / TABLESPOON_US_ML;
}

Decimal Volume::getCubicMetres() const
{
	return getMillilitres() / CUBIC_METRE_ML;
}

Decimal Volume::getCubicInches() const
{
	return getMillilitres() / CUBIC_INCH_ML;
}

Decimal Volume::getCubicFeet() const
{
	return getCubicMetres() / CUBIC_FOOT_M3;
}

Decimal Volume::getCubicYards() const
{
	return getCubicMetres() / CUBIC_YARD_M3;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Volume::setMillilitres(Decimal x)
{
	Millilitres = x;
}

void Volume::setLitres(Decimal x)
{
	setMillilitres(x * LITRE_ML);
}

void Volume::setPintsUK(Decimal x)
{
	setMillilitres(x * PINT_UK_ML);
}

void Volume::setPintsUS(Decimal x)
{
	setMillilitres(x * PINT_US_ML);
}

void Volume::setQuartsUK(Decimal x)
{
	setLitres(x * QUART_UK_L);
}

void Volume::setQuartsUS(Decimal x)
{
	setLitres(x * QUART_US_L);
}

void Volume::setGallonsUK(Decimal x)
{
	setLitres(x * GALLON_UK_L);
}

void Volume::setGallonsUS(Decimal x)
{
	setLitres(x * GALLON_US_L);
}

void Volume::setFluidOuncesUK(Decimal x)
{
	setMillilitres(x * FLUID_OUNCE_UK_ML);
}

void Volume::setFluidOuncesUS(Decimal x)
{
	setMillilitres(x * FLUID_OUNCE_US_ML);
}

void Volume::setCupsMetric(Decimal x)
{
	setMillilitres(x * CUP_METRIC_ML);
}

void Volume::setCupsUK(Decimal x)
{
	setMillilitres(x * CUP_UK_ML);
}

void Volume::setCupsUS(Decimal x)
{
	setMillilitres(x * CUP_US_ML);
}

void Volume::setTeaspoonsMetric(Decimal x)
{
	setMillilitres(x * TEASPOON_METRIC_ML);
}

void Volume::setTeaspoonsUK(Decimal x)
{
	setMillilitres(x * TEASPOON_UK_ML);
}

void Volume::setTeaspoonsUS(Decimal x)
{
	setMillilitres(x * TEASPOON_US_ML);
}

void Volume::setTablepoonsMetric(Decimal x)
{
	setMillilitres(x * TABLESPOON_METRIC_ML);
}

void Volume::setTablepoonsUK(Decimal x)
{
	setMillilitres(x * TABLESPOON_UK_ML);
}

void Volume::setTablepoonsUS(Decimal x)
{
	setMillilitres(x * TABLESPOON_US_ML);
}

void Volume::setCubicMetres(Decimal x)
{
	setMillilitres(x * CUBIC_METRE_ML);
}

void Volume::setCubicInches(Decimal x)
{
	setMillilitres(x * CUBIC_INCH_ML);
}

void Volume::setCubicFeet(Decimal x)
{
	setCubicMetres(x * CUBIC_FOOT_M3);
}

void Volume::setCubicYards(Decimal x)
{
	setCubicMetres(x * CUBIC_YARD_M3);
}