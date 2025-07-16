#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "CharacterSpringArmComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SANDFALL_API UCharacterSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreZ;
    
    UCharacterSpringArmComponent(const FObjectInitializer& ObjectInitializer);

};

