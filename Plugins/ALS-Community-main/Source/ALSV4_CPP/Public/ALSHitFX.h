#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/DataTable.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EALSSpawnType.h"
#include "ALSHitFX.generated.h"

class UMaterialInterface;
class UNiagaraSystem;
class USoundBase;

USTRUCT()
struct FALSHitFX : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USoundBase> Sound;
    
    UPROPERTY(EditAnywhere)
    EALSSpawnType SoundSpawnType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAttachLocation::Type> SoundAttachmentType;
    
    UPROPERTY(EditAnywhere)
    FVector SoundLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator SoundRotationOffset;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> DecalMaterial;
    
    UPROPERTY(EditAnywhere)
    EALSSpawnType DecalSpawnType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAttachLocation::Type> DecalAttachmentType;
    
    UPROPERTY(EditAnywhere)
    float DecalLifeSpan;
    
    UPROPERTY(EditAnywhere)
    FVector DecalSize;
    
    UPROPERTY(EditAnywhere)
    FVector DecalLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator DecalRotationOffset;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> NiagaraSystem;
    
    UPROPERTY(EditAnywhere)
    EALSSpawnType NiagaraSpawnType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAttachLocation::Type> NiagaraAttachmentType;
    
    UPROPERTY(EditAnywhere)
    FVector NiagaraLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator NiagaraRotationOffset;
    
    ALSV4_CPP_API FALSHitFX();
};

