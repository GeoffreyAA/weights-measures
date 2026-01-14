#include "stdafx.h"
#include "Conversion.h"

double CentigradeToFahrenheit(double x)
{
	return (x * 9.0 / 5.0 + 32.0);
}

double CentigradeToKelvin(double x)
{
	return (x + 273.15);
}

double FahrenheitToCentigrade(double x)
{
	return ((x - 32.0) * 5.0 / 9.0);
}

double FahrenheitToKelvin(double x)
{
	return (CentigradeToKelvin(FahrenheitToCentigrade(x)));
}

double KelvinToCentigrade(double x)
{
	return (x - 273.15);
}

double KelvinToFahrenheit(double x)
{
	return (CentigradeToFahrenheit(KelvinToCentigrade(x)));
}