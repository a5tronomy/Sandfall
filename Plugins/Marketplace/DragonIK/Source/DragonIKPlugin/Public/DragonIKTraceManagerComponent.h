#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DragonIKFootSolverTraceDataDelegate.h"
#include "DragonIKTraceKeyValuePair.h"
#include "DragonIKTraceManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DRAGONIKPLUGIN_API UDragonIKTraceManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName read_this;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Is_Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShow_Spine_Trace_Lines_InGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShow_Foot_Trace_Lines_InGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FDragonIKFootSolverTraceData OnDragonikFootHitData;
    
    UDragonIKTraceManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void SpineSolverTraceData(const TArray<FDragonIKTraceKeyValuePair>& hit_data_pair);
    
};

