#ifndef __MASS_H__
#define __MASS_H__

#include "..\Library\Decimal.h"
#include "Metric.h"

class Mass
{
public:
	Mass(Decimal g = DEC_LIT(0.0));

	Decimal getMilligrams() const;
	Decimal getGrams() const;
	Decimal getOunces() const;
	Decimal getPounds() const;
	Decimal getKilograms() const;
	Decimal getStone() const;
	Decimal getShortTons() const;
	Decimal getTonnes() const;
	Decimal getLongTons() const;

	void setMilligrams(Decimal x);
	void setGrams(Decimal x);
	void setOunces(Decimal x);
	void setPounds(Decimal x);
	void setKilograms(Decimal x);
	void setStone(Decimal x);
	void setShortTons(Decimal x);
	void setTonnes(Decimal x);
	void setLongTons(Decimal x);

private:
	Metric Grams;
};

#endif