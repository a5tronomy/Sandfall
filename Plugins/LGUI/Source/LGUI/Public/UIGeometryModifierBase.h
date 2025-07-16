#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UIGeometryModifierBase.generated.h"

class ULGUIGeometryModifierHelper;
class UUIBatchMeshRenderable;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIGeometryModifierBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    UPROPERTY(EditAnywhere)
    int32 executeOrder;
    
    UPROPERTY(Transient)
    ULGUIGeometryModifierHelper* GeometryModifierHelper;
    
public:
    UUIGeometryModifierBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExecuteOrder();
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool Value);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveModifyUIGeometry(ULGUIGeometryModifierHelper* InGeometryModifierHelper);
    
public:
    UFUNCTION(BlueprintPure)
    UUIBatchMeshRenderable* GetUIRenderable() const;
    
    UFUNCTION(BlueprintPure)
    UUIBatchMeshRenderable* GetRenderableUIItem() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetExecuteOrder() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnable() const;
    
};

