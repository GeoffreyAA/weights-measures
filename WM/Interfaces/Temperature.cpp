#include "stdafx.h"
#include "Temperature.h"

Temperature::Temperature(double K) : Kelvin(K)
{
}

double Temperature::getCelsius() const
{
	return getKelvin() - 273.15;
}

double Temperature::getKelvin() const
{
	return Kelvin;
}

double Temperature::getFahrenheit() const
{
	return getKelvin() * 9.0 / 5.0 - 459.67;
}

double Temperature::getRankine() const
{
	return getKelvin() * 9.0 / 5.0;
}

void Temperature::setCelsius(double x)
{
	setKelvin(x + 273.15);
}

void Temperature::setKelvin(double x)
{
	Kelvin = x;
}

void Temperature::setFahrenheit(double x)
{
	setKelvin((x + 459.67) * 5.0 / 9.0);
}

void Temperature::setRankine(double x)
{
	setKelvin(x * 5.0 / 9.0);
}