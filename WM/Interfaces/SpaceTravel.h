#ifndef __SPACE_TRAVEL_H__
#define __SPACE_TRAVEL_H__

class SpaceTravel
{
public:
	SpaceTravel();

	double getDistanceLightYears() const;
	double getSpeedMetresPerSecond() const;
	double getSpeedKmPerSecond() const;
	double getSpeedLightPercent() const;
	double getTravelTimeYears() const;

	void setDistanceLightYears(double x);
	void setSpeedMetresPerSecond(double x);
	void setSpeedKmPerSecond(double x);
	void setSpeedLightPercent(double x);

private:
	double distance_ly;
	double speed_ms;
};

#endif