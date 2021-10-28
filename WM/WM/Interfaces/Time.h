#ifndef __TIME_H__
#define __TIME_H__

class Time
{
public:
	Time(double s = 0.0);

	double getSeconds() const;
	double getMinutes() const;
	double getHours() const;
	double getDays() const;
	double getWeeks() const;
	double getMonths() const;
	double getYears() const;

	void setSeconds(double x);
	void setMinutes(double x);
	void setHours(double x);
	void setDays(double x);
	void setWeeks(double x);
	void setMonths(double x);
	void setYears(double x);

private:
	double Seconds;
};

#endif