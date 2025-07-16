#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeJPGTranslator.generated.h"

UCLASS()
class INTERCHANGEIMPORT_API UInterchangeJPGTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeJPGTranslator();


    // Fix for true pure virtual functions not being implemented
};

