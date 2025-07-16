#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OVRLipSyncVisemesDataReadyDelegateDelegate.h"
#include "OVRLipSyncActorComponentBase.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OVRLIPSYNC_API UOVRLipSyncActorComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOVRLipSyncVisemesDataReadyDelegate OnVisemesReady;
    
    UOVRLipSyncActorComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    TArray<float> GetVisemes() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetVisemeNames() const;
    
    UFUNCTION(BlueprintPure)
    float GetLaughterScore() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignVisemesToMorphTargets(USkeletalMeshComponent* Mesh, const TArray<FString>& MorphTargetNames);
    
};

