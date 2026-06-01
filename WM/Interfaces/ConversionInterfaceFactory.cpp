#include "stdafx.h"
#include "ConversionInterfaceFactory.h"
#include "AngleInterface.h"
#include "AreaInterface.h"
#include "DataRateInterface.h"
#include "EnergyInterface.h"
#include "InformationInterface.h"
#include "LengthInterface.h"
#include "MassInterface.h"
#include "MetricInterface.h"
#include "PixelDensityInterface.h"
#include "PowerInterface.h"
#include "PressureInterface.h"
#include "SpeedInterface.h"
#include "StorageInterface.h"
#include "TemperatureInterface.h"
#include "TimeInterface.h"
#include "VolumeInterface.h"
#include "VolumeUKInterface.h"
#include "VolumeUSInterface.h"
#include "..\Library\Templates.h"

#ifdef _DEBUG
#include "TestInterface.h"
#include "TestZeroInterface.h"
#endif

ConversionInterfaceFactory::ConversionInterfaceFactory()
{
	Interfaces.reserve(18);

	Interfaces.push_back(new AngleInterface);
	Interfaces.push_back(new AreaInterface);
	Interfaces.push_back(new DataRateInterface);
	Interfaces.push_back(new EnergyInterface);
	Interfaces.push_back(new InformationInterface);
	Interfaces.push_back(new LengthInterface);
	Interfaces.push_back(new MassInterface);
	Interfaces.push_back(new MetricInterface);
	Interfaces.push_back(new PixelDensityInterface);
	Interfaces.push_back(new PowerInterface);
	Interfaces.push_back(new PressureInterface);
	Interfaces.push_back(new SpeedInterface);
	Interfaces.push_back(new StorageInterface);
	Interfaces.push_back(new TemperatureInterface);
	Interfaces.push_back(new TimeInterface);
	Interfaces.push_back(new VolumeInterface);
	Interfaces.push_back(new VolumeUKInterface);
	Interfaces.push_back(new VolumeUSInterface);

#ifdef _DEBUG
	Interfaces.push_back(new TestInterface);
	Interfaces.push_back(new TestZeroInterface);
#endif
}

ConversionInterfaceFactory::~ConversionInterfaceFactory()
{
	DeleteAll(Interfaces.begin(), Interfaces.end());
}

const ConversionInterfaceFactory::InterfaceList& ConversionInterfaceFactory::getInterfaces() const
{
	return Interfaces;
}

ConversionInterface *ConversionInterfaceFactory::getConversionInterface(int Type)
{
	for (InterfaceList::const_iterator i = Interfaces.begin(); i != Interfaces.end(); i++)
	{
		if (*i)
		{
			if ((*i)->getType() == Type)
			{
				return *i;
			}
		}
	}

	return NULL;
}