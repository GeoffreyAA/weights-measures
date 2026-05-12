#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

class Temperature
{
public:
	Temperature(double K = 0.0);

	double getCelsius() const;
	double getKelvin() const;
	double getFahrenheit() const;
	double getRankine() const;

	void setCelsius(double x);
	void setKelvin(double x);
	void setFahrenheit(double x);
	void setRankine(double x);

private:
	double Kelvin;
};

#endif