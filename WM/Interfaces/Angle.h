#ifndef __ANGLE_H__
#define __ANGLE_H__

class Angle
{
public:
	Angle(double rad = 0.0);

	double getGradians() const;
	double getDegrees() const;
	double getRadians() const;
	double getTurns() const;

	void setGradians(double x);
	void setDegrees(double x);
	void setRadians(double x);
	void setTurns(double x);

private:
	double Radians;
};

#endif