#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "ALSPlayerController.generated.h"

class AALSBaseCharacter;
class UInputMappingContext;

UCLASS()
class ALSV4_CPP_API AALSPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AALSBaseCharacter* PossessedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bApplyDefaultInputMappingContexts;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UInputMappingContext* DefaultInputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UInputMappingContext* DebugInputMappingContext;
    
    AALSPlayerController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void WalkAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void VelocityDirectionAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void StanceAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void SprintAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void RightMovementAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void RagdollAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void LookingDirectionAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void JumpAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void ForwardMovementAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugToggleTracesAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugToggleSlomoAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugToggleShapesAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugToggleMeshAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugToggleLayerColorsAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugToggleHudAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugToggleDebugViewAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugToggleCharacterInfoAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugOverlayMenuCycleAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugOpenOverlayMenuAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void DebugFocusedCharacterCycleAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void CameraUpAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void CameraTapAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void CameraRightAction(const FInputActionValue& Value);
    
    UFUNCTION()
    void CameraHeldAction(const FInputActionValue& Value);
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool AreStreamingSourcesEnabled() const;
    
protected:
    UFUNCTION()
    void AimAction(const FInputActionValue& Value);
    
};

