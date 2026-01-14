#include "stdafx.h"
#include "Angle.h"

const double PI = 3.1415926535897932384626433832795;


///////////////////////////////////////////////////////////////

Angle::Angle(double rad) : Radians(rad)
{
}


///////////////////////////////////////////////////////////////

double Angle::getGradians() const
{
	return (getRadians() * 200.0 / PI);
}

double Angle::getDegrees() const
{
	return (getRadians() * 180.0 / PI);
}

double Angle::getRadians() const
{
	return (Radians);
}

double Angle::getTurns() const
{
	return (getRadians() / (2.0 * PI));
}


///////////////////////////////////////////////////////////////

void Angle::setGradians(double x)
{
	setRadians(x * PI / 200.0);
}

void Angle::setDegrees(double x)
{
	setRadians(x * PI / 180.0);
}

void Angle::setRadians(double x)
{
	Radians = x;
}

void Angle::setTurns(double x)
{
	setRadians(x * 2.0 * PI);
}