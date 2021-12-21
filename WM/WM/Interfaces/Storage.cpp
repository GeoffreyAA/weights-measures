#include "stdafx.h"
#include "Storage.h"
#include "Metric.h"

Storage::Storage()
{
}


///////////////////////////////////////////////////////////////

double Storage::getActualGB() const
{
	return Actual.getGB();
}

double Storage::getActualTB() const
{
	return Actual.getTB();
}

double Storage::getAdvertisedGB() const
{
	Metric m;

	m.setBase(Actual.getBytes());

	return m.getGiga();
}

double Storage::getAdvertisedTB() const
{
	Metric m;

	m.setBase(Actual.getBytes());

	return m.getTera();
}


///////////////////////////////////////////////////////////////

void Storage::setActualGB(double x)
{
	Actual.setGB(x);
}

void Storage::setActualTB(double x)
{
	Actual.setTB(x);
}

void Storage::setAdvertisedGB(double x)
{
	Metric m;

	m.setGiga(x);

	Actual.setBytes(m.getBase());
}

void Storage::setAdvertisedTB(double x)
{
	Metric m;

	m.setTera(x);

	Actual.setBytes(m.getBase());
}