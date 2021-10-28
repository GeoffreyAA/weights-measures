#ifndef __CONVERSION_INTERFACE_FACTORY_H__
#define __CONVERSION_INTERFACE_FACTORY_H__

#include "ConversionInterface.h"
#include <vector>

class ConversionInterfaceFactory
{
public:
	class InterfaceType
	{
	public:
		InterfaceType(int nType, const wchar_t *pszName, ConversionInterface *pInterface);
		~InterfaceType();

		int getType() const;
		const wchar_t *getName() const;
		ConversionInterface *getInterface() const;

	private:
		InterfaceType(const InterfaceType &);
		InterfaceType& operator=(const InterfaceType &);

	private:
		const int Type;
		const wchar_t *const Name;
		ConversionInterface *const Interface;
	};

	typedef std::vector<InterfaceType *> InterfaceListType;

	ConversionInterfaceFactory();
	~ConversionInterfaceFactory();

	const InterfaceListType& getInterfaces() const;
	ConversionInterface *getConversionInterface(int nType);

private:
	ConversionInterfaceFactory(const ConversionInterfaceFactory &);
	ConversionInterfaceFactory& operator=(const ConversionInterfaceFactory &);

private:
	InterfaceListType Interfaces;
};

#endif