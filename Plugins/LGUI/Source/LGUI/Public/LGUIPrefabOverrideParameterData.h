#pragma once
#include "CoreMinimal.h"
#include "LGUIPrefabOverrideParameterData.generated.h"

class UObject;

USTRUCT()
struct LGUI_API FLGUIPrefabOverrideParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UObject> Object;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MemberPropertyNames;
    
    FLGUIPrefabOverrideParameterData();
};

