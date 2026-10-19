#include "stdafx.h"
#include "Length.h"

Length::Length(Decimal mm) : Millimetres(mm)
{
}

Decimal Length::getMillimetres() const
{
	return Millimetres;
}

Decimal Length::getCentimetres() const
{
	return getMillimetres() / DEC_LIT(10.0);
}

Decimal Length::getInches() const
{
	return getMetres() / DEC_LIT(0.0254);
}

Decimal Length::getFeet() const
{
	return getMetres() / DEC_LIT(0.3048);
}

Decimal Length::getYards() const
{
	return getMetres() / DEC_LIT(0.9144);
}

Decimal Length::getMetres() const
{
	return getCentimetres() / DEC_LIT(100.0);
}

Decimal Length::getKilometres() const
{
	return getMetres() / DEC_LIT(1000.0);
}

Decimal Length::getMiles() const
{
	return getMetres() / DEC_LIT(1609.344);
}

void Length::setMillimetres(Decimal x)
{
	Millimetres = x;
}

void Length::setCentimetres(Decimal x)
{
	setMillimetres(x * DEC_LIT(10.0));
}

void Length::setInches(Decimal x)
{
	setMetres(x * DEC_LIT(0.0254));
}

void Length::setFeet(Decimal x)
{
	setMetres(x * DEC_LIT(0.3048));
}

void Length::setYards(Decimal x)
{
	setMetres(x * DEC_LIT(0.9144));
}

void Length::setMetres(Decimal x)
{
	setCentimetres(x * DEC_LIT(100.0));
}

void Length::setKilometres(Decimal x)
{
	setMetres(x * DEC_LIT(1000.0));
}

void Length::setMiles(Decimal x)
{
	setMetres(x * DEC_LIT(1609.344));
}