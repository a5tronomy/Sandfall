#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELGUIRendererAntiAliasingMethod.h"
#include "ELGUIRendererMSAASampleCount.h"
#include "LGUIAtlasSettings.h"
#include "LGUISettings.generated.h"

UCLASS(Config = Engine)
class LGUI_API ULGUISettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FLGUIAtlasSettings defaultAtlasSetting;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, FLGUIAtlasSettings> atlasSettingForSpecificPackingTag;
    
    UPROPERTY(Config, EditAnywhere)
    int32 PriorityInSceneViewExtension;
    
    UPROPERTY(Config, EditAnywhere)
    float AutoBatchThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    bool bFrustumCulling;
    
    UPROPERTY(Config, EditAnywhere)
    bool bScreenSpaceUIAffectByGamePause;
    
    UPROPERTY(Config, EditAnywhere)
    bool bScreenSpaceUIAffectByTimeDilation;
    
    UPROPERTY(Config, EditAnywhere)
    bool bWorldSpaceUIAffectByGamePause;
    
    UPROPERTY(Config, EditAnywhere)
    bool bWorldSpaceUIAffectByTimeDilation;
    
    UPROPERTY(Config, EditAnywhere)
    ELGUIRendererAntiAliasingMethod AntiAliasingMothod;
    
    UPROPERTY(Config, EditAnywhere)
    ELGUIRendererMSAASampleCount MSAASampleCount;
    
    ULGUISettings();

};

