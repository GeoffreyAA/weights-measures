#ifndef __STORAGE_H__
#define __STORAGE_H__

#include "..\Library\Decimal.h"
#include "Information.h"

class Storage
{
public:
	Storage();

	Decimal getActualGB() const;
	Decimal getActualTB() const;
	Decimal getAdvertisedGB() const;
	Decimal getAdvertisedTB() const;

	void setActualGB(Decimal x);
	void setActualTB(Decimal x);
	void setAdvertisedGB(Decimal x);
	void setAdvertisedTB(Decimal x);

private:
	Information Actual;
};

#endif