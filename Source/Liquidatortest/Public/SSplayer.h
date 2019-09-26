

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SSplayer.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LIQUIDATORTEST_API USSplayer : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USSplayer();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
