#ifndef __VOLUME_UK_INTERFACE_H__
#define __VOLUME_UK_INTERFACE_H__

#include "ConversionInterface.h"
#include "Volume.h"

class VolumeUKInterface : public ConversionInterface
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

private:
	Volume v;
};

#endif