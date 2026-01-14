#include "stdafx.h"
#include "Temperature.h"
#include "Conversion.h"

Temperature::Temperature(double c) : Centigrade(c)
{
}

double Temperature::getCentigrade() const
{
	return (Centigrade);
}

double Temperature::getFahrenheit() const
{
	return (CentigradeToFahrenheit(getCentigrade()));
}

double Temperature::getKelvin() const
{
	return (CentigradeToKelvin(getCentigrade()));
}

void Temperature::setCentigrade(double x)
{
	Centigrade = x;
}

void Temperature::setFahrenheit(double x)
{
	setCentigrade(FahrenheitToCentigrade(x));
}

void Temperature::setKelvin(double x)
{
	setCentigrade(KelvinToCentigrade(x));
}