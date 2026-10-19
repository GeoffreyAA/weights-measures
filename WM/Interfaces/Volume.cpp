#include "stdafx.h"
#include "Volume.h"

Volume::Volume(Decimal mL) : Millilitres(mL)
{
}


///////////////////////////////////////////////////////////////

Decimal Volume::getMillilitres() const
{
	return Millilitres;
}

Decimal Volume::getLitres() const
{
	return getMillilitres() / DEC_LIT(1000.0);
}

Decimal Volume::getPintsUK() const
{
	//return (getLitres() / 0.56826125);

	return getMillilitres() / DEC_LIT(568.26125);
}

Decimal Volume::getPintsUS() const
{
	return getMillilitres() / DEC_LIT(473.176473);
}

Decimal Volume::getQuartsUK() const
{
	return getLitres() / DEC_LIT(1.1365225);
}

Decimal Volume::getQuartsUS() const
{
	return getLitres() / DEC_LIT(0.946352946);
}

Decimal Volume::getGallonsUK() const
{
	return getLitres() / DEC_LIT(4.54609);
}

Decimal Volume::getGallonsUS() const
{
	return getLitres() / DEC_LIT(3.785411784);
}

Decimal Volume::getFluidOuncesUK() const
{
	return getMillilitres() / DEC_LIT(28.4130625);
}

Decimal Volume::getFluidOuncesUS() const
{
	return getMillilitres() / DEC_LIT(29.5735295625);
}

Decimal Volume::getCupsMetric() const
{
	return getMillilitres() / DEC_LIT(250.0);
}

Decimal Volume::getCupsUK() const
{
	return getMillilitres() / DEC_LIT(284.130625);
}

Decimal Volume::getCupsUS() const
{
	return getMillilitres() / DEC_LIT(236.5882365);
}

Decimal Volume::getTeaspoonsMetric() const
{
	return getMillilitres() / DEC_LIT(5.0);
}

Decimal Volume::getTeaspoonsUK() const
{
	return getMillilitres() / DEC_LIT(5.919388020833333);
}

Decimal Volume::getTeaspoonsUS() const
{
	return getMillilitres() / DEC_LIT(4.92892159375);
}

Decimal Volume::getTablepoonsMetric() const
{
	return getMillilitres() / DEC_LIT(15.0);
}

Decimal Volume::getTablepoonsUK() const
{
	return getMillilitres() / DEC_LIT(17.7581640625);
}

Decimal Volume::getTablepoonsUS() const
{
	return getMillilitres() / DEC_LIT(14.78676478125);
}


///////////////////////////////////////////////////////////////

void Volume::setMillilitres(Decimal x)
{
	Millilitres = x;
}

void Volume::setLitres(Decimal x)
{
	setMillilitres(x * DEC_LIT(1000.0));
}

void Volume::setPintsUK(Decimal x)
{
	//setLitres(x * 0.56826125);

	setMillilitres(x * DEC_LIT(568.26125));
}

void Volume::setPintsUS(Decimal x)
{
	setMillilitres(x * DEC_LIT(473.176473));
}

void Volume::setQuartsUK(Decimal x)
{
	setLitres(x * DEC_LIT(1.1365225));
}

void Volume::setQuartsUS(Decimal x)
{
	setLitres(x * DEC_LIT(0.946352946));
}

void Volume::setGallonsUK(Decimal x)
{
	setLitres(x * DEC_LIT(4.54609));
}

void Volume::setGallonsUS(Decimal x)
{
	setLitres(x * DEC_LIT(3.785411784));
}

void Volume::setFluidOuncesUK(Decimal x)
{
	setMillilitres(x * DEC_LIT(28.4130625));
}

void Volume::setFluidOuncesUS(Decimal x)
{
	setMillilitres(x * DEC_LIT(29.5735295625));
}

void Volume::setCupsMetric(Decimal x)
{
	setMillilitres(x * DEC_LIT(250.0));
}

void Volume::setCupsUK(Decimal x)
{
	setMillilitres(x * DEC_LIT(284.130625));
}

void Volume::setCupsUS(Decimal x)
{
	setMillilitres(x * DEC_LIT(236.5882365));
}

void Volume::setTeaspoonsMetric(Decimal x)
{
	setMillilitres(x * DEC_LIT(5.0));
}

void Volume::setTeaspoonsUK(Decimal x)
{
	setMillilitres(x * DEC_LIT(5.919388020833333));
}

void Volume::setTeaspoonsUS(Decimal x)
{
	setMillilitres(x * DEC_LIT(4.92892159375));
}

void Volume::setTablepoonsMetric(Decimal x)
{
	setMillilitres(x * DEC_LIT(15.0));
}

void Volume::setTablepoonsUK(Decimal x)
{
	setMillilitres(x * DEC_LIT(17.7581640625));
}

void Volume::setTablepoonsUS(Decimal x)
{
	setMillilitres(x * DEC_LIT(14.78676478125));
}