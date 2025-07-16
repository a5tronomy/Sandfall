#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MyInterface.generated.h"

UINTERFACE(MinimalAPI)
class UMyInterface : public UInterface {
    GENERATED_BODY()
};

class IMyInterface : public IInterface {
    GENERATED_BODY()
public:
};

