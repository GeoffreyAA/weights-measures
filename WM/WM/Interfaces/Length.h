#ifndef __LENGTH_H__
#define __LENGTH_H__

class Length
{
public:
	Length(double mm = 0.0);

	double getMillimetres() const;
	double getCentimetres() const;
	double getInches() const;
	double getFeet() const;
	double getYards() const;
	double getMetres() const;
	double getKilometres() const;
	double getMiles() const;

	void setMillimetres(double x);
	void setCentimetres(double x);
	void setInches(double x);
	void setFeet(double x);
	void setYards(double x);
	void setMetres(double x);
	void setKilometres(double x);
	void setMiles(double x);

private:
	double Millimetres;
};

#endif