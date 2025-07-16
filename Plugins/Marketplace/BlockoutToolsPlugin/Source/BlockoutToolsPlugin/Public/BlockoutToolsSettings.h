#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EBlockoutMaterialType.h"
#include "BlockoutToolsSettings.generated.h"

UCLASS(DefaultConfig, Config=BlockoutTools)
class BLOCKOUTTOOLSPLUGIN_API UBlockoutToolsSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EBlockoutMaterialType> BlockoutMaterialType;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor BlockoutMaterialColor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bBlockoutMaterialUseGrid;
    
    UPROPERTY(Config, EditAnywhere)
    bool bBlockoutWorldAligned;
    
    UPROPERTY(Config, EditAnywhere)
    float BlockoutMaterialGridSize;
    
    UPROPERTY(Config, EditAnywhere)
    float BlockoutMaterialCheckerLuminance;
    
    UPROPERTY(Config, EditAnywhere)
    float BlockoutMaterialRoughness;
    
    UPROPERTY(Config, EditAnywhere)
    bool bBlockoutMaterialUseTopColor;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor BlockoutMaterialTopColor;
    
    UBlockoutToolsSettings();

};

