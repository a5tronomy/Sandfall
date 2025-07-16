#pragma once
#include "CoreMinimal.h"
#include "LGUIComponentReference.h"
#include "LGUIPrefabInterface.h"
#include "LGUIRenderTargetInteractionSourceInterface.h"
#include "UICustomMesh.h"
#include "UIRenderTarget.generated.h"

class ULGUICanvas;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIRenderTarget : public UUICustomMesh, public ILGUIPrefabInterface, public ILGUIRenderTargetInteractionSourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FLGUIComponentReference TargetCanvas;
    
public:
    UUIRenderTarget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCanvas(ULGUICanvas* Value);
    
    UFUNCTION(BlueprintPure)
    ULGUICanvas* GetCanvas() const;
    

    // Fix for true pure virtual functions not being implemented
};

