#ifndef __ENERGY_H__
#define __ENERGY_H__

#include "..\Library\Decimal.h"

class Energy
{
public:
	Energy(Decimal J = DEC_LIT(0.0));

	Decimal getBtuISO() const;
	Decimal getCalories() const;
	Decimal getJoules() const;
	Decimal getKilojoules() const;
	Decimal getFootPoundForce() const;
	Decimal getKilowattHours() const;
	Decimal getErgs() const;
	Decimal getElectronvolts() const;

	void setBtuISO(Decimal x);
	void setCalories(Decimal x);
	void setJoules(Decimal x);
	void setKilojoules(Decimal x);
	void setFootPoundForce(Decimal x);
	void setKilowattHours(Decimal x);
	void setErgs(Decimal x);
	void setElectronvolts(Decimal x);

private:
	Decimal Joules;
};

#endif