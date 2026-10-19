#include "stdafx.h"
#include "Storage.h"
#include "Metric.h"

Storage::Storage()
{
}


///////////////////////////////////////////////////////////////

Decimal Storage::getActualGB() const
{
	return Actual.getGB();
}

Decimal Storage::getActualTB() const
{
	return Actual.getTB();
}

Decimal Storage::getAdvertisedGB() const
{
	Metric m;

	m.setBase(Actual.getBytes());

	return m.getGiga();
}

Decimal Storage::getAdvertisedTB() const
{
	Metric m;

	m.setBase(Actual.getBytes());

	return m.getTera();
}


///////////////////////////////////////////////////////////////

void Storage::setActualGB(Decimal x)
{
	Actual.setGB(x);
}

void Storage::setActualTB(Decimal x)
{
	Actual.setTB(x);
}

void Storage::setAdvertisedGB(Decimal x)
{
	Metric m;

	m.setGiga(x);

	Actual.setBytes(m.getBase());
}

void Storage::setAdvertisedTB(Decimal x)
{
	Metric m;

	m.setTera(x);

	Actual.setBytes(m.getBase());
}