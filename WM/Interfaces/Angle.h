#ifndef __ANGLE_H__
#define __ANGLE_H__

#include "..\Library\Decimal.h"

class Angle
{
public:
	Angle(Decimal rad = DEC_LIT(0.0));

	Decimal getGradians() const;
	Decimal getDegrees() const;
	Decimal getRadians() const;
	Decimal getTurns() const;

	void setGradians(Decimal x);
	void setDegrees(Decimal x);
	void setRadians(Decimal x);
	void setTurns(Decimal x);

private:
	Decimal Radians;
};

#endif