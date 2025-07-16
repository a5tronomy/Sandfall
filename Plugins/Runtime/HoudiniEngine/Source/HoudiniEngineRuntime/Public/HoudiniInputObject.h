#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniInputObjectType.h"
#include "HoudiniInputObjectSettings.h"
#include "HoudiniInputObject.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<UObject> InputObject;
    
    UPROPERTY()
    EHoudiniInputObjectType Type;
    
    UPROPERTY(DuplicateTransient)
    FGuid Guid;
    
protected:
    UPROPERTY(DuplicateTransient)
    bool bHasChanged;
    
    UPROPERTY(DuplicateTransient)
    bool bNeedsToTriggerUpdate;
    
    UPROPERTY(DuplicateTransient)
    bool bTransformChanged;
    
    UPROPERTY()
    TArray<FString> MaterialReferences;
    
    UPROPERTY()
    FHoudiniInputObjectSettings CachedInputSettings;
    
    UPROPERTY()
    bool bCanDeleteHoudiniNodes;
    
    UPROPERTY()
    bool bInputNodeHandleOverridesNodeIds;
    
    UPROPERTY()
    FTransform Transform;
    
public:
    UPROPERTY()
    FRotator UserInputRotator;
    
private:
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 InputNodeId;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 InputObjectNodeId;
    
public:
    UHoudiniInputObject();

};

