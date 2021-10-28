#include "stdafx.h"
#include "ConversionInterfaceFactory.h"
#include "..\Library\Templates.h"
#include "AreaInterface.h"
#include "InformationInterface.h"
#include "LengthInterface.h"
#include "MassInterface.h"
#include "TemperatureInterface.h"
#include "TimeInterface.h"
#include "VolumeInterface.h"

ConversionInterfaceFactory::ConversionInterfaceFactory()
{
	int i = 0;

	Interfaces.reserve(7);

	Interfaces.push_back(new InterfaceType(i++, L"IDS_AREA", new AreaInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_INFORMATION", new InformationInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_LENGTH", new LengthInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_MASS", new MassInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_TEMPERATURE", new TemperatureInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_TIME", new TimeInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_VOLUME", new VolumeInterface));
}

ConversionInterfaceFactory::~ConversionInterfaceFactory()
{
	DeleteAll(Interfaces.begin(), Interfaces.end());
}

const ConversionInterfaceFactory::InterfaceListType& ConversionInterfaceFactory::getInterfaces() const
{
	return (Interfaces);
}

ConversionInterface *ConversionInterfaceFactory::getConversionInterface(int nType)
{
	for (InterfaceListType::const_iterator i = Interfaces.begin(); i != Interfaces.end(); i++)
	{
		if (*i)
		{
			if ((*i)->getType() == nType)
			{
				return ((*i)->getInterface());
			}
		}
	}

	return (NULL);
}


///////////////////////////////////////////////////////////////

ConversionInterfaceFactory::InterfaceType::InterfaceType(int nType, const wchar_t *pszName, ConversionInterface *pInterface) : Type(nType), Name(pszName), Interface(pInterface)
{
}

ConversionInterfaceFactory::InterfaceType::~InterfaceType()
{
	if (Interface)
	{
		delete Interface;
	}
}

int ConversionInterfaceFactory::InterfaceType::getType() const
{
	return (Type);
}

const wchar_t *ConversionInterfaceFactory::InterfaceType::getName() const
{
	return (Name);
}

ConversionInterface *ConversionInterfaceFactory::InterfaceType::getInterface() const
{
	return (Interface);
}