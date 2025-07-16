#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "ALSMovementSettings.h"
#include "EALSGait.h"
#include "ALSCharacterMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALSV4_CPP_API UALSCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AvoidanceCapsuleComponentTag;
    
    UPROPERTY()
    uint8 bRequestMovementSettingsChange;
    
    UPROPERTY()
    EALSGait AllowedGait;
    
    UPROPERTY(BlueprintReadOnly)
    FALSMovementSettings CurrentMovementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseMovementSettingsWhenFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMovementMode> CustomDefaultMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AgentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceUseNavMeshWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshWalkingSearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshWalkingHeightSearchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DebugDisplayNavMeshWalkingLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForcePositionOnNavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DebugDisplayForcePositionOnNavMeshLifetime;
    
    UALSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMovementSettings(FALSMovementSettings NewMovementSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedGait(EALSGait NewAllowedGait);
    
    UFUNCTION(Reliable, Server)
    void Server_SetAllowedGait(EALSGait NewAllowedGait);
    
};

