#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/TimerHandle.h"
#include "ALTColliderPath.h"
#include "ALT_NavLink.generated.h"

class APawn;

UCLASS()
class AUTOLINKERPLUGIN_API AALT_NavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEntityTriggerLink, APawn*, _hitPawn, FVector, _destination);
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool canGenerateCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 radiusSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 capsuleHeightDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float capsuleRefreshRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float capsuleDistanceDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float capsuleNormalDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> enemyLayer;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<TEnumAsByte<EObjectTypeQuery>> groundLayer;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FALTColliderPath> allCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor DebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool canDebug;
    
    UPROPERTY()
    FString linkName;
    
    UPROPERTY()
    FTimerHandle detectionTimer;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnEntityTriggerLink onEntityTriggerLink;
    
public:
    AALT_NavLink(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void CheckCollision();
    
public:
    UFUNCTION()
    void BuildNav();
    
};

