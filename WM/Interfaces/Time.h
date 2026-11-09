#ifndef __TIME_H__
#define __TIME_H__

#include "..\Library\Decimal.h"
#include "Metric.h"

class Time
{
public:
	Time(Decimal s = DEC_LIT(0.0));

	Decimal getNanoseconds() const;
	Decimal getMilliseconds() const;
	Decimal getSeconds() const;
	Decimal getMinutes() const;
	Decimal getHours() const;
	Decimal getDays() const;
	Decimal getWeeks() const;
	Decimal getMonths() const;
	Decimal getYearsGregorian() const;
	Decimal getYearsJulian() const;

	void setNanoseconds(Decimal x);
	void setMilliseconds(Decimal x);
	void setSeconds(Decimal x);
	void setMinutes(Decimal x);
	void setHours(Decimal x);
	void setDays(Decimal x);
	void setWeeks(Decimal x);
	void setMonths(Decimal x);
	void setYearsGregorian(Decimal x);
	void setYearsJulian(Decimal x);

private:
	Metric Seconds;
};

#endif