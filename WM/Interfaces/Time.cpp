#include "stdafx.h"
#include "Time.h"

DEC_CONST Decimal	MINUTE_SEC				= DEC_LIT(60.0);
DEC_CONST Decimal	HOUR_SEC				= DEC_LIT(3600.0);
DEC_CONST Decimal	DAY_SEC					= DEC_LIT(86400.0);
DEC_CONST Decimal	WEEK_DAYS				= DEC_LIT(7.0);
DEC_CONST Decimal	MONTH_DAYS				= DEC_LIT(30.0);
DEC_CONST Decimal	YEAR_JULIAN_DAYS		= DEC_LIT(365.25);
DEC_CONST Decimal	YEAR_GREGORIAN_DAYS		= DEC_LIT(365.2425);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Time::Time(Decimal s) : Seconds(s)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Time::getNanoseconds() const
{
	return Seconds.getNano();
}

Decimal Time::getMilliseconds() const
{
	return Seconds.getMilli();
}

Decimal Time::getSeconds() const
{
	return Seconds.getBase();
}

Decimal Time::getMinutes() const
{
	return getSeconds() / MINUTE_SEC;
}

Decimal Time::getHours() const
{
	return getSeconds() / HOUR_SEC;
}

Decimal Time::getDays() const
{
	return getSeconds() / DAY_SEC;
}

Decimal Time::getWeeks() const
{
	return getDays() / WEEK_DAYS;
}

Decimal Time::getMonths() const
{
	return getDays() / MONTH_DAYS;
}

Decimal Time::getYearsJulian() const
{
	return getDays() / YEAR_JULIAN_DAYS;
}

Decimal Time::getYearsGregorian() const
{
	return getDays() / YEAR_GREGORIAN_DAYS;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Time::setNanoseconds(Decimal x)
{
	Seconds.setNano(x);
}

void Time::setMilliseconds(Decimal x)
{
	Seconds.setMilli(x);
}

void Time::setSeconds(Decimal x)
{
	Seconds.setBase(x);
}

void Time::setMinutes(Decimal x)
{
	setSeconds(x * MINUTE_SEC);
}

void Time::setHours(Decimal x)
{
	setSeconds(x * HOUR_SEC);
}

void Time::setDays(Decimal x)
{
	setSeconds(x * DAY_SEC);
}

void Time::setWeeks(Decimal x)
{
	setDays(x * WEEK_DAYS);
}

void Time::setMonths(Decimal x)
{
	setDays(x * MONTH_DAYS);
}

void Time::setYearsJulian(Decimal x)
{
	setDays(x * YEAR_JULIAN_DAYS);
}

void Time::setYearsGregorian(Decimal x)
{
	setDays(x * YEAR_GREGORIAN_DAYS);
}