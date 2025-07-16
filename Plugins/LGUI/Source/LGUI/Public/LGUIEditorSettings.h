#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LGUIEditorSettings.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class LGUI_API ULGUIEditorSettings : public UObject {
    GENERATED_BODY()
public:
    ULGUIEditorSettings();

};

