#ifndef __LENGTH_H__
#define __LENGTH_H__

#include "..\Library\Decimal.h"
#include "Metric.h"

class Length
{
public:
	Length(Decimal m = DEC_LIT(0.0));

	Decimal getMillimetres() const;
	Decimal getCentimetres() const;
	Decimal getInches() const;
	Decimal getFeet() const;
	Decimal getYards() const;
	Decimal getMetres() const;
	Decimal getKilometres() const;
	Decimal getMiles() const;
	Decimal getNauticalMiles() const;
	Decimal getLightSeconds() const;
	Decimal getAstronomicalUnits() const;
	Decimal getLightYears() const;
	Decimal getParsecs() const;

	void setMillimetres(Decimal x);
	void setCentimetres(Decimal x);
	void setInches(Decimal x);
	void setFeet(Decimal x);
	void setYards(Decimal x);
	void setMetres(Decimal x);
	void setKilometres(Decimal x);
	void setMiles(Decimal x);
	void setNauticalMiles(Decimal x);
	void setLightSeconds(Decimal x);
	void setAstronomicalUnits(Decimal x);
	void setLightYears(Decimal x);
	void setParsecs(Decimal x);

private:
	Metric Metres;
};

#endif