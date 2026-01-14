#ifndef __PIXEL_DENSITY_H__
#define __PIXEL_DENSITY_H__

class PixelDensity
{
public:
	PixelDensity();

	double getDiagonal() const;
	double getPixelsWidth() const;
	double getPixelsHeight() const;
	double getPixelsPerUnit() const;

	void setDiagonal(double x);
	void setPixelsWidth(double x);
	void setPixelsHeight(double x);

private:
	double d;
	double pw;
	double ph;
};

#endif