#include "stdafx.h"
#include "Power.h"

Power::Power(Decimal W) : Watts(W)
{
}


///////////////////////////////////////////////////////////////

Decimal Power::getBtuPerHour() const
{
	return getWatts() * DEC_LIT(3.412142);
}

Decimal Power::getWatts() const
{
	return Watts;
}

Decimal Power::getKilowatts() const
{
	return getWatts() / DEC_LIT(1000.0);
}

Decimal Power::getHorsepowerMechanical() const
{
	return getWatts() / DEC_LIT(745.69987158227022);
}


///////////////////////////////////////////////////////////////

void Power::setBtuPerHour(Decimal x)
{
	setWatts(x / DEC_LIT(3.412142));
}

void Power::setWatts(Decimal x)
{
	Watts = x;
}

void Power::setKilowatts(Decimal x)
{
	setWatts(x * DEC_LIT(1000.0));
}

void Power::setHorsepowerMechanical(Decimal x)
{
	setWatts(x * DEC_LIT(745.69987158227022));
}