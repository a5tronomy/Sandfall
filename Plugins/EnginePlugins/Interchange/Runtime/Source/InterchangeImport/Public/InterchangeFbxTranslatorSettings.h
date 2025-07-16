#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeFbxTranslatorSettings.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UInterchangeFbxTranslatorSettings : public UInterchangeTranslatorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bConvertScene;
    
    UPROPERTY(EditAnywhere)
    bool bForceFrontXAxis;
    
    UPROPERTY(EditAnywhere)
    bool bConvertSceneUnit;
    
    UInterchangeFbxTranslatorSettings();

};

