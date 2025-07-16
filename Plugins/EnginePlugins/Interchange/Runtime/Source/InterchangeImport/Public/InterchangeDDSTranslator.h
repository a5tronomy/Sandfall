#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeSlicedTexturePayloadInterface.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeDDSTranslator.generated.h"

UCLASS()
class INTERCHANGEIMPORT_API UInterchangeDDSTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface, public IInterchangeSlicedTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeDDSTranslator();


    // Fix for true pure virtual functions not being implemented
};

