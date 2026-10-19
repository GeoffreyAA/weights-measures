#include "stdafx.h"
#include "Temperature.h"

// Reference: https://en.wikipedia.org/wiki/Conversion_of_scales_of_temperature

Temperature::Temperature(Decimal K) : Kelvin(K)
{
}

Decimal Temperature::getCelsius() const
{
	return getKelvin() - DEC_LIT(273.15);
}

Decimal Temperature::getKelvin() const
{
	return Kelvin;
}

Decimal Temperature::getFahrenheit() const
{
	return getKelvin() * DEC_LIT(9.0) / DEC_LIT(5.0) - DEC_LIT(459.67);
}

Decimal Temperature::getRankine() const
{
	return getKelvin() * DEC_LIT(9.0) / DEC_LIT(5.0);
}

void Temperature::setCelsius(Decimal x)
{
	setKelvin(x + DEC_LIT(273.15));
}

void Temperature::setKelvin(Decimal x)
{
	Kelvin = x;
}

void Temperature::setFahrenheit(Decimal x)
{
	setKelvin((x + DEC_LIT(459.67)) * DEC_LIT(5.0) / DEC_LIT(9.0));
}

void Temperature::setRankine(Decimal x)
{
	setKelvin(x * DEC_LIT(5.0) / DEC_LIT(9.0));
}