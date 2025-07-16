#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UIItemEditorHelperComp.generated.h"

class UBodySetup;
class UUIItem;

UCLASS(Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIItemEditorHelperComp : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UUIItem* Parent;
    
    UPROPERTY(Transient)
    UBodySetup* BodySetup;
    
    UUIItemEditorHelperComp(const FObjectInitializer& ObjectInitializer);

};

