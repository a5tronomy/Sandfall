#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnemyCharacterMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SANDFALL_API UEnemyCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EncounterCapsuleComponentTag;
    
    UEnemyCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};

