#pragma once
#include "CoreMinimal.h"
#include "EAttribOwner.h"
#include "EAttribStorageType.h"
#include "HoudiniGenericAttribute.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniGenericAttribute {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString AttributeName;
    
    UPROPERTY()
    EAttribStorageType AttributeType;
    
    UPROPERTY()
    EAttribOwner AttributeOwner;
    
    UPROPERTY()
    int32 AttributeCount;
    
    UPROPERTY()
    int32 AttributeTupleSize;
    
    UPROPERTY()
    TArray<double> DoubleValues;
    
    UPROPERTY()
    TArray<int64> IntValues;
    
    UPROPERTY()
    TArray<FString> StringValues;
    
    FHoudiniGenericAttribute();
};

