#ifndef __TORQUE_H__
#define __TORQUE_H__

#include "..\Library\Decimal.h"

class Torque
{
public:
	Torque(Decimal Nm = DEC_LIT(0.0));

	Decimal getPoundForceInches() const;
	Decimal getNewtonMetres() const;
	Decimal getPoundForceFeet() const;
	Decimal getKilogramForceMetres() const;

	void setPoundForceInches(Decimal x);
	void setNewtonMetres(Decimal x);
	void setPoundForceFeet(Decimal x);
	void setKilogramForceMetres(Decimal x);

private:
	Decimal NewtonMetres;
};

#endif