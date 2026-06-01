#ifndef __VOLUME_INTERFACE_H__
#define __VOLUME_INTERFACE_H__

#include "ConversionInterface.h"
#include "Volume.h"

class VolumeInterface : public ConversionInterface
{
public:
	const wchar_t *getName() const;
	int getValueCount() const;

	double getValue0() const;
	double getValue1() const;
	double getValue2() const;
	double getValue3() const;
	double getValue4() const;

	const wchar_t *getTitle(int i) const;
	const wchar_t *getAbbreviation(int i) const;

	void setValue0(double x);
	void setValue1(double x);
	void setValue2(double x);
	void setValue3(double x);
	void setValue4(double x);

private:
	Volume v;
};

#endif