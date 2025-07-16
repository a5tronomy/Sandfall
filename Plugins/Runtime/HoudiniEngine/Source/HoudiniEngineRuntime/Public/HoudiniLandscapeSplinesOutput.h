#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniLandscapeSplinesOutput.generated.h"

class ALandscape;
class ALandscapeProxy;
class ALandscapeSplineActor;
class UHoudiniLandscapeSplineTargetLayerOutput;
class ULandscapeSplineControlPoint;
class ULandscapeSplineSegment;
class ULandscapeSplinesComponent;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeSplinesOutput : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ALandscape* Landscape;
    
    UPROPERTY()
    ALandscapeProxy* LandscapeProxy;
    
    UPROPERTY()
    ALandscapeSplineActor* LandscapeSplineActor;
    
    UPROPERTY(Instanced)
    ULandscapeSplinesComponent* LandscapeSplinesComponent;
    
    UPROPERTY()
    TMap<FName, UHoudiniLandscapeSplineTargetLayerOutput*> LayerOutputs;
    
    UPROPERTY()
    TArray<ULandscapeSplineSegment*> Segments;
    
    UPROPERTY()
    TArray<ULandscapeSplineControlPoint*> ControlPoints;
    
public:
    UHoudiniLandscapeSplinesOutput();

};

