#ifndef __GROCERIES_H__
#define __GROCERIES_H__

class Groceries
{
public:
	Groceries();

	double getPrice() const;
	double getKilograms() const;
	double getGrams() const;
	double getPricePerKilogram() const;

	void setPrice(double x);
	void setKilograms(double x);
	void setGrams(double x);

private:
	double Price;
	double Grams;
};

#endif