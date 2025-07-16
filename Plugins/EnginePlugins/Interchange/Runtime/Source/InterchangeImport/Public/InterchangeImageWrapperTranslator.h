#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeImageWrapperTranslator.generated.h"

UCLASS()
class INTERCHANGEIMPORT_API UInterchangeImageWrapperTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeImageWrapperTranslator();


    // Fix for true pure virtual functions not being implemented
};

