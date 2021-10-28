#include "stdafx.h"
#include "Volume.h"

Volume::Volume(double mL) : Millilitres(mL)
{
}

double Volume::getMillilitres() const
{
	return (Millilitres);
}

double Volume::getPints() const
{
	return (getLitres() / 0.56826125);
}

double Volume::getLitres() const
{
	return (getMillilitres() / 1000.0);
}

double Volume::getQuarts() const
{
	return (getLitres() / 1.1365225);
}

double Volume::getGallons() const
{
	return (getLitres() / 4.54609);
}

void Volume::setMillilitres(double x)
{
	Millilitres = x;
}

void Volume::setPints(double x)
{
	setLitres(x * 0.56826125);
}

void Volume::setLitres(double x)
{
	setMillilitres(x * 1000.0);
}

void Volume::setQuarts(double x)
{
	setLitres(x * 1.1365225);
}

void Volume::setGallons(double x)
{
	setLitres(x * 4.54609);
}