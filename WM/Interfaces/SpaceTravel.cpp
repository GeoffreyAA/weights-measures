#include "stdafx.h"
#include "SpaceTravel.h"
#include "Time.h"

DEC_CONST Decimal	KILOMETRES_PER_SECOND_MS	= DEC_LIT(1000.0);
DEC_CONST Decimal	SPEED_OF_LIGHT_MS			= DEC_LIT(299792458.0);
DEC_CONST Decimal	LIGHT_YEAR_M				= DEC_LIT(9460730472580800.0);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SpaceTravel::SpaceTravel() : DistanceLY(DEC_LIT(1.0)),
							 SpeedMS(SPEED_OF_LIGHT_MS)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal SpaceTravel::getDistanceLightYears() const
{
	return DistanceLY;
}

Decimal SpaceTravel::getSpeedMetresPerSecond() const
{
	return SpeedMS;
}

Decimal SpaceTravel::getSpeedKilometresPerSecond() const
{
	return SpeedMS / KILOMETRES_PER_SECOND_MS;
}

Decimal SpaceTravel::getSpeedLightPercent() const
{
	return (SpeedMS / SPEED_OF_LIGHT_MS) * DEC_LIT(100.0);
}

Decimal SpaceTravel::getTravelTimeYears() const
{
	Decimal seconds = (DistanceLY * LIGHT_YEAR_M) / SpeedMS;

	return Time(seconds).getYearsJulian();
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SpaceTravel::setDistanceLightYears(Decimal x)
{
	DistanceLY = x;
}

void SpaceTravel::setSpeedMetresPerSecond(Decimal x)
{
	SpeedMS = x;
}

void SpaceTravel::setSpeedKilometresPerSecond(Decimal x)
{
	SpeedMS = x * KILOMETRES_PER_SECOND_MS;
}

void SpaceTravel::setSpeedLightPercent(Decimal x)
{
	SpeedMS = (x * SPEED_OF_LIGHT_MS) / DEC_LIT(100.0);
}