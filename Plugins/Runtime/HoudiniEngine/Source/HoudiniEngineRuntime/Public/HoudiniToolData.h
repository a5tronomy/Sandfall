#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EHoudiniToolSelectionType.h"
#include "EHoudiniToolType.h"
#include "HImageData.h"
#include "HoudiniToolData.generated.h"

UCLASS(BlueprintType)
class HOUDINIENGINERUNTIME_API UHoudiniToolData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString Tooltip;
    
    UPROPERTY()
    FHImageData IconImageData;
    
    UPROPERTY()
    FFilePath IconSourcePath;
    
    UPROPERTY()
    FString HelpURL;
    
    UPROPERTY()
    EHoudiniToolType Type;
    
    UPROPERTY()
    bool DefaultTool;
    
    UPROPERTY()
    EHoudiniToolSelectionType SelectionType;
    
    UPROPERTY()
    FFilePath SourceAssetPath;
    
    UHoudiniToolData();

    UFUNCTION(BlueprintCallable)
    bool SaveToJSONFile(const FString& JsonFilePath);
    
    UFUNCTION(BlueprintCallable)
    bool PopulateFromJSONFile(const FString& JsonFilePath);
    
    UFUNCTION(BlueprintCallable)
    bool PopulateFromJSONData(const FString& JSONData);
    
    UFUNCTION(BlueprintPure)
    bool ConvertToJSONData(FString& JSONData) const;
    
};

