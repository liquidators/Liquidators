// Copyright 2021 Artur 'NijoMeisteR' Dworaczek. All Rights Reserved.

#include "StatsIntegration.h"

#define LOCTEXT_NAMESPACE "FStatsIntegrationModule"

void FStatsIntegrationModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FStatsIntegrationModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FStatsIntegrationModule, StatsIntegration)