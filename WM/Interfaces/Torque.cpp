#include "stdafx.h"
#include "Torque.h"

DEC_CONST Decimal	POUND_FORCE_INCH_NM			= DEC_LIT(0.1129848290276167);
DEC_CONST Decimal	POUND_FORCE_FEET_NM			= DEC_LIT(1.3558179483314004);
DEC_CONST Decimal	KILOGRAM_FORCE_METRES_NM	= DEC_LIT(9.80665);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Torque::Torque(Decimal Nm) : NewtonMetres(Nm)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Torque::getPoundForceInches() const
{
	return getNewtonMetres() / POUND_FORCE_INCH_NM;
}

Decimal Torque::getNewtonMetres() const
{
	return NewtonMetres;
}

Decimal Torque::getPoundForceFeet() const
{
	return getNewtonMetres() / POUND_FORCE_FEET_NM;
}

Decimal Torque::getKilogramForceMetres() const
{
	return getNewtonMetres() / KILOGRAM_FORCE_METRES_NM;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Torque::setPoundForceInches(Decimal x)
{
	setNewtonMetres(x * POUND_FORCE_INCH_NM);
}

void Torque::setNewtonMetres(Decimal x)
{
	NewtonMetres = x;
}

void Torque::setPoundForceFeet(Decimal x)
{
	setNewtonMetres(x * POUND_FORCE_FEET_NM);
}

void Torque::setKilogramForceMetres(Decimal x)
{
	setNewtonMetres(x * KILOGRAM_FORCE_METRES_NM);
}