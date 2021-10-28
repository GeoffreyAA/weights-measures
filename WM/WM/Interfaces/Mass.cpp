#include "stdafx.h"
#include "Mass.h"

Mass::Mass(double g) : Grams(g)
{
}

double Mass::getGrams() const
{
	return (Grams);
}

double Mass::getOunces() const
{
	return (getGrams() / 28.349523125);
}

double Mass::getPounds() const
{
	return (getKilograms() / 0.45359237);
}

double Mass::getKilograms() const
{
	return (getGrams() / 1000.0);
}

double Mass::getStone() const
{
	return (getKilograms() / 6.35029318);
}

double Mass::getTonnes() const
{
	return (getKilograms() / 1000.0);
}

double Mass::getTons() const
{
	return (getKilograms() / 1016.0469088);
}

void Mass::setGrams(double x)
{
	Grams = x;
}

void Mass::setOunces(double x)
{
	setGrams(x * 28.349523125);
}

void Mass::setPounds(double x)
{
	setKilograms(x * 0.45359237);
}

void Mass::setKilograms(double x)
{
	setGrams(x * 1000.0);
}

void Mass::setStone(double x)
{
	setKilograms(x * 6.35029318);
}

void Mass::setTonnes(double x)
{
	setKilograms(x * 1000.0);
}

void Mass::setTons(double x)
{
	setKilograms(x * 1016.0469088);
}