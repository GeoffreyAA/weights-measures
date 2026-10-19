#include "stdafx.h"
#include "Mass.h"

Mass::Mass(Decimal g) : Grams(g)
{
}

Decimal Mass::getGrams() const
{
	return Grams;
}

Decimal Mass::getOunces() const
{
	return getGrams() / DEC_LIT(28.349523125);
}

Decimal Mass::getPounds() const
{
	return getKilograms() / DEC_LIT(0.45359237);
}

Decimal Mass::getKilograms() const
{
	return getGrams() / DEC_LIT(1000.0);
}

Decimal Mass::getStone() const
{
	return getKilograms() / DEC_LIT(6.35029318);
}

Decimal Mass::getTonnes() const
{
	return getKilograms() / DEC_LIT(1000.0);
}

Decimal Mass::getTons() const
{
	return getKilograms() / DEC_LIT(1016.0469088);
}

void Mass::setGrams(Decimal x)
{
	Grams = x;
}

void Mass::setOunces(Decimal x)
{
	setGrams(x * DEC_LIT(28.349523125));
}

void Mass::setPounds(Decimal x)
{
	setKilograms(x * DEC_LIT(0.45359237));
}

void Mass::setKilograms(Decimal x)
{
	setGrams(x * DEC_LIT(1000.0));
}

void Mass::setStone(Decimal x)
{
	setKilograms(x * DEC_LIT(6.35029318));
}

void Mass::setTonnes(Decimal x)
{
	setKilograms(x * DEC_LIT(1000.0));
}

void Mass::setTons(Decimal x)
{
	setKilograms(x * DEC_LIT(1016.0469088));
}