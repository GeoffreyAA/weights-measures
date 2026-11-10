#include "stdafx.h"
#include "Force.h"

DEC_CONST Decimal	DYNE_N				= DEC_LIT(0.00001);
DEC_CONST Decimal	POUNDAL_N			= DEC_LIT(0.138254954376);
DEC_CONST Decimal	POUND_FORCE_N		= DEC_LIT(4.4482216152605);
DEC_CONST Decimal	KILOGRAM_FORCE_N	= DEC_LIT(9.80665);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Force::Force(Decimal N) : Newtons(N)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Force::getDynes() const
{
	return getNewtons() / DYNE_N;
}

Decimal Force::getPoundals() const
{
	return getNewtons() / POUNDAL_N;
}

Decimal Force::getNewtons() const
{
	return Newtons;
}

Decimal Force::getPoundForce() const
{
	return getNewtons() / POUND_FORCE_N;
}

Decimal Force::getKilogramForce() const
{
	return getNewtons() / KILOGRAM_FORCE_N;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Force::setDynes(Decimal x)
{
	setNewtons(x * DYNE_N);
}

void Force::setPoundals(Decimal x)
{
	setNewtons(x * POUNDAL_N);
}

void Force::setNewtons(Decimal x)
{
	Newtons = x;
}

void Force::setPoundForce(Decimal x)
{
	setNewtons(x * POUND_FORCE_N);
}

void Force::setKilogramForce(Decimal x)
{
	setNewtons(x * KILOGRAM_FORCE_N);
}