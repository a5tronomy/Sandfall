#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MaterialTypes.h"
#include "ESkinnedDecalAdditionalData.h"
#include "ESkinnedDecalBlendMode.h"
#include "SkinnedDecalData.h"
#include "SkinnedDecalSamplerState.h"
#include "SkinnedDecalSampler.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USkeletalMeshComponent;
class USkinnedDecalInstance;
class USkinnedDecalSampler;
class UTextureRenderTarget2D;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SKINNEDDECALCOMPONENT_API USkinnedDecalSampler : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDecalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESkinnedDecalBlendMode> BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> OverlayBlendMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMaterialParameterAssociation> Association;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESkinnedDecalAdditionalData> AdditionalData;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableSaveGame;
    
    UPROPERTY()
    TMap<USkinnedDecalInstance*, int32> InstanceMap;
    
    UPROPERTY()
    UMaterialInstanceDynamic* OverlayBlendMaterialDynamic;
    
    UPROPERTY(Instanced)
    TArray<USkeletalMeshComponent*> RenderMeshes;
    
    UPROPERTY()
    UTextureRenderTarget2D* DataTarget;
    
private:
    UPROPERTY()
    FSkinnedDecalSamplerState SamplerState;
    
public:
    USkinnedDecalSampler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UpdateInstance(USkinnedDecalInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllDecals();
    
    UFUNCTION()
    void SpawnDecalFromData(FSkinnedDecalData Data);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnDecal(FVector Location, const FQuat Rotation, FName BoneName, float Size, int32 SubUV, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetupMaterials();
    
    UFUNCTION(BlueprintCallable)
    void SetupComponentMaterials(USkeletalMeshComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetSamplerState(FSkinnedDecalSamplerState State);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshComponent(USkeletalMeshComponent* MeshComponent, bool Child);
    
    UFUNCTION(BlueprintCallable)
    void SaveSampler(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDecal(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void LoadSampler(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    FSkinnedDecalSamplerState GetSamplerState();
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetDataTarget();
    
    UFUNCTION(BlueprintCallable)
    void CloneDecals(USkinnedDecalSampler* Source);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDecals();
    
    UFUNCTION(BlueprintCallable)
    void AutoSetup();
    
};

