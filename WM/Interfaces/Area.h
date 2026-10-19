#ifndef __AREA_H__
#define __AREA_H__

#include "..\Library\Decimal.h"

class Area
{
public:
	Area(Decimal sqm = DEC_LIT(0.0));

	Decimal getSquareInches() const;
	Decimal getSquareFeet() const;
	Decimal getSquareYards() const;
	Decimal getSquareMetres() const;
	Decimal getAcres() const;
	Decimal getHectares() const;
	Decimal getSquareKilometres() const;
	Decimal getSquareMiles() const;

	void setSquareInches(Decimal x);
	void setSquareFeet(Decimal x);
	void setSquareYards(Decimal x);
	void setSquareMetres(Decimal x);
	void setAcres(Decimal x);
	void setHectares(Decimal x);
	void setSquareKilometres(Decimal x);
	void setSquareMiles(Decimal x);

private:
	Decimal SquareMetres;
};

#endif