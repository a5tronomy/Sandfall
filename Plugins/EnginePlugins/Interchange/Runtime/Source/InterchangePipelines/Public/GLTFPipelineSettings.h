#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "GLTFPipelineSettings.generated.h"

UCLASS(Config=Interchange)
class INTERCHANGEPIPELINES_API UGLTFPipelineSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FSoftObjectPath> MaterialParents;
    
    UGLTFPipelineSettings();

};

