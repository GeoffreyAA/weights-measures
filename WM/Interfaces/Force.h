#ifndef __FORCE_H__
#define __FORCE_H__

#include "..\Library\Decimal.h"

class Force
{
public:
	Force(Decimal N = DEC_LIT(0.0));

	Decimal getDynes() const;
	Decimal getPoundals() const;
	Decimal getNewtons() const;
	Decimal getPoundForce() const;
	Decimal getKilogramForce() const;

	void setDynes(Decimal x);
	void setPoundals(Decimal x);
	void setNewtons(Decimal x);
	void setPoundForce(Decimal x);
	void setKilogramForce(Decimal x);

private:
	Decimal Newtons;
};

#endif