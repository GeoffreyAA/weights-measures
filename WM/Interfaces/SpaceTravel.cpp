#include "stdafx.h"
#include "SpaceTravel.h"

const double SPEED_OF_LIGHT_MS = 299792458;
const double LIGHT_YEAR_METRES = 9460730472580800;
const double DAY_SECONDS = 86400;
const double DAY_JULIAN = 365.25;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SpaceTravel::SpaceTravel() : distance_ly(4.25), speed_ms(17000)	/* Proxima Centauri and Voyager 1 */
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double SpaceTravel::getDistanceLightYears() const
{
	return distance_ly;
}

double SpaceTravel::getSpeedMetresPerSecond() const
{
	return speed_ms;
}

double SpaceTravel::getSpeedKmPerSecond() const
{
	return speed_ms / 1000.0;
}

double SpaceTravel::getSpeedLightPercent() const
{
	return (speed_ms / SPEED_OF_LIGHT_MS) * 100.0;
}

double SpaceTravel::getTravelTimeYears() const
{
	double seconds = (distance_ly * LIGHT_YEAR_METRES) / speed_ms;

	return seconds / DAY_SECONDS / DAY_JULIAN;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SpaceTravel::setDistanceLightYears(double x)
{
	distance_ly = x;
}

void SpaceTravel::setSpeedMetresPerSecond(double x)
{
	speed_ms = x;
}

void SpaceTravel::setSpeedKmPerSecond(double x)
{
	speed_ms = x * 1000.0;
}

void SpaceTravel::setSpeedLightPercent(double x)
{
	speed_ms = (x * SPEED_OF_LIGHT_MS) / 100.0;
}