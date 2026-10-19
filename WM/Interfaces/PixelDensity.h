#ifndef __PIXEL_DENSITY_H__
#define __PIXEL_DENSITY_H__

#include "..\Library\Decimal.h"

class PixelDensity
{
public:
	PixelDensity();

	Decimal getDiagonal() const;
	Decimal getPixelsWidth() const;
	Decimal getPixelsHeight() const;
	Decimal getPixelsPerUnit() const;

	void setDiagonal(Decimal x);
	void setPixelsWidth(Decimal x);
	void setPixelsHeight(Decimal x);

private:
	Decimal d;
	Decimal pw;
	Decimal ph;
};

#endif