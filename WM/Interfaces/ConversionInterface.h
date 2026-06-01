#ifndef __CONVERSION_INTERFACE_H__
#define __CONVERSION_INTERFACE_H__

#include <stddef.h>

class ConversionInterface
{
public:
	ConversionInterface();
	virtual ~ConversionInterface();

	virtual int getType() const;
	virtual const wchar_t *getName() const;
	virtual int getValueCount() const;

	virtual double getValue0() const;
	virtual double getValue1() const;
	virtual double getValue2() const;
	virtual double getValue3() const;
	virtual double getValue4() const;
	virtual double getValue5() const;
	virtual double getValue6() const;
	virtual double getValue7() const;
	virtual double getValue8() const;
	virtual double getValue9() const;
	virtual double getValue10() const;
	virtual double getValue11() const;
	virtual double getValue12() const;
	virtual double getValue13() const;
	virtual double getValue14() const;
	virtual double getValue15() const;
	virtual double getValue(int i) const;

	virtual const wchar_t *getTitle(int i) const;
	virtual const wchar_t *getAbbreviation(int i) const;

	virtual void setValue0(double x);
	virtual void setValue1(double x);
	virtual void setValue2(double x);
	virtual void setValue3(double x);
	virtual void setValue4(double x);
	virtual void setValue5(double x);
	virtual void setValue6(double x);
	virtual void setValue7(double x);
	virtual void setValue8(double x);
	virtual void setValue9(double x);
	virtual void setValue10(double x);
	virtual void setValue11(double x);
	virtual void setValue12(double x);
	virtual void setValue13(double x);
	virtual void setValue14(double x);
	virtual void setValue15(double x);
	virtual void setValue(int i, double x);

private:
	const int ID;
};

#endif