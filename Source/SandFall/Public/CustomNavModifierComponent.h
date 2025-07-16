#pragma once
#include "CoreMinimal.h"
#include "NavRelevantComponent.h"
#include "Templates/SubclassOf.h"
#include "CustomNavModifierComponent.generated.h"

class UNavArea;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SANDFALL_API UCustomNavModifierComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 ComponentsToInclude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ComponentTagToIgnore;
    
    UCustomNavModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateNavigationSystem();
    
};

