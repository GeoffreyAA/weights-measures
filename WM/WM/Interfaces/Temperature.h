#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

class Temperature
{
public:
	Temperature(double c = 0.0);

	double getCentigrade() const;
	double getFahrenheit() const;
	double getKelvin() const;

	void setCentigrade(double x);
	void setFahrenheit(double x);
	void setKelvin(double x);

private:
	double Centigrade;
};

#endif