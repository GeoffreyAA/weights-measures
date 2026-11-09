#include "stdafx.h"
#include "Mass.h"

DEC_CONST Decimal	OUNCE_G			= DEC_LIT(28.349523125);
DEC_CONST Decimal	POUND_KG		= DEC_LIT(0.45359237);
DEC_CONST Decimal	STONE_KG		= DEC_LIT(6.35029318);
DEC_CONST Decimal	SHORT_TON_KG	= DEC_LIT(907.18474);
DEC_CONST Decimal	TONNE_KG		= DEC_LIT(1000.0);
DEC_CONST Decimal	LONG_TON_KG		= DEC_LIT(1016.0469088);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Mass::Mass(Decimal g) : Grams(g)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Mass::getMilligrams() const
{
	return Grams.getMilli();
}

Decimal Mass::getGrams() const
{
	return Grams.getBase();
}

Decimal Mass::getOunces() const
{
	return getGrams() / OUNCE_G;
}

Decimal Mass::getPounds() const
{
	return getKilograms() / POUND_KG;
}

Decimal Mass::getKilograms() const
{
	return Grams.getKilo();
}

Decimal Mass::getStone() const
{
	return getKilograms() / STONE_KG;
}

Decimal Mass::getShortTons() const
{
	return getKilograms() / SHORT_TON_KG;
}

Decimal Mass::getTonnes() const
{
	return getKilograms() / TONNE_KG;
}

Decimal Mass::getLongTons() const
{
	return getKilograms() / LONG_TON_KG;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Mass::setMilligrams(Decimal x)
{
	Grams.setMilli(x);
}

void Mass::setGrams(Decimal x)
{
	Grams.setBase(x);
}

void Mass::setOunces(Decimal x)
{
	setGrams(x * OUNCE_G);
}

void Mass::setPounds(Decimal x)
{
	setKilograms(x * POUND_KG);
}

void Mass::setKilograms(Decimal x)
{
	Grams.setKilo(x);
}

void Mass::setStone(Decimal x)
{
	setKilograms(x * STONE_KG);
}

void Mass::setShortTons(Decimal x)
{
	setKilograms(x * SHORT_TON_KG);
}

void Mass::setTonnes(Decimal x)
{
	setKilograms(x * TONNE_KG);
}

void Mass::setLongTons(Decimal x)
{
	setKilograms(x * LONG_TON_KG);
}