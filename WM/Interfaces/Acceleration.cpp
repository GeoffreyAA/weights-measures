#include "stdafx.h"
#include "Acceleration.h"

DEC_CONST Decimal	GAL_MS2							= DEC_LIT(0.01);
DEC_CONST Decimal	FEET_PER_SECOND_SQUARED_MS2		= DEC_LIT(0.3048);
DEC_CONST Decimal	GFORCE_MS2						= DEC_LIT(9.80665);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Acceleration::Acceleration(Decimal ms2) : MetresPerSecondSquared(ms2)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Acceleration::getGals() const
{
	return getMetresPerSecondSquared() / GAL_MS2;
}

Decimal Acceleration::getFeetPerSecondSquared() const
{
	return getMetresPerSecondSquared() / FEET_PER_SECOND_SQUARED_MS2;
}

Decimal Acceleration::getMetresPerSecondSquared() const
{
	return MetresPerSecondSquared;
}

Decimal Acceleration::getGForce() const
{
	return getMetresPerSecondSquared() / GFORCE_MS2;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Acceleration::setGals(Decimal x)
{
	setMetresPerSecondSquared(x * GAL_MS2);
}

void Acceleration::setFeetPerSecondSquared(Decimal x)
{
	setMetresPerSecondSquared(x * FEET_PER_SECOND_SQUARED_MS2);
}

void Acceleration::setMetresPerSecondSquared(Decimal x)
{
	MetresPerSecondSquared = x;
}

void Acceleration::setGForce(Decimal x)
{
	setMetresPerSecondSquared(x * GFORCE_MS2);
}