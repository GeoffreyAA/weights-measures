#ifndef __VOLUME_H__
#define __VOLUME_H__

#include "..\Library\Decimal.h"

class Volume
{
public:
	Volume(Decimal mL = DEC_LIT(0.0));

	Decimal getMillilitres() const;
	Decimal getLitres() const;
	Decimal getPintsUK() const;
	Decimal getPintsUS() const;
	Decimal getQuartsUK() const;
	Decimal getQuartsUS() const;
	Decimal getGallonsUK() const;
	Decimal getGallonsUS() const;
	Decimal getFluidOuncesUK() const;
	Decimal getFluidOuncesUS() const;
	Decimal getCupsMetric() const;
	Decimal getCupsUK() const;
	Decimal getCupsUS() const;
	Decimal getTeaspoonsMetric() const;
	Decimal getTeaspoonsUK() const;
	Decimal getTeaspoonsUS() const;
	Decimal getTablepoonsMetric() const;
	Decimal getTablepoonsUK() const;
	Decimal getTablepoonsUS() const;

	void setMillilitres(Decimal x);
	void setLitres(Decimal x);
	void setPintsUK(Decimal x);
	void setPintsUS(Decimal x);
	void setQuartsUK(Decimal x);
	void setQuartsUS(Decimal x);
	void setGallonsUK(Decimal x);
	void setGallonsUS(Decimal x);
	void setFluidOuncesUK(Decimal x);
	void setFluidOuncesUS(Decimal x);
	void setCupsMetric(Decimal x);
	void setCupsUK(Decimal x);
	void setCupsUS(Decimal x);
	void setTeaspoonsMetric(Decimal x);
	void setTeaspoonsUK(Decimal x);
	void setTeaspoonsUS(Decimal x);
	void setTablepoonsMetric(Decimal x);
	void setTablepoonsUK(Decimal x);
	void setTablepoonsUS(Decimal x);

private:
	Decimal Millilitres;
};

#endif