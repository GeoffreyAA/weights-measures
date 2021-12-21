#ifndef __MASS_H__
#define __MASS_H__

class Mass
{
public:
	Mass(double g = 0.0);

	double getGrams() const;
	double getOunces() const;
	double getPounds() const;
	double getKilograms() const;
	double getStone() const;
	double getTonnes() const;
	double getTons() const;

	void setGrams(double x);
	void setOunces(double x);
	void setPounds(double x);
	void setKilograms(double x);
	void setStone(double x);
	void setTonnes(double x);
	void setTons(double x);

private:
	double Grams;
};

#endif