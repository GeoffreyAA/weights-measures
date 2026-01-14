#ifndef __METRIC_H__
#define __METRIC_H__

class Metric
{
public:
	Metric(double Base = 0.0);

	double getNano() const;
	double getMicro() const;
	double getMilli() const;
	double getCenti() const;
	double getDeci() const;
	double getBase() const;
	double getDeca() const;
	double getHecto() const;
	double getKilo() const;
	double getMega() const;
	double getGiga() const;
	double getTera() const;
	double getPeta() const;
	double getExa() const;
	double getZetta() const;
	double getYotta() const;

	void setNano(double x);
	void setMicro(double x);
	void setMilli(double x);
	void setCenti(double x);
	void setDeci(double x);
	void setBase(double x);
	void setDeca(double x);
	void setHecto(double x);
	void setKilo(double x);
	void setMega(double x);
	void setGiga(double x);
	void setTera(double x);
	void setPeta(double x);
	void setExa(double x);
	void setZetta(double x);
	void setYotta(double x);

private:
	double base;
};

#endif