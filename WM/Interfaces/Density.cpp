#include "stdafx.h"
#include "Density.h"

DEC_CONST Decimal	OUNCE_PER_GALLON_UK_KGM3		= DEC_LIT(6.236023291);
DEC_CONST Decimal	OUNCE_PER_GALLON_US_KGM3		= DEC_LIT(7.489151707);
DEC_CONST Decimal	POUND_PER_CUBIC_FOOT_KGM3		= DEC_LIT(16.01846337);
DEC_CONST Decimal	GRAM_PER_CUBIC_CENTIMETRE_KGM3	= DEC_LIT(1000.0);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Density::Density(Decimal kgm3) : KilogramsPerCubicMetre(kgm3)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Density::getKilogramsPerCubicMetre() const
{
	return KilogramsPerCubicMetre;
}

Decimal Density::getOuncesPerGallonUK() const
{
	return getKilogramsPerCubicMetre() / OUNCE_PER_GALLON_UK_KGM3;
}

Decimal Density::getOuncesPerGallonUS() const
{
	return getKilogramsPerCubicMetre() / OUNCE_PER_GALLON_US_KGM3;
}

Decimal Density::getPoundsPerCubicFoot() const
{
	return getKilogramsPerCubicMetre() / POUND_PER_CUBIC_FOOT_KGM3;
}

Decimal Density::getGramsPerCubicCentimetre() const
{
	return getKilogramsPerCubicMetre() / GRAM_PER_CUBIC_CENTIMETRE_KGM3;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Density::setKilogramsPerCubicMetre(Decimal x)
{
	KilogramsPerCubicMetre = x;
}

void Density::setOuncesPerGallonUK(Decimal x)
{
	setKilogramsPerCubicMetre(x * OUNCE_PER_GALLON_UK_KGM3);
}

void Density::setOuncesPerGallonUS(Decimal x)
{
	setKilogramsPerCubicMetre(x * OUNCE_PER_GALLON_US_KGM3);
}

void Density::setPoundsPerCubicFoot(Decimal x)
{
	setKilogramsPerCubicMetre(x * POUND_PER_CUBIC_FOOT_KGM3);
}

void Density::setGramsPerCubicCentimetre(Decimal x)
{
	setKilogramsPerCubicMetre(x * GRAM_PER_CUBIC_CENTIMETRE_KGM3);
}