#ifndef __LENGTH_H__
#define __LENGTH_H__

#include "..\Library\Decimal.h"

class Length
{
public:
	Length(Decimal mm = DEC_LIT(0.0));

	Decimal getMillimetres() const;
	Decimal getCentimetres() const;
	Decimal getInches() const;
	Decimal getFeet() const;
	Decimal getYards() const;
	Decimal getMetres() const;
	Decimal getKilometres() const;
	Decimal getMiles() const;

	void setMillimetres(Decimal x);
	void setCentimetres(Decimal x);
	void setInches(Decimal x);
	void setFeet(Decimal x);
	void setYards(Decimal x);
	void setMetres(Decimal x);
	void setKilometres(Decimal x);
	void setMiles(Decimal x);

private:
	Decimal Millimetres;
};

#endif