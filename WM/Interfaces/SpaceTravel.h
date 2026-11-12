#ifndef __SPACE_TRAVEL_H__
#define __SPACE_TRAVEL_H__

#include "..\Library\Decimal.h"
#include "Length.h"
#include "Speed.h"

class SpaceTravel
{
public:
	SpaceTravel();

	Decimal getDistanceLightYears() const;
	Decimal getSpeedKilometresPerSecond() const;
	Decimal getSpeedLightPercent() const;
	Decimal getTravelTimeYears() const;

	void setDistanceLightYears(Decimal x);
	void setSpeedKilometresPerSecond(Decimal x);
	void setSpeedLightPercent(Decimal x);

private:
	Length distance;
	Speed speed;
};

#endif