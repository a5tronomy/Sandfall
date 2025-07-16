#include "SandfallGameMode.h"

ASandfallGameMode::ASandfallGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowTickBeforeBeginPlay = false;
    this->bShouldMakeAppIdleWhenNotForeground = false;
}



