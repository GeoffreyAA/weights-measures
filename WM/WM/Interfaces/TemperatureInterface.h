#ifndef __TEMPERATURE_INTERFACE_H__
#define __TEMPERATURE_INTERFACE_H__

#include "ConversionInterface.h"
#include "Temperature.h"

class TemperatureInterface : public ConversionInterface
{
public:
	int getValueCount() const;

	double getValue1() const;
	double getValue2() const;
	double getValue3() const;

	const wchar_t *getTitle(int i) const;
	const wchar_t *getAbbreviation(int i) const;

	void setValue1(double x);
	void setValue2(double x);
	void setValue3(double x);

private:
	Temperature t;
};

#endif