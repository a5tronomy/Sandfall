#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniLandscapeOutput.generated.h"

class ALandscape;
class UHoudiniLandscapeTargetLayerOutput;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeOutput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    ALandscape* Landscape;
    
    UPROPERTY()
    FString BakedName;
    
    UPROPERTY()
    TArray<UHoudiniLandscapeTargetLayerOutput*> Layers;
    
    UPROPERTY()
    bool bCreated;
    
    UHoudiniLandscapeOutput();

};

