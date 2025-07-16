#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UI2DLineRendererBase.h"
#include "UI2DLineRaw.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUI2DLineRaw : public UUI2DLineRendererBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FVector2D> PointArray;
    
public:
    UUI2DLineRaw(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPoints(const TArray<FVector2D>& InPoints);
    
};

