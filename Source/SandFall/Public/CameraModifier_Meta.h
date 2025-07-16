#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraModifier_MetaWrapper.h"
#include "CameraModifier_Meta.generated.h"

class UCameraModifier;
class UCameraModifier_Meta;

UCLASS(Abstract, BlueprintType, DefaultToInstanced, EditInlineNew)
class SANDFALL_API UCameraModifier_Meta : public UObject {
    GENERATED_BODY()
public:
    UCameraModifier_Meta();

    UFUNCTION(BlueprintCallable)
    void SetTargetCameraModifier(UCameraModifier* _cameraModifier);
    
    UFUNCTION(BlueprintPure)
    static void GetCameraMetaModifier(const FCameraModifier_MetaWrapper& _wrapper, UCameraModifier_Meta*& OutMetaModifier);
    
};

