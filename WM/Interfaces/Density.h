#ifndef __DENSITY_H__
#define __DENSITY_H__

#include "..\Library\Decimal.h"

class Density
{
public:
	Density(Decimal kgm3 = DEC_LIT(0.0));

	Decimal getKilogramsPerCubicMetre() const;
	Decimal getOuncesPerGallonUK() const;
	Decimal getOuncesPerGallonUS() const;
	Decimal getPoundsPerCubicFoot() const;
	Decimal getGramsPerCubicCentimetre() const;

	void setKilogramsPerCubicMetre(Decimal x);
	void setOuncesPerGallonUK(Decimal x);
	void setOuncesPerGallonUS(Decimal x);
	void setPoundsPerCubicFoot(Decimal x);
	void setGramsPerCubicCentimetre(Decimal x);

private:
	Decimal KilogramsPerCubicMetre;
};

#endif