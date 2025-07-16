#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UI2DLineRendererBase.h"
#include "UI2DLineChildrenAsPoints.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUI2DLineChildrenAsPoints : public UUI2DLineRendererBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FVector2D> CurrentPointArray;
    
public:
    UUI2DLineChildrenAsPoints(const FObjectInitializer& ObjectInitializer);

};

