#ifndef __STORAGE_H__
#define __STORAGE_H__

#include "Information.h"

class Storage
{
public:
	Storage();

	double getActualGB() const;
	double getActualTB() const;
	double getAdvertisedGB() const;
	double getAdvertisedTB() const;

	void setActualGB(double x);
	void setActualTB(double x);
	void setAdvertisedGB(double x);
	void setAdvertisedTB(double x);

private:
	Information Actual;
};

#endif