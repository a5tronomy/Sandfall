#pragma once
#include "CoreMinimal.h"
#include "StateTreeExecutionTypes.h"
#include "StateTreeSchema.h"
#include "Templates/SubclassOf.h"
#include "StateTreeGameInstanceSchema.generated.h"

class UGameInstance;

UCLASS(CollapseCategories, EditInlineNew)
class UStateTreeGameInstanceSchema : public UStateTreeSchema {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameInstance> ContextGameInstanceClass;
    
    UPROPERTY()
    FStateTreeExternalDataDesc ContextGameInstanceDataDesc;
    
public:
    UStateTreeGameInstanceSchema();

};

