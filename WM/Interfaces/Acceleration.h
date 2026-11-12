#ifndef __ACCELERATION_H__
#define __ACCELERATION_H__

#include "..\Library\Decimal.h"

class Acceleration
{
public:
	Acceleration(Decimal ms2 = DEC_LIT(0.0));

	Decimal getCentimetresPerSecondSquared() const;
	Decimal getFeetPerSecondSquared() const;
	Decimal getMetresPerSecondSquared() const;
	Decimal getGForce() const;

	void setCentimetresPerSecondSquared(Decimal x);
	void setFeetPerSecondSquared(Decimal x);
	void setMetresPerSecondSquared(Decimal x);
	void setGForce(Decimal x);

private:
	Decimal MetresPerSecondSquared;
};

#endif