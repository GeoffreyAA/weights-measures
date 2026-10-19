#ifndef __POWER_INTERFACE_H__
#define __POWER_INTERFACE_H__

#include "ConversionInterface.h"
#include "Power.h"

class PowerInterface : public ConversionInterface
{
public:
	const wchar_t *getName() const;
	int getValueCount() const;

	Decimal getValue0() const;
	Decimal getValue1() const;
	Decimal getValue2() const;
	Decimal getValue3() const;

	const wchar_t *getTitle(int i) const;
	const wchar_t *getAbbreviation(int i) const;

	void setValue0(Decimal x);
	void setValue1(Decimal x);
	void setValue2(Decimal x);
	void setValue3(Decimal x);

private:
	Power p;
};

#endif