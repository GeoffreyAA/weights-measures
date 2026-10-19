#include "stdafx.h"
#include "PixelDensity.h"
#include <math.h>

PixelDensity::PixelDensity() : d(DEC_LIT(24)), pw(DEC_LIT(1920)), ph(DEC_LIT(1080))
{
}


///////////////////////////////////////////////////////////////

Decimal PixelDensity::getDiagonal() const
{
	return d;
}

Decimal PixelDensity::getPixelsWidth() const
{
	return pw;
}

Decimal PixelDensity::getPixelsHeight() const
{
	return ph;
}

Decimal PixelDensity::getPixelsPerUnit() const
{
	//  Reference: Furey, Edward "Pixels Per Inch PPI Calculator" at https://www.calculatorsoup.com/calculators/technology/ppi-calculator.php from CalculatorSoup, https://www.calculatorsoup.com - Online Calculators
	//
	//  Diagonal = SQRT(width ^ 2 + height ^ 2)
	//
	//  Pixels per physical unit =    diagonal in pixels
	//                             -------------------------
	//                             diagonal in physical unit

	Decimal diagonal_pixels = sqrt(pw * pw + ph * ph);

	return diagonal_pixels / d;
}


///////////////////////////////////////////////////////////////

void PixelDensity::setDiagonal(Decimal x)
{
	d = x;
}

void PixelDensity::setPixelsWidth(Decimal x)
{
	pw = x;
}

void PixelDensity::setPixelsHeight(Decimal x)
{
	ph = x;
}