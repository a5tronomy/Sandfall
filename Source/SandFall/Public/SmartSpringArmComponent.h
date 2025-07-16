#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "SmartSpringArmComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SANDFALL_API USmartSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDoSmartLineTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmartProbeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> ActorsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UPrimitiveComponent*> PrimitiveComponentsToIgnore;
    
    USmartSpringArmComponent(const FObjectInitializer& ObjectInitializer);

};

