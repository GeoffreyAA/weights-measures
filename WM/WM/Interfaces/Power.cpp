#include "stdafx.h"
#include "Power.h"

Power::Power(double W) : Watts(W)
{
}


///////////////////////////////////////////////////////////////

double Power::getBtuPerHour() const
{
	return (getWatts() * 3.412142);
}

double Power::getWatts() const
{
	return (Watts);
}

double Power::getKilowatts() const
{
	return (getWatts() / 1000.0);
}

double Power::getHorsepowerMechanical() const
{
	return (getWatts() / 745.69987158227022);
}


///////////////////////////////////////////////////////////////

void Power::setBtuPerHour(double x)
{
	setWatts(x / 3.412142);
}

void Power::setWatts(double x)
{
	Watts = x;
}

void Power::setKilowatts(double x)
{
	setWatts(x * 1000.0);
}

void Power::setHorsepowerMechanical(double x)
{
	setWatts(x * 745.69987158227022);
}