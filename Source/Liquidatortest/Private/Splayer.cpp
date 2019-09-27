


#include "Splayer.h"

// Sets default values
ASplayer::ASplayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASplayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASplayer::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector()*value);
}

void ASplayer::MoveRight(float value)
{
	AddMovementInput(GetActorRightVector()*value);
}

// Called every frame
void ASplayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASplayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ASplayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASplayer::MoveRight);

}

