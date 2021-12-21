#include "stdafx.h"
#include "Speed.h"

const double __speed_of_sound = 340.3;	// Air, at sea level, standard temperature
const double __speed_of_light = 299792458.0;


///////////////////////////////////////////////////////////////

Speed::Speed(double ms) : MetresPerSecond(ms)
{
}


///////////////////////////////////////////////////////////////

double Speed::getKilometresPerHour() const
{
	return (getMetresPerSecond() * 3.6);
}

double Speed::getFeetPerSecond() const
{
	return (getMetresPerSecond() / 0.3048);
}

double Speed::getMilesPerHour() const
{
	return (getMetresPerSecond() / 0.44704);
}

double Speed::getMetresPerSecond() const
{
	return (MetresPerSecond);
}

double Speed::getKnots() const
{
	return (getKilometresPerHour() / 1.852);
}

double Speed::getMach() const
{
	return (getMetresPerSecond() / __speed_of_sound);
}

double Speed::getLight() const
{
	return (getMetresPerSecond() / __speed_of_light);
}


///////////////////////////////////////////////////////////////

void Speed::setKilometresPerHour(double x)
{
	setMetresPerSecond(x / 3.6);
}

void Speed::setFeetPerSecond(double x)
{
	setMetresPerSecond(x * 0.3048);
}

void Speed::setMilesPerHour(double x)
{
	setMetresPerSecond(x * 0.44704);
}

void Speed::setMetresPerSecond(double x)
{
	MetresPerSecond = x;
}

void Speed::setKnots(double x)
{
	setKilometresPerHour(x * 1.852);
}

void Speed::setMach(double x)
{
	setMetresPerSecond(x * __speed_of_sound);
}

void Speed::setLight(double x)
{
	setMetresPerSecond(x * __speed_of_light);
}