#pragma once
#include "CoreMinimal.h"
#include "EUISizeControlByAspectRatioMode.h"
#include "UILayoutWithAnimation.h"
#include "UISizeControlByAspectRatio.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISizeControlByAspectRatio : public UUILayoutWithAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EUISizeControlByAspectRatioMode ControlMode;
    
    UPROPERTY(EditAnywhere)
    float AspectRatio;
    
public:
    UUISizeControlByAspectRatio(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetControlMode(EUISizeControlByAspectRatioMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAspectRatio(float Value);
    
    UFUNCTION(BlueprintPure)
    EUISizeControlByAspectRatioMode GetControlMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetAspectRatio() const;
    
};

