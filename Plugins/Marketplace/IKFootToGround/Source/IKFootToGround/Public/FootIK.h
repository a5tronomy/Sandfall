#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EFootIKType.h"
#include "EFootSide.h"
#include "FootCollider.h"
#include "LegInfo.h"
#include "LegInfoArray.h"
#include "LegSetupInfo.h"
#include "FootIK.generated.h"

class ACharacter;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IKFOOTTOGROUND_API UFootIK : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FLegSetupInfo> LegsSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AdjustMeshCoordinate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeshMaxOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> GroundCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTraceByObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootHeightAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseComplexTracing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CalculateOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConstraintKneeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDrawDebugTracing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUpdateLegSizeInRuntime;
    
    UPROPERTY()
    float ConstraintPelvisYMovement;
    
    UPROPERTY()
    float ConstraintPelvisXMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LiftUpInAir;
    
    UPROPERTY(BlueprintReadOnly)
    float IKAlpha;
    
protected:
    UPROPERTY()
    ACharacter* PlayerCharacter;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* CharacterMesh;
    
    UPROPERTY()
    bool bIsInitialized;
    
    UPROPERTY()
    bool bIsEnabled;
    
    UPROPERTY()
    TMap<FName, FLegInfo> Legs;
    
    UPROPERTY()
    TArray<FLegInfoArray> LegsArray;
    
    UPROPERTY()
    float DefaultMeshOffset;
    
    UPROPERTY()
    float CrouchedMeshOffset;
    
    UPROPERTY()
    float LastPelvisOffsetX;
    
    UPROPERTY()
    float LastPelvisOffsetY;
    
    UPROPERTY()
    float LastPelvisOffsetZ;
    
    UPROPERTY()
    float DefaultHalfHeight;
    
    UPROPERTY()
    bool WasCrouched;
    
public:
    UFootIK(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void TraceForLeg(FName Tag, bool IsFalling, float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLegEnabled(FName LegName, bool bNewIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void MakeTick(const float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InitLeg(const FName LegTag, const FName ThighBoneName, const FName CalfBoneName, const FName FootBoneName, const EFootSide Side, const FFootCollider& FootCollider);
    
    UFUNCTION(BlueprintCallable)
    void InitializeComp();
    
    UFUNCTION(BlueprintPure)
    FVector GetLocalFootGround(const FName LegTag);
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetLastFootCollision(FName LegName) const;
    
    UFUNCTION(BlueprintPure)
    float GetFootRotation(const FName LegTag) const;
    
    UFUNCTION(BlueprintPure)
    EFootIKType GetFootGroundIKState(const FName& LegTag) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFootGround(const FName LegTag);
    
protected:
    UFUNCTION()
    void AddLegToMap(FName Key, const FLegInfo& Data);
    
};

