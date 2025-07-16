#pragma once
#include "CoreMinimal.h"
#include "ELGUIInteractionTarget.h"
#include "LGUIBaseRaycaster.h"
#include "LGUIWorldSpaceRaycaster.generated.h"

class ULGUIWorldSpaceRaycasterSource;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIWorldSpaceRaycaster : public ULGUIBaseRaycaster {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ELGUIInteractionTarget interactionTarget;
    
    UPROPERTY(EditAnywhere)
    bool bRequireFaceIndex;
    
    UPROPERTY(EditAnywhere, Instanced)
    ULGUIWorldSpaceRaycasterSource* RaycasterSourceObject;
    
public:
    ULGUIWorldSpaceRaycaster(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRaycasterSourceObject(ULGUIWorldSpaceRaycasterSource* NewSource);
    
    UFUNCTION(BlueprintPure)
    ULGUIWorldSpaceRaycasterSource* GetRaycasterSourceObject() const;
    
};

