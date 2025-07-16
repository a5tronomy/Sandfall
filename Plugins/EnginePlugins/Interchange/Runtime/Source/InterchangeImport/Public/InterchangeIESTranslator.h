#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeTextureLightProfilePayloadInterface.h"
#include "InterchangeIESTranslator.generated.h"

UCLASS()
class INTERCHANGEIMPORT_API UInterchangeIESTranslator : public UInterchangeTranslatorBase, public IInterchangeTextureLightProfilePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeIESTranslator();


    // Fix for true pure virtual functions not being implemented
};

