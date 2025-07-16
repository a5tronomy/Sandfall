#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "InterchangeMeshPayloadInterface.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeOBJTranslator.generated.h"

UCLASS()
class INTERCHANGEIMPORT_API UInterchangeOBJTranslator : public UInterchangeTranslatorBase, public IInterchangeMeshPayloadInterface, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeOBJTranslator();


    // Fix for true pure virtual functions not being implemented
};

