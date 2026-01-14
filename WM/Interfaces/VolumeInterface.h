#ifndef __VOLUME_INTERFACE_H__
#define __VOLUME_INTERFACE_H__

#include "ConversionInterface.h"
#include "Volume.h"

class VolumeInterface : public ConversionInterface
{
public:
	int getValueCount() const;

	double getValue1() const;
	double getValue2() const;
	double getValue3() const;
	double getValue4() const;
	double getValue5() const;

	const wchar_t *getTitle(int i) const;
	const wchar_t *getAbbreviation(int i) const;

	void setValue1(double x);
	void setValue2(double x);
	void setValue3(double x);
	void setValue4(double x);
	void setValue5(double x);

private:
	Volume v;
};

#endif