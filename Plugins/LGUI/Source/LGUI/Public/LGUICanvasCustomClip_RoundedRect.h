#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELGUICanvasCustomClip_RoundedRect_UnitMode.h"
#include "LGUICanvasCustomClip.h"
#include "LGUICanvasCustomClip_RoundedRect.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUICanvasCustomClip_RoundedRect : public ULGUICanvasCustomClip {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector4f CornerRadius;
    
    UPROPERTY(EditAnywhere)
    ELGUICanvasCustomClip_RoundedRect_UnitMode CornerRadiusUnitMode;
    
public:
    ULGUICanvasCustomClip_RoundedRect();

    UFUNCTION(BlueprintCallable)
    void SetCornerRadiusUnitMode(ELGUICanvasCustomClip_RoundedRect_UnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCornerRadius(const FVector4f& Value);
    
    UFUNCTION(BlueprintPure)
    ELGUICanvasCustomClip_RoundedRect_UnitMode GetCornerRadiusUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector4f GetCornerRadius() const;
    
};

