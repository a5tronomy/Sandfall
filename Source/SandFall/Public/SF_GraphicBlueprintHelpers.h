#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SplineFloatingInstancesData.h"
#include "SF_GraphicBlueprintHelpers.generated.h"

class UInstancedStaticMeshComponent;
class UObject;

UCLASS(BlueprintType)
class SANDFALL_API USF_GraphicBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USF_GraphicBlueprintHelpers();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateSplineFloatingObject(UObject* WorldContextObject, const TArray<UInstancedStaticMeshComponent*>& ISMs, const TArray<FSplineFloatingInstancesData>& SplineInstanceData, const TMap<UInstancedStaticMeshComponent*, float>& MovingDistance, const TMap<UInstancedStaticMeshComponent*, float>& RotatorSpeed, float DeltaSeconds, int32 InstanceCount);
    
    UFUNCTION(BlueprintCallable)
    static void BringToFrontWindow(bool bForced);
    
};

