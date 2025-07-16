#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomizationHelpers.generated.h"

class AActor;
class USkeletalMeshComponent;

UCLASS(BlueprintType)
class SANDFALL_API UCustomizationHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCustomizationHelpers();

    UFUNCTION(BlueprintCallable)
    static USkeletalMeshComponent* GetCharacterFace(AActor* Character);
    
    UFUNCTION(BlueprintCallable)
    static USkeletalMeshComponent* GetCharacterBody(AActor* Character);
    
};

