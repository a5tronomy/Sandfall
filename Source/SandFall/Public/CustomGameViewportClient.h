#pragma once
#include "CoreMinimal.h"
#include "CommonGameViewportClient.h"
#include "CustomGameViewportClient.generated.h"

UCLASS(NonTransient)
class SANDFALL_API UCustomGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
    UCustomGameViewportClient();

};

