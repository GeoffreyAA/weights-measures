#ifndef __DATA_RATE_H__
#define __DATA_RATE_H__

#include "Information.h"

class DataRate
{
public:
	DataRate(double BitsPerSecond = 0.0);

	double getBitsPerSecond() const;
	double getKilobitsPerSecond() const;
	double getMegabitsPerSecond() const;
	double getGigabitsPerSecond() const;
	double getBytesPerSecond() const;
	double getKilobytesPerSecond() const;
	double getMegabytesPerSecond() const;
	double getGigabytesPerSecond() const;

	void setBitsPerSecond(double x);
	void setKilobitsPerSecond(double x);
	void setMegabitsPerSecond(double x);
	void setGigabitsPerSecond(double x);
	void setBytesPerSecond(double x);
	void setKilobytesPerSecond(double x);
	void setMegabytesPerSecond(double x);
	void setGigabytesPerSecond(double x);

private:
	Information bps;
};

#endif