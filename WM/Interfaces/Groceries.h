#ifndef __GROCERIES_H__
#define __GROCERIES_H__

#include "..\Library\Decimal.h"
#include "Mass.h"

class Groceries
{
public:
	Groceries();

	Decimal getPrice() const;
	Decimal getKilograms() const;
	Decimal getGrams() const;
	Decimal getPricePerKilogram() const;

	void setPrice(Decimal x);
	void setKilograms(Decimal x);
	void setGrams(Decimal x);

private:
	Decimal Price;
	Mass Weight;
};

#endif