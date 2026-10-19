#ifndef __SPACE_TRAVEL_H__
#define __SPACE_TRAVEL_H__

#include "..\Library\Decimal.h"

class SpaceTravel
{
public:
	SpaceTravel();

	Decimal getDistanceLightYears() const;
	Decimal getSpeedMetresPerSecond() const;
	Decimal getSpeedKmPerSecond() const;
	Decimal getSpeedLightPercent() const;
	Decimal getTravelTimeYears() const;

	void setDistanceLightYears(Decimal x);
	void setSpeedMetresPerSecond(Decimal x);
	void setSpeedKmPerSecond(Decimal x);
	void setSpeedLightPercent(Decimal x);

private:
	Decimal distance_ly;
	Decimal speed_ms;
};

#endif