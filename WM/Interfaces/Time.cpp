#include "stdafx.h"
#include "Time.h"

Time::Time(double s) : Seconds(s)
{
}

double Time::getMilliseconds() const
{
	return (getSeconds() / 0.001);
}

double Time::getSeconds() const
{
	return (Seconds);
}

double Time::getMinutes() const
{
	return (getSeconds() / 60.0);
}

double Time::getHours() const
{
	return (getMinutes() / 60.0);
}

double Time::getDays() const
{
	return (getHours() / 24.0);
}

double Time::getWeeks() const
{
	return (getDays() / 7.0);
}

double Time::getMonths() const
{
	return (getDays() / 30.0);
}

double Time::getYears() const
{
	return (getDays() / 365.25);
}

void Time::setMilliseconds(double x)
{
	setSeconds(x * 0.001);
}

void Time::setSeconds(double x)
{
	Seconds = x;
}

void Time::setMinutes(double x)
{
	setSeconds(x * 60.0);
}

void Time::setHours(double x)
{
	setMinutes(x * 60.0);
}

void Time::setDays(double x)
{
	setHours(x * 24.0);
}

void Time::setWeeks(double x)
{
	setDays(x * 7.0);
}

void Time::setMonths(double x)
{
	setDays(x * 30.0);
}

void Time::setYears(double x)
{
	setDays(x * 365.25);
}