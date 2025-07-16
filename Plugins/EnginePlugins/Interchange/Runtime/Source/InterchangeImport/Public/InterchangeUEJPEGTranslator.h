#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeUEJPEGTranslator.generated.h"

UCLASS()
class INTERCHANGEIMPORT_API UInterchangeUEJPEGTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeUEJPEGTranslator();


    // Fix for true pure virtual functions not being implemented
};

