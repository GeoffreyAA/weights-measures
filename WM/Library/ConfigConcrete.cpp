#include "stdafx.h"
#include "ConfigConcrete.h"
#include "ConfigFile.h"
#include "Registry.h"
#include "Win32Library.h"
#include "..\Application.h"

ConfigConcrete::ConfigConcrete()
{
#ifdef APPLICATION_PORTABLE
	pCfg = new ConfigFile;
#else
	pCfg = new Registry(GetRegistryKey(), KEY_READ | KEY_WRITE, true);
#endif
}

ConfigConcrete::~ConfigConcrete()
{
	delete pCfg;
}

Configuration& ConfigConcrete::Get()
{
	return *pCfg;
}