#include "stdafx.h"
#include "Metric.h"

DEC_CONST Decimal nano		= DEC_LIT(0.000000001);
DEC_CONST Decimal micro		= DEC_LIT(0.000001);
DEC_CONST Decimal milli		= DEC_LIT(0.001);
DEC_CONST Decimal centi		= DEC_LIT(0.01);
DEC_CONST Decimal deci		= DEC_LIT(0.1);
DEC_CONST Decimal deca		= DEC_LIT(10.0);
DEC_CONST Decimal hecto		= DEC_LIT(100.0);
DEC_CONST Decimal kilo		= DEC_LIT(1000.0);
DEC_CONST Decimal mega		= DEC_LIT(1000000.0);
DEC_CONST Decimal giga		= DEC_LIT(1000000000.0);
DEC_CONST Decimal tera		= DEC_LIT(1000000000000.0);
DEC_CONST Decimal peta		= DEC_LIT(1000000000000000.0);
DEC_CONST Decimal exa		= DEC_LIT(1000000000000000000.0);
DEC_CONST Decimal zetta		= DEC_LIT(1000000000000000000000.0);
DEC_CONST Decimal yotta		= DEC_LIT(1000000000000000000000000.0);
DEC_CONST Decimal ronna		= DEC_LIT(1000000000000000000000000000.0);
DEC_CONST Decimal quetta	= DEC_LIT(1000000000000000000000000000000.0);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Metric::Metric(Decimal Base) : base(Base)
{
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Decimal Metric::getNano() const
{
	return getBase() / nano;
}

Decimal Metric::getMicro() const
{
	return getBase() / micro;
}

Decimal Metric::getMilli() const
{
	return getBase() / milli;
}

Decimal Metric::getCenti() const
{
	return getBase() / centi;
}

Decimal Metric::getDeci() const
{
	return getBase() / deci;
}

Decimal Metric::getBase() const
{
	return base;
}

Decimal Metric::getDeca() const
{
	return getBase() / deca;
}

Decimal Metric::getHecto() const
{
	return getBase() / hecto;
}

Decimal Metric::getKilo() const
{
	return getBase() / kilo;
}

Decimal Metric::getMega() const
{
	return getBase() / mega;
}

Decimal Metric::getGiga() const
{
	return getBase() / giga;
}

Decimal Metric::getTera() const
{
	return getBase() / tera;
}

Decimal Metric::getPeta() const
{
	return getBase() / peta;
}

Decimal Metric::getExa() const
{
	return getBase() / exa;
}

Decimal Metric::getZetta() const
{
	return getBase() / zetta;
}

Decimal Metric::getYotta() const
{
	return getBase() / yotta;
}

Decimal Metric::getRonna() const
{
	return getBase() / ronna;
}

Decimal Metric::getQuetta() const
{
	return getBase() / quetta;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Metric::setNano(Decimal x)
{
	setBase(x * nano);
}

void Metric::setMicro(Decimal x)
{
	setBase(x * micro);
}

void Metric::setMilli(Decimal x)
{
	setBase(x * milli);
}

void Metric::setCenti(Decimal x)
{
	setBase(x * centi);
}

void Metric::setDeci(Decimal x)
{
	setBase(x * deci);
}

void Metric::setBase(Decimal x)
{
	base = x;
}

void Metric::setDeca(Decimal x)
{
	setBase(x * deca);
}

void Metric::setHecto(Decimal x)
{
	setBase(x * hecto);
}

void Metric::setKilo(Decimal x)
{
	setBase(x * kilo);
}

void Metric::setMega(Decimal x)
{
	setBase(x * mega);
}

void Metric::setGiga(Decimal x)
{
	setBase(x * giga);
}

void Metric::setTera(Decimal x)
{
	setBase(x * tera);
}

void Metric::setPeta(Decimal x)
{
	setBase(x * peta);
}

void Metric::setExa(Decimal x)
{
	setBase(x * exa);
}

void Metric::setZetta(Decimal x)
{
	setBase(x * zetta);
}

void Metric::setYotta(Decimal x)
{
	setBase(x * yotta);
}

void Metric::setRonna(Decimal x)
{
	setBase(x * ronna);
}

void Metric::setQuetta(Decimal x)
{
	setBase(x * quetta);
}