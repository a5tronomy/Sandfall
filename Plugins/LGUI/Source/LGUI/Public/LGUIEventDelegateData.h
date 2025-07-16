#pragma once
#include "CoreMinimal.h"
#include "ELGUIEventDelegateParameterType.h"
#include "LGUIEventDelegateData.generated.h"

class AActor;
class UFunction;
class UObject;

USTRUCT()
struct LGUI_API FLGUIEventDelegateData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    AActor* HelperActor;
    
    UPROPERTY(VisibleAnywhere)
    UClass* HelperClass;
    
    UPROPERTY(VisibleAnywhere)
    FName HelperComponentName;
    
    UPROPERTY(EditAnywhere, Transient)
    UObject* TargetObject;
    
    UPROPERTY(EditAnywhere)
    FName FunctionName;
    
    UPROPERTY(EditAnywhere)
    ELGUIEventDelegateParameterType ParamType;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ParamBuffer;
    
    UPROPERTY(EditAnywhere)
    UObject* ReferenceObject;
    
    UPROPERTY(EditAnywhere)
    bool UseNativeParameter;
    
    UPROPERTY(Transient)
    UFunction* CacheFunction;
    
public:
    FLGUIEventDelegateData();
};

