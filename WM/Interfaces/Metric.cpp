#include "stdafx.h"
#include "Metric.h"

const double nano	= 0.000000001;
const double micro	= 0.000001;
const double milli	= 0.001;
const double centi	= 0.01;
const double deci	= 0.1;
const double deca	= 10.0;
const double hecto	= 100.0;
const double kilo	= 1000.0;
const double mega	= 1000000.0;
const double giga	= 1000000000.0;
const double tera	= 1000000000000.0;
const double peta	= 1000000000000000.0;
const double exa	= 1000000000000000000.0;
const double zetta	= 1000000000000000000000.0;
const double yotta	= 1000000000000000000000000.0;


///////////////////////////////////////////////////////////////

Metric::Metric(double Base) : base(Base)
{
}


///////////////////////////////////////////////////////////////

double Metric::getNano() const
{
	return (getBase() / nano);
}

double Metric::getMicro() const
{
	return (getBase() / micro);
}

double Metric::getMilli() const
{
	return (getBase() / milli);
}

double Metric::getCenti() const
{
	return (getBase() / centi);
}

double Metric::getDeci() const
{
	return (getBase() / deci);
}

double Metric::getBase() const
{
	return (base);
}

double Metric::getDeca() const
{
	return (getBase() / deca);
}

double Metric::getHecto() const
{
	return (getBase() / hecto);
}

double Metric::getKilo() const
{
	return (getBase() / kilo);
}

double Metric::getMega() const
{
	return (getBase() / mega);
}

double Metric::getGiga() const
{
	return (getBase() / giga);
}

double Metric::getTera() const
{
	return (getBase() / tera);
}

double Metric::getPeta() const
{
	return (getBase() / peta);
}

double Metric::getExa() const
{
	return (getBase() / exa);
}

double Metric::getZetta() const
{
	return (getBase() / zetta);
}

double Metric::getYotta() const
{
	return (getBase() / yotta);
}


///////////////////////////////////////////////////////////////

void Metric::setNano(double x)
{
	setBase(x * nano);
}

void Metric::setMicro(double x)
{
	setBase(x * micro);
}

void Metric::setMilli(double x)
{
	setBase(x * milli);
}

void Metric::setCenti(double x)
{
	setBase(x * centi);
}

void Metric::setDeci(double x)
{
	setBase(x * deci);
}

void Metric::setBase(double x)
{
	base = x;
}

void Metric::setDeca(double x)
{
	setBase(x * deca);
}

void Metric::setHecto(double x)
{
	setBase(x * hecto);
}

void Metric::setKilo(double x)
{
	setBase(x * kilo);
}

void Metric::setMega(double x)
{
	setBase(x * mega);
}

void Metric::setGiga(double x)
{
	setBase(x * giga);
}

void Metric::setTera(double x)
{
	setBase(x * tera);
}

void Metric::setPeta(double x)
{
	setBase(x * peta);
}

void Metric::setExa(double x)
{
	setBase(x * exa);
}

void Metric::setZetta(double x)
{
	setBase(x * zetta);
}

void Metric::setYotta(double x)
{
	setBase(x * yotta);
}