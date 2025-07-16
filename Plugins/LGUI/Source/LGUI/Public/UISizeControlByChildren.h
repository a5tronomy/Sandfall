#pragma once
#include "CoreMinimal.h"
#include "UILayoutWithChildren.h"
#include "UISizeControlByChildren.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISizeControlByChildren : public UUILayoutWithChildren {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bWidthFitToChildren;
    
    UPROPERTY(EditAnywhere)
    float AdditionalWidth;
    
    UPROPERTY(EditAnywhere)
    bool bHeightFitToChildren;
    
    UPROPERTY(EditAnywhere)
    float AdditionalHeight;
    
public:
    UUISizeControlByChildren(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidthFitToChildren(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFitToChildren(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalWidth(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalHeight(float Value);
    
    UFUNCTION(BlueprintPure)
    bool GetWidthFitToChildren() const;
    
    UFUNCTION(BlueprintPure)
    float GetHeightFitToChildren() const;
    
    UFUNCTION(BlueprintPure)
    float GetAdditionalWidth() const;
    
    UFUNCTION(BlueprintPure)
    float GetAdditionalHeight() const;
    
};

