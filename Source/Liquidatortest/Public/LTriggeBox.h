

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LTriggeBox.generated.h"

class UBoxComponent;

UCLASS()
class LIQUIDATORTEST_API ALTriggeBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALTriggeBox();

protected:

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UBoxComponent* OverlapComp;

	UFUNCTION()
	void HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
