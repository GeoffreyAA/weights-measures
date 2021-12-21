#include "stdafx.h"
#include "Volume.h"

Volume::Volume(double mL) : Millilitres(mL)
{
}


///////////////////////////////////////////////////////////////

double Volume::getMillilitres() const
{
	return (Millilitres);
}

double Volume::getLitres() const
{
	return (getMillilitres() / 1000.0);
}

double Volume::getPintsUK() const
{
	//return (getLitres() / 0.56826125);

	return (getMillilitres() / 568.26125);
}

double Volume::getPintsUS() const
{
	return (getMillilitres() / 473.176473);
}

double Volume::getQuartsUK() const
{
	return (getLitres() / 1.1365225);
}

double Volume::getQuartsUS() const
{
	return (getLitres() / 0.946352946);
}

double Volume::getGallonsUK() const
{
	return (getLitres() / 4.54609);
}

double Volume::getGallonsUS() const
{
	return (getLitres() / 3.785411784);
}

double Volume::getFluidOuncesUK() const
{
	return (getMillilitres() / 28.4130625);
}

double Volume::getFluidOuncesUS() const
{
	return (getMillilitres() / 29.5735295625);
}

double Volume::getCupsMetric() const
{
	return (getMillilitres() / 250.0);
}

double Volume::getCupsUK() const
{
	return (getMillilitres() / 284.130625);
}

double Volume::getCupsUS() const
{
	return (getMillilitres() / 236.5882365);
}

double Volume::getTeaspoonsMetric() const
{
	return (getMillilitres() / 5.0);
}

double Volume::getTeaspoonsUK() const
{
	return (getMillilitres() / 5.919388020833333);
}

double Volume::getTeaspoonsUS() const
{
	return (getMillilitres() / 4.92892159375);
}

double Volume::getTablepoonsMetric() const
{
	return (getMillilitres() / 15.0);
}

double Volume::getTablepoonsUK() const
{
	return (getMillilitres() / 17.7581640625);
}

double Volume::getTablepoonsUS() const
{
	return (getMillilitres() / 14.78676478125);
}


///////////////////////////////////////////////////////////////

void Volume::setMillilitres(double x)
{
	Millilitres = x;
}

void Volume::setLitres(double x)
{
	setMillilitres(x * 1000.0);
}

void Volume::setPintsUK(double x)
{
	//setLitres(x * 0.56826125);

	setMillilitres(x * 568.26125);
}

void Volume::setPintsUS(double x)
{
	setMillilitres(x * 473.176473);
}

void Volume::setQuartsUK(double x)
{
	setLitres(x * 1.1365225);
}

void Volume::setQuartsUS(double x)
{
	setLitres(x * 0.946352946);
}

void Volume::setGallonsUK(double x)
{
	setLitres(x * 4.54609);
}

void Volume::setGallonsUS(double x)
{
	setLitres(x * 3.785411784);
}

void Volume::setFluidOuncesUK(double x)
{
	setMillilitres(x * 28.4130625);
}

void Volume::setFluidOuncesUS(double x)
{
	setMillilitres(x * 29.5735295625);
}

void Volume::setCupsMetric(double x)
{
	setMillilitres(x * 250.0);
}

void Volume::setCupsUK(double x)
{
	setMillilitres(x * 284.130625);
}

void Volume::setCupsUS(double x)
{
	setMillilitres(x * 236.5882365);
}

void Volume::setTeaspoonsMetric(double x)
{
	setMillilitres(x * 5.0);
}

void Volume::setTeaspoonsUK(double x)
{
	setMillilitres(x * 5.919388020833333);
}

void Volume::setTeaspoonsUS(double x)
{
	setMillilitres(x * 4.92892159375);
}

void Volume::setTablepoonsMetric(double x)
{
	setMillilitres(x * 15.0);
}

void Volume::setTablepoonsUK(double x)
{
	setMillilitres(x * 17.7581640625);
}

void Volume::setTablepoonsUS(double x)
{
	setMillilitres(x * 14.78676478125);
}