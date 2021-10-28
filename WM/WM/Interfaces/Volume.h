#ifndef __VOLUME_H__
#define __VOLUME_H__

class Volume
{
public:
	Volume(double mL = 0.0);

	double getMillilitres() const;
	double getPints() const;
	double getLitres() const;
	double getQuarts() const;
	double getGallons() const;

	void setMillilitres(double x);
	void setPints(double x);
	void setLitres(double x);
	void setQuarts(double x);
	void setGallons(double x);

private:
	double Millilitres;
};

#endif