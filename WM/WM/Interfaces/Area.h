#ifndef __AREA_H__
#define __AREA_H__

class Area
{
public:
	Area(double sqm = 0.0);

	double getSquareInches() const;
	double getSquareFeet() const;
	double getSquareYards() const;
	double getSquareMetres() const;
	double getAcres() const;
	double getHectares() const;
	double getSquareKilometres() const;
	double getSquareMiles() const;

	void setSquareInches(double x);
	void setSquareFeet(double x);
	void setSquareYards(double x);
	void setSquareMetres(double x);
	void setAcres(double x);
	void setHectares(double x);
	void setSquareKilometres(double x);
	void setSquareMiles(double x);

private:
	double SquareMetres;
};

#endif