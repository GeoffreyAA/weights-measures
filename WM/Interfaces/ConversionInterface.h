#ifndef __CONVERSION_INTERFACE_H__
#define __CONVERSION_INTERFACE_H__

#include <stddef.h>
#include "..\Library\Decimal.h"

class ConversionInterface
{
public:
	ConversionInterface();
	virtual ~ConversionInterface();

	virtual int getType() const;
	virtual const wchar_t *getName() const;
	virtual int getValueCount() const;

	virtual Decimal getValue0() const;
	virtual Decimal getValue1() const;
	virtual Decimal getValue2() const;
	virtual Decimal getValue3() const;
	virtual Decimal getValue4() const;
	virtual Decimal getValue5() const;
	virtual Decimal getValue6() const;
	virtual Decimal getValue7() const;
	virtual Decimal getValue8() const;
	virtual Decimal getValue9() const;
	virtual Decimal getValue10() const;
	virtual Decimal getValue11() const;
	virtual Decimal getValue12() const;
	virtual Decimal getValue13() const;
	virtual Decimal getValue14() const;
	virtual Decimal getValue15() const;
	virtual Decimal getValue(int i) const;

	virtual const wchar_t *getTitle(int i) const;
	virtual const wchar_t *getAbbreviation(int i) const;

	virtual void setValue0(Decimal x);
	virtual void setValue1(Decimal x);
	virtual void setValue2(Decimal x);
	virtual void setValue3(Decimal x);
	virtual void setValue4(Decimal x);
	virtual void setValue5(Decimal x);
	virtual void setValue6(Decimal x);
	virtual void setValue7(Decimal x);
	virtual void setValue8(Decimal x);
	virtual void setValue9(Decimal x);
	virtual void setValue10(Decimal x);
	virtual void setValue11(Decimal x);
	virtual void setValue12(Decimal x);
	virtual void setValue13(Decimal x);
	virtual void setValue14(Decimal x);
	virtual void setValue15(Decimal x);
	virtual void setValue(int i, Decimal x);

private:
	const int ID;
};

#endif