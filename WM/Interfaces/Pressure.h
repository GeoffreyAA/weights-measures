#ifndef __PRESSURE_H__
#define __PRESSURE_H__

class Pressure
{
public:
	Pressure(double Pa = 0.0);

	double getPascals() const;
	double getKilopascals() const;
	double getPoundsPerSquareInch() const;
	double getBars() const;
	double getStandardAtmosphere() const;
	double getMillimetresOfMercury() const;
	double getInchesOfMercury() const;
	double getCentimetresOfWater() const;
	double getInchesOfWater() const;

	void setPascals(double x);
	void setKilopascals(double x);
	void setPoundsPerSquareInch(double x);
	void setBars(double x);
	void setStandardAtmosphere(double x);
	void setMillimetresOfMercury(double x);
	void setInchesOfMercury(double x);
	void setCentimetresOfWater(double x);
	void setInchesOfWater(double x);

private:
	double Pascals;
};

#endif