#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeMaterialXTranslator.generated.h"

UCLASS()
class INTERCHANGEIMPORT_API UInterchangeMaterialXTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeMaterialXTranslator();


    // Fix for true pure virtual functions not being implemented
};

