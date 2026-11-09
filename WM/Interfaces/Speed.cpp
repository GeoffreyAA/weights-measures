#include "stdafx.h"
#include "Speed.h"

DEC_CONST Decimal	METRES_PER_SECOND_KMH		= DEC_LIT(3.6);
DEC_CONST Decimal	FEET_PER_SECOND_MS			= DEC_LIT(0.3048);
DEC_CONST Decimal	MILES_PER_HOUR_MS			= DEC_LIT(0.44704);
DEC_CONST Decimal	KNOTS_KMH					= DEC_LIT(1.852);
DEC_CONST Decimal	SOUND_MS					= DEC_LIT(340.3);	// Air, at sea level, standard temperature
DEC_CONST Decimal	LIGHT_MS					= DEC_LIT(299792458.0);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Speed::Speed(Decimal ms) : MetresPerSecond(ms)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Speed::getKilometresPerHour() const
{
	return getMetresPerSecond() * METRES_PER_SECOND_KMH;
}

Decimal Speed::getFeetPerSecond() const
{
	return getMetresPerSecond() / FEET_PER_SECOND_MS;
}

Decimal Speed::getMilesPerHour() const
{
	return getMetresPerSecond() / MILES_PER_HOUR_MS;
}

Decimal Speed::getMetresPerSecond() const
{
	return MetresPerSecond;
}

Decimal Speed::getKnots() const
{
	return getKilometresPerHour() / KNOTS_KMH;
}

Decimal Speed::getMach() const
{
	return getMetresPerSecond() / SOUND_MS;
}

Decimal Speed::getLight() const
{
	return getMetresPerSecond() / LIGHT_MS;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Speed::setKilometresPerHour(Decimal x)
{
	setMetresPerSecond(x / METRES_PER_SECOND_KMH);
}

void Speed::setFeetPerSecond(Decimal x)
{
	setMetresPerSecond(x * FEET_PER_SECOND_MS);
}

void Speed::setMilesPerHour(Decimal x)
{
	setMetresPerSecond(x * MILES_PER_HOUR_MS);
}

void Speed::setMetresPerSecond(Decimal x)
{
	MetresPerSecond = x;
}

void Speed::setKnots(Decimal x)
{
	setKilometresPerHour(x * KNOTS_KMH);
}

void Speed::setMach(Decimal x)
{
	setMetresPerSecond(x * SOUND_MS);
}

void Speed::setLight(Decimal x)
{
	setMetresPerSecond(x * LIGHT_MS);
}