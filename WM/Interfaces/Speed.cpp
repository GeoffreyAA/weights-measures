#include "stdafx.h"
#include "Speed.h"

DEC_CONST Decimal __speed_of_sound = DEC_LIT(340.3);	// Air, at sea level, standard temperature
DEC_CONST Decimal __speed_of_light = DEC_LIT(299792458.0);


///////////////////////////////////////////////////////////////

Speed::Speed(Decimal ms) : MetresPerSecond(ms)
{
}


///////////////////////////////////////////////////////////////

Decimal Speed::getKilometresPerHour() const
{
	return getMetresPerSecond() * DEC_LIT(3.6);
}

Decimal Speed::getFeetPerSecond() const
{
	return getMetresPerSecond() / DEC_LIT(0.3048);
}

Decimal Speed::getMilesPerHour() const
{
	return getMetresPerSecond() / DEC_LIT(0.44704);
}

Decimal Speed::getMetresPerSecond() const
{
	return MetresPerSecond;
}

Decimal Speed::getKnots() const
{
	return getKilometresPerHour() / DEC_LIT(1.852);
}

Decimal Speed::getMach() const
{
	return getMetresPerSecond() / __speed_of_sound;
}

Decimal Speed::getLight() const
{
	return getMetresPerSecond() / __speed_of_light;
}


///////////////////////////////////////////////////////////////

void Speed::setKilometresPerHour(Decimal x)
{
	setMetresPerSecond(x / DEC_LIT(3.6));
}

void Speed::setFeetPerSecond(Decimal x)
{
	setMetresPerSecond(x * DEC_LIT(0.3048));
}

void Speed::setMilesPerHour(Decimal x)
{
	setMetresPerSecond(x * DEC_LIT(0.44704));
}

void Speed::setMetresPerSecond(Decimal x)
{
	MetresPerSecond = x;
}

void Speed::setKnots(Decimal x)
{
	setKilometresPerHour(x * DEC_LIT(1.852));
}

void Speed::setMach(Decimal x)
{
	setMetresPerSecond(x * __speed_of_sound);
}

void Speed::setLight(Decimal x)
{
	setMetresPerSecond(x * __speed_of_light);
}