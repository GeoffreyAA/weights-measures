#ifndef __TEST_ZERO_INTERFACE_H__
#define __TEST_ZERO_INTERFACE_H__

#include "ConversionInterface.h"

class TestZeroInterface : public ConversionInterface
{
public:
	const wchar_t *getName() const
	{
		return L"TEST_ZERO";
	}

	int getValueCount() const
	{
		return 0;
	}
};

#endif