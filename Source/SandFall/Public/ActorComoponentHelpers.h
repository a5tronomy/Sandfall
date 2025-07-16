#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorComoponentHelpers.generated.h"

class AActor;
class UActorComponent;

UCLASS(BlueprintType)
class SANDFALL_API UActorComoponentHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorComoponentHelpers();

    UFUNCTION(BlueprintPure)
    static bool HasComponentBegunPlay(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyComponentExternally(UActorComponent* ComponentToDestroy);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeOwner(UActorComponent* Component, AActor* NewOwner);
    
};

