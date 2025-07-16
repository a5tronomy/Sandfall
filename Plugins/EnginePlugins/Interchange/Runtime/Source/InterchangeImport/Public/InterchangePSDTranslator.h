#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangePSDTranslator.generated.h"

UCLASS()
class INTERCHANGEIMPORT_API UInterchangePSDTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangePSDTranslator();


    // Fix for true pure virtual functions not being implemented
};

