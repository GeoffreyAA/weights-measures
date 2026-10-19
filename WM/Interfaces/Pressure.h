#ifndef __PRESSURE_H__
#define __PRESSURE_H__

#include "..\Library\Decimal.h"

class Pressure
{
public:
	Pressure(Decimal Pa = DEC_LIT(0.0));

	Decimal getPascals() const;
	Decimal getKilopascals() const;
	Decimal getPoundsPerSquareInch() const;
	Decimal getBars() const;
	Decimal getStandardAtmosphere() const;
	Decimal getMillimetresOfMercury() const;
	Decimal getInchesOfMercury() const;
	Decimal getCentimetresOfWater() const;
	Decimal getInchesOfWater() const;

	void setPascals(Decimal x);
	void setKilopascals(Decimal x);
	void setPoundsPerSquareInch(Decimal x);
	void setBars(Decimal x);
	void setStandardAtmosphere(Decimal x);
	void setMillimetresOfMercury(Decimal x);
	void setInchesOfMercury(Decimal x);
	void setCentimetresOfWater(Decimal x);
	void setInchesOfWater(Decimal x);

private:
	Decimal Pascals;
};

#endif