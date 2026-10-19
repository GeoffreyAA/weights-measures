#ifndef __METRIC_H__
#define __METRIC_H__

#include "..\Library\Decimal.h"

class Metric
{
public:
	Metric(Decimal Base = DEC_LIT(0.0));

	Decimal getNano() const;
	Decimal getMicro() const;
	Decimal getMilli() const;
	Decimal getCenti() const;
	Decimal getDeci() const;
	Decimal getBase() const;
	Decimal getDeca() const;
	Decimal getHecto() const;
	Decimal getKilo() const;
	Decimal getMega() const;
	Decimal getGiga() const;
	Decimal getTera() const;
	Decimal getPeta() const;
	Decimal getExa() const;
	Decimal getZetta() const;
	Decimal getYotta() const;
	Decimal getRonna() const;
	Decimal getQuetta() const;

	void setNano(Decimal x);
	void setMicro(Decimal x);
	void setMilli(Decimal x);
	void setCenti(Decimal x);
	void setDeci(Decimal x);
	void setBase(Decimal x);
	void setDeca(Decimal x);
	void setHecto(Decimal x);
	void setKilo(Decimal x);
	void setMega(Decimal x);
	void setGiga(Decimal x);
	void setTera(Decimal x);
	void setPeta(Decimal x);
	void setExa(Decimal x);
	void setZetta(Decimal x);
	void setYotta(Decimal x);
	void setRonna(Decimal x);
	void setQuetta(Decimal x);

private:
	Decimal base;
};

#endif