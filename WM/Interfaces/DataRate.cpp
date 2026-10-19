#include "stdafx.h"
#include "DataRate.h"
#include "Metric.h"

DataRate::DataRate(Decimal BitsPerSecond) : bps(BitsPerSecond)
{
}


///////////////////////////////////////////////////////////////

Decimal DataRate::getBitsPerSecond() const
{
	return bps.getBits();
}

Decimal DataRate::getKilobitsPerSecond() const
{
	return Metric(getBitsPerSecond()).getKilo();
}

Decimal DataRate::getMegabitsPerSecond() const
{
	return Metric(getBitsPerSecond()).getMega();
}

Decimal DataRate::getGigabitsPerSecond() const
{
	return Metric(getBitsPerSecond()).getGiga();
}

Decimal DataRate::getBytesPerSecond() const
{
	return bps.getBytes();
}

Decimal DataRate::getKilobytesPerSecond() const
{
	return bps.getKB();
}

Decimal DataRate::getMegabytesPerSecond() const
{
	return bps.getMB();
}

Decimal DataRate::getGigabytesPerSecond() const
{
	return bps.getGB();
}


///////////////////////////////////////////////////////////////

void DataRate::setBitsPerSecond(Decimal x)
{
	bps.setBits(x);
}

void DataRate::setKilobitsPerSecond(Decimal x)
{
	Metric m;

	m.setKilo(x);

	setBitsPerSecond(m.getBase());
}

void DataRate::setMegabitsPerSecond(Decimal x)
{
	Metric m;

	m.setMega(x);

	setBitsPerSecond(m.getBase());
}

void DataRate::setGigabitsPerSecond(Decimal x)
{
	Metric m;

	m.setGiga(x);

	setBitsPerSecond(m.getBase());
}

void DataRate::setBytesPerSecond(Decimal x)
{
	bps.setBytes(x);
}

void DataRate::setKilobytesPerSecond(Decimal x)
{
	bps.setKB(x);
}

void DataRate::setMegabytesPerSecond(Decimal x)
{
	bps.setMB(x);
}

void DataRate::setGigabytesPerSecond(Decimal x)
{
	bps.setGB(x);
}