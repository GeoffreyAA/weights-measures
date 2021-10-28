#include "stdafx.h"
#include "Length.h"

Length::Length(double mm) : Millimetres(mm)
{
}

double Length::getMillimetres() const
{
	return (Millimetres);
}

double Length::getCentimetres() const
{
	return (getMillimetres() / 10.0);
}

double Length::getInches() const
{
	return (getMetres() / 0.0254);
}

double Length::getFeet() const
{
	return (getMetres() / 0.3048);
}

double Length::getYards() const
{
	return (getMetres() / 0.9144);
}

double Length::getMetres() const
{
	return (getCentimetres() / 100.0);
}

double Length::getKilometres() const
{
	return (getMetres() / 1000.0);
}

double Length::getMiles() const
{
	return (getMetres() / 1609.344);
}

void Length::setMillimetres(double x)
{
	Millimetres = x;
}

void Length::setCentimetres(double x)
{
	setMillimetres(x * 10.0);
}

void Length::setInches(double x)
{
	setMetres(x * 0.0254);
}

void Length::setFeet(double x)
{
	setMetres(x * 0.3048);
}

void Length::setYards(double x)
{
	setMetres(x * 0.9144);
}

void Length::setMetres(double x)
{
	setCentimetres(x * 100.0);
}

void Length::setKilometres(double x)
{
	setMetres(x * 1000.0);
}

void Length::setMiles(double x)
{
	setMetres(x * 1609.344);
}