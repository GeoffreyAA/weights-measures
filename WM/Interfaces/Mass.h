#ifndef __MASS_H__
#define __MASS_H__

#include "..\Library\Decimal.h"

class Mass
{
public:
	Mass(Decimal g = DEC_LIT(0.0));

	Decimal getGrams() const;
	Decimal getOunces() const;
	Decimal getPounds() const;
	Decimal getKilograms() const;
	Decimal getStone() const;
	Decimal getTonnes() const;
	Decimal getTons() const;

	void setGrams(Decimal x);
	void setOunces(Decimal x);
	void setPounds(Decimal x);
	void setKilograms(Decimal x);
	void setStone(Decimal x);
	void setTonnes(Decimal x);
	void setTons(Decimal x);

private:
	Decimal Grams;
};

#endif