#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "ELGUIEventFireType.h"
#include "LGUIBaseRaycaster.generated.h"

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIBaseRaycaster : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 pointerID;
    
    UPROPERTY(EditAnywhere)
    int32 Depth;
    
    UPROPERTY(EditAnywhere)
    float rayLength;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(EditAnywhere)
    ELGUIEventFireType eventFireType;
    
    UPROPERTY(EditAnywhere)
    float clickThreshold;
    
    UPROPERTY(EditAnywhere)
    bool holdToDrag;
    
    UPROPERTY(EditAnywhere)
    float holdToDragTime;
    
public:
    ULGUIBaseRaycaster(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHoldToDragTime(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldToDrag(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetClickThreshold(float Value);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETraceTypeQuery> GetTraceChannel() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRayOrigin() const;
    
    UFUNCTION(BlueprintPure)
    float GetRayLength() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRayDirection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPointerID() const;
    
    UFUNCTION(BlueprintPure)
    float GetHoldToDragTime() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHoldToDrag() const;
    
    UFUNCTION(BlueprintPure)
    ELGUIEventFireType GetEventFireType() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDepth() const;
    
    UFUNCTION(BlueprintPure)
    float GetClickThreshold() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAffectByGamePause() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateRaycaster();
    
    UFUNCTION(BlueprintCallable)
    void ActivateRaycaster();
    
};

