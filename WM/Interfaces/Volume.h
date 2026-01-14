#ifndef __VOLUME_H__
#define __VOLUME_H__

class Volume
{
public:
	Volume(double mL = 0.0);

	double getMillilitres() const;
	double getLitres() const;
	double getPintsUK() const;
	double getPintsUS() const;
	double getQuartsUK() const;
	double getQuartsUS() const;
	double getGallonsUK() const;
	double getGallonsUS() const;
	double getFluidOuncesUK() const;
	double getFluidOuncesUS() const;
	double getCupsMetric() const;
	double getCupsUK() const;
	double getCupsUS() const;
	double getTeaspoonsMetric() const;
	double getTeaspoonsUK() const;
	double getTeaspoonsUS() const;
	double getTablepoonsMetric() const;
	double getTablepoonsUK() const;
	double getTablepoonsUS() const;

	void setMillilitres(double x);
	void setLitres(double x);
	void setPintsUK(double x);
	void setPintsUS(double x);
	void setQuartsUK(double x);
	void setQuartsUS(double x);
	void setGallonsUK(double x);
	void setGallonsUS(double x);
	void setFluidOuncesUK(double x);
	void setFluidOuncesUS(double x);
	void setCupsMetric(double x);
	void setCupsUK(double x);
	void setCupsUS(double x);
	void setTeaspoonsMetric(double x);
	void setTeaspoonsUK(double x);
	void setTeaspoonsUS(double x);
	void setTablepoonsMetric(double x);
	void setTablepoonsUK(double x);
	void setTablepoonsUS(double x);

private:
	double Millilitres;
};

#endif