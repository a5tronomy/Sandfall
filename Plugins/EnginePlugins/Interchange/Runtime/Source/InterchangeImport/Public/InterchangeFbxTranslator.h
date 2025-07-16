#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeAnimationPayloadInterface.h"
#include "InterchangeMeshPayloadInterface.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeFbxTranslator.generated.h"

UCLASS()
class INTERCHANGEIMPORT_API UInterchangeFbxTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface, public IInterchangeMeshPayloadInterface, public IInterchangeAnimationPayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeFbxTranslator();


    // Fix for true pure virtual functions not being implemented
};

