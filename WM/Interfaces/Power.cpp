#include "stdafx.h"
#include "Power.h"

DEC_CONST Decimal	BTU_PER_HOUR_W				= DEC_LIT(0.293071);
DEC_CONST Decimal	KILOWATT_W					= DEC_LIT(1000.0);
DEC_CONST Decimal	HORSEPOWER_MECHANICAL_W		= DEC_LIT(745.69987158227022);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Power::Power(Decimal W) : Watts(W)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Power::getBtuPerHour() const
{
	return getWatts() / BTU_PER_HOUR_W;
}

Decimal Power::getWatts() const
{
	return Watts;
}

Decimal Power::getKilowatts() const
{
	return getWatts() / KILOWATT_W;
}

Decimal Power::getHorsepowerMechanical() const
{
	return getWatts() / HORSEPOWER_MECHANICAL_W;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Power::setBtuPerHour(Decimal x)
{
	setWatts(x * BTU_PER_HOUR_W);
}

void Power::setWatts(Decimal x)
{
	Watts = x;
}

void Power::setKilowatts(Decimal x)
{
	setWatts(x * KILOWATT_W);
}

void Power::setHorsepowerMechanical(Decimal x)
{
	setWatts(x * HORSEPOWER_MECHANICAL_W);
}