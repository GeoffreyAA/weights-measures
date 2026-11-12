#include "stdafx.h"
#include "SpaceTravel.h"
#include "Time.h"

SpaceTravel::SpaceTravel()
{
	distance.setLightYears(DEC_LIT(1.0));
	speed.setLight(DEC_LIT(1.0));
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal SpaceTravel::getDistanceLightYears() const
{
	return distance.getLightYears();
}

Decimal SpaceTravel::getSpeedKilometresPerSecond() const
{
	return speed.getKilometresPerSecond();
}

Decimal SpaceTravel::getSpeedLightPercent() const
{
	return speed.getLight() * DEC_LIT(100.0);
}

Decimal SpaceTravel::getTravelTimeYears() const
{
	Decimal seconds = distance.getMetres() / speed.getMetresPerSecond();

	return Time(seconds).getYearsJulian();
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SpaceTravel::setDistanceLightYears(Decimal x)
{
	distance.setLightYears(x);
}

void SpaceTravel::setSpeedKilometresPerSecond(Decimal x)
{
	speed.setKilometresPerSecond(x);
}

void SpaceTravel::setSpeedLightPercent(Decimal x)
{
	speed.setLight(x / DEC_LIT(100.0));
}