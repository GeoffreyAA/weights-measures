#include "stdafx.h"
#include "Angle.h"

const Decimal PI = DEC_LIT(3.1415926535897932384626433832795);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Angle::Angle(Decimal rad) : Radians(rad)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Angle::getGradians() const
{
	return getRadians() * DEC_LIT(200.0) / PI;
}

Decimal Angle::getDegrees() const
{
	return getRadians() * DEC_LIT(180.0) / PI;
}

Decimal Angle::getRadians() const
{
	return Radians;
}

Decimal Angle::getTurns() const
{
	return getRadians() / (DEC_LIT(2.0) * PI);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Angle::setGradians(Decimal x)
{
	setRadians(x * PI / DEC_LIT(200.0));
}

void Angle::setDegrees(Decimal x)
{
	setRadians(x * PI / DEC_LIT(180.0));
}

void Angle::setRadians(Decimal x)
{
	Radians = x;
}

void Angle::setTurns(Decimal x)
{
	setRadians(x * DEC_LIT(2.0) * PI);
}