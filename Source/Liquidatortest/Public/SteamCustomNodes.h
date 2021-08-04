

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamCustomNodes.generated.h"

/**
 * 
 */
UCLASS()
class LIQUIDATORTEST_API USteamCustomNodes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, META = (DisplayName = "Has DLC Installed", CompactNodeTitle = "Has DLC Installed", Category = "Steam Custom Nodes"))
		static bool BIsDlcInstalled(int32 AppID);

	UFUNCTION(BlueprintCallable, META = (DisplayName = "Game Installed", CompactNodeTitle = "Game Installed", Category = "Steam Custom Nodes"))
		static bool BIsAppInstalled(int32 AppID);

	UFUNCTION(BlueprintCallable, META = (DisplayName = "Open Store", CompactNodeTitle = "Open Store", Category = "Steam Custom Nodes"))
		static void OpenStore(int32 DLC_AppID);
	
};
