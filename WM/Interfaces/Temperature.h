#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

#include "..\Library\Decimal.h"

class Temperature
{
public:
	Temperature(Decimal K = DEC_LIT(273.15));

	Decimal getCelsius() const;
	Decimal getKelvin() const;
	Decimal getFahrenheit() const;
	Decimal getRankine() const;

	void setCelsius(Decimal x);
	void setKelvin(Decimal x);
	void setFahrenheit(Decimal x);
	void setRankine(Decimal x);

private:
	Decimal Kelvin;
};

#endif