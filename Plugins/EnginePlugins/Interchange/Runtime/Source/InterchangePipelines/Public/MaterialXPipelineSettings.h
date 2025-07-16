#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "MaterialX/InterchangeMaterialXDefinitions.h"
#include "MaterialX/InterchangeMaterialXDefinitions.h"
#include "MaterialX/InterchangeMaterialXDefinitions.h"
#include "MaterialX/InterchangeMaterialXDefinitions.h"
#include "MaterialXPipelineSettings.generated.h"

UCLASS(Config=Interchange)
class INTERCHANGEPIPELINES_API UMaterialXPipelineSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<EInterchangeMaterialXShaders, FSoftObjectPath> PredefinedSurfaceShaders;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EInterchangeMaterialXBSDF, FSoftObjectPath> PredefinedBSDF;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EInterchangeMaterialXEDF, FSoftObjectPath> PredefinedEDF;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<EInterchangeMaterialXVDF, FSoftObjectPath> PredefinedVDF;
    
    UMaterialXPipelineSettings();

};

