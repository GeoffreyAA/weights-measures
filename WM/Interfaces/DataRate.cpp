#include "stdafx.h"
#include "DataRate.h"
#include "Metric.h"

DataRate::DataRate(double BitsPerSecond) : bps(BitsPerSecond)
{
}


///////////////////////////////////////////////////////////////

double DataRate::getBitsPerSecond() const
{
	return bps.getBits();
}

double DataRate::getKilobitsPerSecond() const
{
	return Metric(getBitsPerSecond()).getKilo();
}

double DataRate::getMegabitsPerSecond() const
{
	return Metric(getBitsPerSecond()).getMega();
}

double DataRate::getGigabitsPerSecond() const
{
	return Metric(getBitsPerSecond()).getGiga();
}

double DataRate::getBytesPerSecond() const
{
	return bps.getBytes();
}

double DataRate::getKilobytesPerSecond() const
{
	return bps.getKB();
}

double DataRate::getMegabytesPerSecond() const
{
	return bps.getMB();
}

double DataRate::getGigabytesPerSecond() const
{
	return bps.getGB();
}


///////////////////////////////////////////////////////////////

void DataRate::setBitsPerSecond(double x)
{
	bps.setBits(x);
}

void DataRate::setKilobitsPerSecond(double x)
{
	Metric m;

	m.setKilo(x);

	setBitsPerSecond(m.getBase());
}

void DataRate::setMegabitsPerSecond(double x)
{
	Metric m;

	m.setMega(x);

	setBitsPerSecond(m.getBase());
}

void DataRate::setGigabitsPerSecond(double x)
{
	Metric m;

	m.setGiga(x);

	setBitsPerSecond(m.getBase());
}

void DataRate::setBytesPerSecond(double x)
{
	bps.setBytes(x);
}

void DataRate::setKilobytesPerSecond(double x)
{
	bps.setKB(x);
}

void DataRate::setMegabytesPerSecond(double x)
{
	bps.setMB(x);
}

void DataRate::setGigabytesPerSecond(double x)
{
	bps.setGB(x);
}