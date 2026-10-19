#ifndef __POWER_H__
#define __POWER_H__

#include "..\Library\Decimal.h"

class Power
{
public:
	Power(Decimal W = DEC_LIT(0.0));

	Decimal getBtuPerHour() const;
	Decimal getWatts() const;
	Decimal getKilowatts() const;
	Decimal getHorsepowerMechanical() const;

	void setBtuPerHour(Decimal x);
	void setWatts(Decimal x);
	void setKilowatts(Decimal x);
	void setHorsepowerMechanical(Decimal x);

private:
	Decimal Watts;
};

#endif