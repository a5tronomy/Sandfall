#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SandfallGameMode.generated.h"

UCLASS(NonTransient)
class SANDFALL_API ASandfallGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bShouldMakeAppIdleWhenNotForeground;
    
public:
    ASandfallGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreStartPlay();
    
};

