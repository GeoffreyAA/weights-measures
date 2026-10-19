#ifndef __TIME_H__
#define __TIME_H__

#include "..\Library\Decimal.h"

class Time
{
public:
	Time(Decimal s = DEC_LIT(0.0));

	Decimal getMilliseconds() const;
	Decimal getSeconds() const;
	Decimal getMinutes() const;
	Decimal getHours() const;
	Decimal getDays() const;
	Decimal getWeeks() const;
	Decimal getMonths() const;
	Decimal getYears() const;

	void setMilliseconds(Decimal x);
	void setSeconds(Decimal x);
	void setMinutes(Decimal x);
	void setHours(Decimal x);
	void setDays(Decimal x);
	void setWeeks(Decimal x);
	void setMonths(Decimal x);
	void setYears(Decimal x);

private:
	Decimal Seconds;
};

#endif