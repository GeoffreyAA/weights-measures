#include "stdafx.h"
#include "Energy.h"

Energy::Energy(Decimal J) : Joules(J)
{
}


///////////////////////////////////////////////////////////////

Decimal Energy::getBtuISO() const
{
	return getJoules() / DEC_LIT(1054.5);
}

Decimal Energy::getCalories() const
{
	return getJoules() / DEC_LIT(4.184);
}

Decimal Energy::getJoules() const
{
	return Joules;
}

Decimal Energy::getKilojoules() const
{
	return getJoules() / DEC_LIT(1000.0);
}

Decimal Energy::getFootPoundForce() const
{
	return getJoules() / DEC_LIT(1.3558179483314004);
}

Decimal Energy::getKilowattHours() const
{
	return getJoules() / DEC_LIT(3600000.0);
}

Decimal Energy::getErgs() const
{
	return getJoules() / DEC_LIT(0.0000001);
}

Decimal Energy::getElectronvolts() const
{
	return getJoules() / DEC_LIT(0.0000000000000000001602176634);
}


///////////////////////////////////////////////////////////////

void Energy::setBtuISO(Decimal x)
{
	setJoules(x * DEC_LIT(1054.5));
}

void Energy::setCalories(Decimal x)
{
	setJoules(x * DEC_LIT(4.184));
}

void Energy::setJoules(Decimal x)
{
	Joules = x;
}

void Energy::setKilojoules(Decimal x)
{
	setJoules(x * DEC_LIT(1000.0));
}

void Energy::setFootPoundForce(Decimal x)
{
	setJoules(x * DEC_LIT(1.3558179483314004));
}

void Energy::setKilowattHours(Decimal x)
{
	setJoules(x * DEC_LIT(3600000.0));
}

void Energy::setErgs(Decimal x)
{
	setJoules(x * DEC_LIT(0.0000001));
}

void Energy::setElectronvolts(Decimal x)
{
	setJoules(x * DEC_LIT(0.0000000000000000001602176634));
}