#pragma once
#include "CoreMinimal.h"
#include "NavRelevantComponent.h"
#include "Templates/SubclassOf.h"
#include "DynamicNavModifierComponent.generated.h"

class UNavArea;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SANDFALL_API UDynamicNavModifierComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UNavArea> AreaClass;
    
public:
    UDynamicNavModifierComponent(const FObjectInitializer& ObjectInitializer);

};

