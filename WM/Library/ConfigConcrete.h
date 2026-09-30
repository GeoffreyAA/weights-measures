#ifndef __CONFIG_CONCRETE_H__
#define __CONFIG_CONCRETE_H__

#include "Configuration.h"

#define APPLICATION_PORTABLE

class ConfigConcrete
{
public:
	ConfigConcrete();
	~ConfigConcrete();

	Configuration& Get();

private:
	Configuration *pCfg;
};

#endif