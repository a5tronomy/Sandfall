#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangePCXTranslator.generated.h"

UCLASS()
class INTERCHANGEIMPORT_API UInterchangePCXTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangePCXTranslator();


    // Fix for true pure virtual functions not being implemented
};

