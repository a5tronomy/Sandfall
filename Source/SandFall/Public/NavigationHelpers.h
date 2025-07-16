#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NavigationHelpers.generated.h"

class ANavigationData;
class UActorComponent;
class UObject;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class SANDFALL_API UNavigationHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNavigationHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetFillCollisionUnderneathForNavmesh(UPrimitiveComponent* PrimitiveComponent, bool bFillCollisionUnderneathForNavmesh);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigation(UActorComponent* ActorComponent, bool bRelevant);
    
    UFUNCTION(BlueprintPure)
    static bool IsNavigationRelevant(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ANavigationData* GetNavDataForAgentName(UObject* WorldContextObject, FName AgentName);
    
    UFUNCTION(BlueprintPure)
    static bool CanEverAffectNavigation(UActorComponent* ActorComponent);
    
};

