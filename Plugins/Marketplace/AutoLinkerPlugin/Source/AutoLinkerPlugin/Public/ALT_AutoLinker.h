#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/TimerHandle.h"
#include "Templates/SubclassOf.h"
#include "ALT_AutoLinker.generated.h"

class AALT_NavLink;
class UNavigationSystemV1;
class UWorld;

UCLASS()
class AUTOLINKERPLUGIN_API AALT_AutoLinker : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLinkSpawned);
    
protected:
    UPROPERTY()
    bool areLinkSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnLinkSpawned onLinkSpawned;
    
    UPROPERTY(EditAnywhere)
    AALT_NavLink* linker;
    
    UPROPERTY(EditAnywhere)
    AALT_NavLink* linkerUp;
    
    UPROPERTY()
    FTimerHandle Timer;
    
    UPROPERTY()
    UWorld* World;
    
    UPROPERTY()
    bool isDone;
    
    UPROPERTY()
    UNavigationSystemV1* navSystem;
    
    UPROPERTY(EditAnywhere)
    int32 step;
    
    UPROPERTY(EditAnywhere)
    int32 entityMaxHeight;
    
    UPROPERTY(EditAnywhere)
    int32 entityMaxRadius;
    
    UPROPERTY(EditAnywhere)
    int32 minFallHeight;
    
    UPROPERTY(EditAnywhere)
    int32 maxFallHeight;
    
    UPROPERTY(EditAnywhere)
    int32 minJumpHeight;
    
    UPROPERTY(EditAnywhere)
    int32 maxJumpHeight;
    
    UPROPERTY(EditAnywhere)
    int32 receptionPointDistFromLedge;
    
    UPROPERTY(EditAnywhere)
    int32 blockingWallMinHeight;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector Extent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AALT_NavLink> _navLinkToSpawn;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> groundLayer;
    
    UPROPERTY(EditAnywhere)
    bool doBridges;
    
    UPROPERTY(EditAnywhere)
    int32 bridgesDeltaHeight;
    
    UPROPERTY(EditAnywhere)
    int32 bridgesMaxLength;
    
    UPROPERTY(EditAnywhere)
    bool canDebug;
    
    UPROPERTY()
    TArray<FVector> allPoints;
    
public:
    AALT_AutoLinker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static FVector GetDirection2D(const FVector& _start, const FVector& _end);
    
protected:
    UFUNCTION()
    void GenerateLinks();
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateLink();
    
    UFUNCTION(BlueprintCallable)
    void ClearLink();
    
};

