#include "stdafx.h"
#include "PixelDensity.h"
#include <math.h>

PixelDensity::PixelDensity() : d(24), pw(1920), ph(1080)
{
}


///////////////////////////////////////////////////////////////

double PixelDensity::getDiagonal() const
{
	return (d);
}

double PixelDensity::getPixelsWidth() const
{
	return (pw);
}

double PixelDensity::getPixelsHeight() const
{
	return (ph);
}

double PixelDensity::getPixelsPerUnit() const
{
	//  Reference: Furey, Edward "Pixels Per Inch PPI Calculator" at https://www.calculatorsoup.com/calculators/technology/ppi-calculator.php from CalculatorSoup, https://www.calculatorsoup.com - Online Calculators
	//
	//  Diagonal = SQRT(width ^ 2 + height ^ 2)
	//
	//  Pixels per physical unit =    diagonal in pixels
	//                             -------------------------
	//                             diagonal in physical unit

	double diagonal_pixels = sqrt(pw * pw + ph * ph);

	return (diagonal_pixels / d);
}


///////////////////////////////////////////////////////////////

void PixelDensity::setDiagonal(double x)
{
	d = x;
}

void PixelDensity::setPixelsWidth(double x)
{
	pw = x;
}

void PixelDensity::setPixelsHeight(double x)
{
	ph = x;
}