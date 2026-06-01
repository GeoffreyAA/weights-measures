#ifndef __METRIC_INTERFACE_H__
#define __METRIC_INTERFACE_H__

#include "ConversionInterface.h"
#include "Metric.h"

class MetricInterface : public ConversionInterface
{
public:
	const wchar_t *getName() const;
	int getValueCount() const;

	double getValue0() const;
	double getValue1() const;
	double getValue2() const;
	double getValue3() const;
	double getValue4() const;
	double getValue5() const;
	double getValue6() const;
	double getValue7() const;
	double getValue8() const;
	double getValue9() const;
	double getValue10() const;
	double getValue11() const;
	double getValue12() const;
	double getValue13() const;
	double getValue14() const;
	double getValue15() const;

	const wchar_t *getTitle(int i) const;

	void setValue0(double x);
	void setValue1(double x);
	void setValue2(double x);
	void setValue3(double x);
	void setValue4(double x);
	void setValue5(double x);
	void setValue6(double x);
	void setValue7(double x);
	void setValue8(double x);
	void setValue9(double x);
	void setValue10(double x);
	void setValue11(double x);
	void setValue12(double x);
	void setValue13(double x);
	void setValue14(double x);
	void setValue15(double x);

private:
	Metric m;
};

#endif