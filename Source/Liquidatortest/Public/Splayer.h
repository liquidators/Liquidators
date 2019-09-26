

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Splayer.generated.h"

UCLASS()
class LIQUIDATORTEST_API ASplayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASplayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float value);
	void MoveRight(float value);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
