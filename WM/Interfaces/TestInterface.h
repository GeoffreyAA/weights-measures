#ifndef __TEST_INTERFACE_H__
#define __TEST_INTERFACE_H__

#include "ConversionInterface.h"

class TestInterface : public ConversionInterface
{
public:
	const wchar_t *getName() const;
	int getValueCount() const;

	Decimal getValue0() const;
	Decimal getValue1() const;
	Decimal getValue2() const;
	Decimal getValue3() const;
	Decimal getValue4() const;
	Decimal getValue5() const;
	Decimal getValue6() const;
	Decimal getValue7() const;
	Decimal getValue8() const;
	Decimal getValue9() const;
	Decimal getValue10() const;
	Decimal getValue11() const;
	Decimal getValue12() const;
	Decimal getValue13() const;
	Decimal getValue14() const;
	Decimal getValue15() const;

	const wchar_t *getTitle(int i) const;
	const wchar_t *getAbbreviation(int i) const;

	void setValue0(Decimal x);
	void setValue1(Decimal x);
	void setValue2(Decimal x);
	void setValue3(Decimal x);
	void setValue4(Decimal x);
	void setValue5(Decimal x);
	void setValue6(Decimal x);
	void setValue7(Decimal x);
	void setValue8(Decimal x);
	void setValue9(Decimal x);
	void setValue10(Decimal x);
	void setValue11(Decimal x);
	void setValue12(Decimal x);
	void setValue13(Decimal x);
	void setValue14(Decimal x);
	void setValue15(Decimal x);
};

#endif