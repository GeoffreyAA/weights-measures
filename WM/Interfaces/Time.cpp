#include "stdafx.h"
#include "Time.h"

Time::Time(Decimal s) : Seconds(s)
{
}

Decimal Time::getMilliseconds() const
{
	return getSeconds() / DEC_LIT(0.001);
}

Decimal Time::getSeconds() const
{
	return Seconds;
}

Decimal Time::getMinutes() const
{
	return getSeconds() / DEC_LIT(60.0);
}

Decimal Time::getHours() const
{
	return getMinutes() / DEC_LIT(60.0);
}

Decimal Time::getDays() const
{
	return getHours() / DEC_LIT(24.0);
}

Decimal Time::getWeeks() const
{
	return getDays() / DEC_LIT(7.0);
}

Decimal Time::getMonths() const
{
	return getDays() / DEC_LIT(30.0);
}

Decimal Time::getYears() const
{
	return getDays() / DEC_LIT(365.25);
}

void Time::setMilliseconds(Decimal x)
{
	setSeconds(x * DEC_LIT(0.001));
}

void Time::setSeconds(Decimal x)
{
	Seconds = x;
}

void Time::setMinutes(Decimal x)
{
	setSeconds(x * DEC_LIT(60.0));
}

void Time::setHours(Decimal x)
{
	setMinutes(x * DEC_LIT(60.0));
}

void Time::setDays(Decimal x)
{
	setHours(x * DEC_LIT(24.0));
}

void Time::setWeeks(Decimal x)
{
	setDays(x * DEC_LIT(7.0));
}

void Time::setMonths(Decimal x)
{
	setDays(x * DEC_LIT(30.0));
}

void Time::setYears(Decimal x)
{
	setDays(x * DEC_LIT(365.25));
}