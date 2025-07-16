#pragma once
#include "CoreMinimal.h"
#include "SF_EngineSettingsData.generated.h"

USTRUCT(BlueprintType)
struct FSF_EngineSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString GameCulture;
    
    UPROPERTY(EditAnywhere)
    FString AudioGameCulture;
    
    UPROPERTY(EditAnywhere)
    int32 OverallScalabilityLevel;
    
    UPROPERTY(EditAnywhere)
    float ResolutionScaleNormalized;
    
    UPROPERTY(EditAnywhere)
    float FrameRateLimit;
    
    UPROPERTY(EditAnywhere)
    bool bUseVSync;
    
    UPROPERTY(EditAnywhere)
    int32 ViewDistanceQuality;
    
    UPROPERTY(EditAnywhere)
    int32 AntiAliasingQuality;
    
    UPROPERTY(EditAnywhere)
    int32 ShadowQuality;
    
    UPROPERTY(EditAnywhere)
    int32 GlobalIlluminationQuality;
    
    UPROPERTY(EditAnywhere)
    int32 ReflectionQuality;
    
    UPROPERTY(EditAnywhere)
    int32 PostProcessQuality;
    
    UPROPERTY(EditAnywhere)
    int32 TextureQuality;
    
    UPROPERTY(EditAnywhere)
    int32 EffectsQuality;
    
    UPROPERTY(EditAnywhere)
    int32 FoliageQuality;
    
    UPROPERTY(EditAnywhere)
    int32 ShadingQuality;
    
    SANDFALL_API FSF_EngineSettingsData();
};

