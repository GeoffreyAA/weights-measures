#include "stdafx.h"
#include "SpaceTravel.h"

const Decimal SPEED_OF_LIGHT_MS	= DEC_LIT(299792458.0);
const Decimal LIGHT_YEAR_METRES	= DEC_LIT(9460730472580800.0);
const Decimal DAY_SECONDS		= DEC_LIT(86400.0);
const Decimal DAY_JULIAN		= DEC_LIT(365.25);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SpaceTravel::SpaceTravel() : distance_ly(DEC_LIT(1.0)), speed_ms(SPEED_OF_LIGHT_MS)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal SpaceTravel::getDistanceLightYears() const
{
	return distance_ly;
}

Decimal SpaceTravel::getSpeedMetresPerSecond() const
{
	return speed_ms;
}

Decimal SpaceTravel::getSpeedKmPerSecond() const
{
	return speed_ms / DEC_LIT(1000.0);
}

Decimal SpaceTravel::getSpeedLightPercent() const
{
	return (speed_ms / SPEED_OF_LIGHT_MS) * DEC_LIT(100.0);
}

Decimal SpaceTravel::getTravelTimeYears() const
{
	Decimal seconds = (distance_ly * LIGHT_YEAR_METRES) / speed_ms;

	return seconds / DAY_SECONDS / DAY_JULIAN;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SpaceTravel::setDistanceLightYears(Decimal x)
{
	distance_ly = x;
}

void SpaceTravel::setSpeedMetresPerSecond(Decimal x)
{
	speed_ms = x;
}

void SpaceTravel::setSpeedKmPerSecond(Decimal x)
{
	speed_ms = x * DEC_LIT(1000.0);
}

void SpaceTravel::setSpeedLightPercent(Decimal x)
{
	speed_ms = (x * SPEED_OF_LIGHT_MS) / DEC_LIT(100.0);
}