#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "CategoryRules.h"
#include "HoudiniToolsPackageAsset.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniToolsPackageAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, FCategoryRules> Categories;
    
    UPROPERTY(EditAnywhere)
    FDirectoryPath ExternalPackageDir;
    
    UPROPERTY(EditAnywhere)
    bool bReimportPackageDescription;
    
    UPROPERTY(EditAnywhere)
    bool bExportPackageDescription;
    
    UPROPERTY(EditAnywhere)
    bool bReimportToolsDescription;
    
    UPROPERTY(EditAnywhere)
    bool bExportToolsDescription;
    
    UHoudiniToolsPackageAsset();

};

