#ifndef __SPEED_H__
#define __SPEED_H__

class Speed
{
public:
	Speed(double ms = 0.0);

	double getKilometresPerHour() const;
	double getFeetPerSecond() const;
	double getMilesPerHour() const;
	double getMetresPerSecond() const;
	double getKnots() const;
	double getMach() const;
	double getLight() const;

	void setKilometresPerHour(double x);
	void setFeetPerSecond(double x);
	void setMilesPerHour(double x);
	void setMetresPerSecond(double x);
	void setKnots(double x);
	void setMach(double x);
	void setLight(double x);

private:
	double MetresPerSecond;
};

#endif