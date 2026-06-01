#ifndef __CONVERSION_INTERFACE_FACTORY_H__
#define __CONVERSION_INTERFACE_FACTORY_H__

#include "ConversionInterface.h"
#include <vector>

class ConversionInterfaceFactory
{
public:
	typedef std::vector<ConversionInterface *> InterfaceList;

	ConversionInterfaceFactory();
	~ConversionInterfaceFactory();

	const InterfaceList& getInterfaces() const;
	ConversionInterface *getConversionInterface(int Type);

private:
	ConversionInterfaceFactory(const ConversionInterfaceFactory &);
	ConversionInterfaceFactory& operator=(const ConversionInterfaceFactory &);

private:
	InterfaceList Interfaces;
};

#endif