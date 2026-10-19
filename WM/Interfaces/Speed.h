#ifndef __SPEED_H__
#define __SPEED_H__

#include "..\Library\Decimal.h"

class Speed
{
public:
	Speed(Decimal ms = DEC_LIT(0.0));

	Decimal getKilometresPerHour() const;
	Decimal getFeetPerSecond() const;
	Decimal getMilesPerHour() const;
	Decimal getMetresPerSecond() const;
	Decimal getKnots() const;
	Decimal getMach() const;
	Decimal getLight() const;

	void setKilometresPerHour(Decimal x);
	void setFeetPerSecond(Decimal x);
	void setMilesPerHour(Decimal x);
	void setMetresPerSecond(Decimal x);
	void setKnots(Decimal x);
	void setMach(Decimal x);
	void setLight(Decimal x);

private:
	Decimal MetresPerSecond;
};

#endif