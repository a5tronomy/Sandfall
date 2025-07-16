#pragma once
#include "CoreMinimal.h"
#include "ELayoutElementType.h"
#include "EUILayoutElement_ConstantSizeType.h"
#include "LGUILayoutElementInterface.h"
#include "LGUILifeCycleUIBehaviour.h"
#include "UILayoutElement.generated.h"

class UUILayoutWithChildren;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUILayoutElement : public ULGUILifeCycleUIBehaviour, public ILGUILayoutElementInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UUILayoutWithChildren* ParentLayout;
    
    UPROPERTY(EditAnywhere)
    ELayoutElementType LayoutElementType;
    
    UPROPERTY(EditAnywhere)
    EUILayoutElement_ConstantSizeType ConstantSizeType;
    
    UPROPERTY(EditAnywhere)
    float ConstantSize;
    
    UPROPERTY(EditAnywhere)
    float RatioSize;
    
public:
    UUILayoutElement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRatioSize(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLayoutType(ELayoutElementType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetConstantSizeType(EUILayoutElement_ConstantSizeType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetConstantSize(float Value);
    
    UFUNCTION(BlueprintPure)
    EUILayoutElement_ConstantSizeType GetConstantSizeType() const;
    

    // Fix for true pure virtual functions not being implemented
};

