#include "stdafx.h"
#include "ConversionInterfaceFactory.h"
#include "..\Library\Templates.h"
#include "AngleInterface.h"
#include "AreaInterface.h"
#include "DataRateInterface.h"
#include "EnergyInterface.h"
#include "InformationInterface.h"
#include "LengthInterface.h"
#include "MassInterface.h"
#include "MetricInterface.h"
#include "PowerInterface.h"
#include "PressureInterface.h"
#include "SpeedInterface.h"
#include "StorageInterface.h"
#include "TemperatureInterface.h"
#include "TimeInterface.h"
#include "VolumeInterface.h"
#include "VolumeUKInterface.h"
#include "VolumeUSInterface.h"

ConversionInterfaceFactory::ConversionInterfaceFactory()
{
	int i = 0;

	Interfaces.reserve(17);

	Interfaces.push_back(new InterfaceType(i++, L"IDS_ANGLE", new AngleInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_AREA", new AreaInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_DATA_RATE", new DataRateInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_ENERGY", new EnergyInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_INFORMATION", new InformationInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_LENGTH", new LengthInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_MASS", new MassInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_METRIC", new MetricInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_POWER", new PowerInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_PRESSURE", new PressureInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_SPEED", new SpeedInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_STORAGE", new StorageInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_TEMPERATURE", new TemperatureInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_TIME", new TimeInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_VOLUME", new VolumeInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_VOLUME_UK", new VolumeUKInterface));
	Interfaces.push_back(new InterfaceType(i++, L"IDS_VOLUME_US", new VolumeUSInterface));
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