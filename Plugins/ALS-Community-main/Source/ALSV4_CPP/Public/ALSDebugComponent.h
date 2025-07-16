#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ALSDebugComponent.generated.h"

class AALSBaseCharacter;
class APlayerController;
class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALSV4_CPP_API UALSDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AALSBaseCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSlomo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowHUD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowCharacterInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* DebugSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AALSBaseCharacter*> AvailableDebugCharacters;
    
    UPROPERTY(BlueprintReadOnly)
    AALSBaseCharacter* DebugFocusCharacter;
    
private:
    UPROPERTY()
    USkeletalMesh* DefaultSkeletalMesh;
    
public:
    UALSDebugComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateColoringSystem();
    
    UFUNCTION(BlueprintCallable)
    void ToggleTraces();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSlomo();
    
    UFUNCTION(BlueprintCallable)
    void ToggleLayerColors();
    
    UFUNCTION(BlueprintCallable)
    void ToggleHud();
    
    UFUNCTION(BlueprintCallable)
    void ToggleGlobalTimeDilationLocal(float TimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugView();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugShapes();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugMesh();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCharacterInfo();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetResetColors();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDynamicMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OverlayMenuCycle(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenOverlayMenu(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerControllerInitialized(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    bool GetShowTraces();
    
    UFUNCTION(BlueprintCallable)
    bool GetShowLayerColors();
    
    UFUNCTION(BlueprintCallable)
    bool GetShowDebugShapes();
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugView();
    
    UFUNCTION(BlueprintCallable)
    void FocusedDebugCharacterCycle(bool bValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DrawDebugSpheres();
    
};

