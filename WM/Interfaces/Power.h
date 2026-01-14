#ifndef __POWER_H__
#define __POWER_H__

class Power
{
public:
	Power(double W = 0.0);

	double getBtuPerHour() const;
	double getWatts() const;
	double getKilowatts() const;
	double getHorsepowerMechanical() const;

	void setBtuPerHour(double x);
	void setWatts(double x);
	void setKilowatts(double x);
	void setHorsepowerMechanical(double x);

private:
	double Watts;
};

#endif