#ifndef __DATA_RATE_H__
#define __DATA_RATE_H__

#include "..\Library\Decimal.h"
#include "Information.h"

class DataRate
{
public:
	DataRate(Decimal BitsPerSecond = DEC_LIT(0.0));

	Decimal getBitsPerSecond() const;
	Decimal getKilobitsPerSecond() const;
	Decimal getMegabitsPerSecond() const;
	Decimal getGigabitsPerSecond() const;
	Decimal getBytesPerSecond() const;
	Decimal getKilobytesPerSecond() const;
	Decimal getMegabytesPerSecond() const;
	Decimal getGigabytesPerSecond() const;

	void setBitsPerSecond(Decimal x);
	void setKilobitsPerSecond(Decimal x);
	void setMegabitsPerSecond(Decimal x);
	void setGigabitsPerSecond(Decimal x);
	void setBytesPerSecond(Decimal x);
	void setKilobytesPerSecond(Decimal x);
	void setMegabytesPerSecond(Decimal x);
	void setGigabytesPerSecond(Decimal x);

private:
	Information bps;
};

#endif