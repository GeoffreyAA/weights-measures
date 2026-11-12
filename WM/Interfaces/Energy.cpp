#include "stdafx.h"
#include "Energy.h"

DEC_CONST Decimal	BTU_J				= DEC_LIT(1055.05585262);	// International Table
DEC_CONST Decimal	CALORIE_J			= DEC_LIT(4.184);
DEC_CONST Decimal	KILOJOULE_J			= DEC_LIT(1000.0);
DEC_CONST Decimal	FOOT_POUND_FORCE_J	= DEC_LIT(1.3558179483314004);
DEC_CONST Decimal	KILOWATT_HOUR_J		= DEC_LIT(3600000.0);
DEC_CONST Decimal	ERG_J				= DEC_LIT(0.0000001);
DEC_CONST Decimal	ELECTRONVOLT_J		= DEC_LIT(0.0000000000000000001602176634);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Energy::Energy(Decimal J) : Joules(J)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Energy::getBtu() const
{
	return getJoules() / BTU_J;
}

Decimal Energy::getCalories() const
{
	return getJoules() / CALORIE_J;
}

Decimal Energy::getJoules() const
{
	return Joules;
}

Decimal Energy::getKilojoules() const
{
	return getJoules() / KILOJOULE_J;
}

Decimal Energy::getFootPoundForce() const
{
	return getJoules() / FOOT_POUND_FORCE_J;
}

Decimal Energy::getKilowattHours() const
{
	return getJoules() / KILOWATT_HOUR_J;
}

Decimal Energy::getErgs() const
{
	return getJoules() / ERG_J;
}

Decimal Energy::getElectronvolts() const
{
	return getJoules() / ELECTRONVOLT_J;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Energy::setBtu(Decimal x)
{
	setJoules(x * BTU_J);
}

void Energy::setCalories(Decimal x)
{
	setJoules(x * CALORIE_J);
}

void Energy::setJoules(Decimal x)
{
	Joules = x;
}

void Energy::setKilojoules(Decimal x)
{
	setJoules(x * KILOJOULE_J);
}

void Energy::setFootPoundForce(Decimal x)
{
	setJoules(x * FOOT_POUND_FORCE_J);
}

void Energy::setKilowattHours(Decimal x)
{
	setJoules(x * KILOWATT_HOUR_J);
}

void Energy::setErgs(Decimal x)
{
	setJoules(x * ERG_J);
}

void Energy::setElectronvolts(Decimal x)
{
	setJoules(x * ELECTRONVOLT_J);
}