#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraTypes.h"
#include "ELGUICanvasScaleMode.h"
#include "ELGUICanvasScreenMatchMode.h"
#include "LGUILifeCycleBehaviour.h"
#include "LGUICanvasScaler.generated.h"

class APlayerController;
class ULGUICanvasScalerCustomScale;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUICanvasScaler : public ULGUILifeCycleBehaviour {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionType;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float FOVAngle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float NearClipPlane;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float FarClipPlane;
    
    UPROPERTY(EditAnywhere)
    ELGUICanvasScaleMode UIScaleMode;
    
    UPROPERTY(EditAnywhere)
    FVector2D ReferenceResolution;
    
    UPROPERTY(EditAnywhere)
    float MatchFromWidthToHeight;
    
    UPROPERTY(EditAnywhere)
    ELGUICanvasScreenMatchMode ScreenMatchMode;
    
    UPROPERTY(EditAnywhere, Instanced)
    ULGUICanvasScalerCustomScale* CustomScale;
    
public:
    ULGUICanvasScaler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUIScaleMode(ELGUICanvasScaleMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenMatchMode(ELGUICanvasScreenMatchMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetReferenceResolution(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectionType(TEnumAsByte<ECameraProjectionMode::Type> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNearClipPlane(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchFromWidthToHeight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFovAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFarClipPlane(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomScale(ULGUICanvasScalerCustomScale* Value);
    
    UFUNCTION(BlueprintPure)
    bool ProjectWorldToScreen(APlayerController* Player, const FVector& Position3D, FVector2D& OutPosition2D) const;
    
    UFUNCTION(BlueprintPure)
    bool Project3DToScreen(const FVector& Position3D, FVector2D& OutPosition2D) const;
    
    UFUNCTION(BlueprintCallable)
    ELGUICanvasScaleMode GetUIScaleMode();
    
    UFUNCTION(BlueprintCallable)
    ELGUICanvasScreenMatchMode GetScreenMatchMode();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetReferenceResolution();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECameraProjectionMode::Type> GetProjectionType() const;
    
    UFUNCTION(BlueprintPure)
    float GetNearClipPlane() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMatchFromWidthToHeight();
    
    UFUNCTION(BlueprintPure)
    float GetFOVAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetFarClipPlane() const;
    
    UFUNCTION(BlueprintPure)
    ULGUICanvasScalerCustomScale* GetCustomScale() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdate();
    
    UFUNCTION(BlueprintPure)
    FVector2D ConvertPositionFromViewportToLGUICanvas(const FVector2D& position) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D ConvertPositionFromLGUICanvasToViewport(const FVector2D& position) const;
    
};

