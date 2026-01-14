#include "stdafx.h"
#include "Energy.h"

Energy::Energy(double J) : Joules(J)
{
}


///////////////////////////////////////////////////////////////

double Energy::getBtuISO() const
{
	return (getJoules() / 1054.5);
}

double Energy::getCalories() const
{
	return (getJoules() / 4.184);
}

double Energy::getJoules() const
{
	return (Joules);
}

double Energy::getKilojoules() const
{
	return (getJoules() / 1000.0);
}

double Energy::getFootPoundForce() const
{
	return (getJoules() / 1.3558179483314004);
}

double Energy::getKilowattHours() const
{
	return (getJoules() / 3600000.0);
}

double Energy::getErgs() const
{
	return (getJoules() / 0.0000001);
}

double Energy::getElectronvolts() const
{
	return (getJoules() / 0.0000000000000000001602176634);
}


///////////////////////////////////////////////////////////////

void Energy::setBtuISO(double x)
{
	setJoules(x * 1054.5);
}

void Energy::setCalories(double x)
{
	setJoules(x * 4.184);
}

void Energy::setJoules(double x)
{
	Joules = x;
}

void Energy::setKilojoules(double x)
{
	setJoules(x * 1000.0);
}

void Energy::setFootPoundForce(double x)
{
	setJoules(x * 1.3558179483314004);
}

void Energy::setKilowattHours(double x)
{
	setJoules(x * 3600000.0);
}

void Energy::setErgs(double x)
{
	setJoules(x * 0.0000001);
}

void Energy::setElectronvolts(double x)
{
	setJoules(x * 0.0000000000000000001602176634);
}