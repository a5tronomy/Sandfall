#pragma once
#include "CoreMinimal.h"
#include "UILayoutWithAnimation.h"
#include "UISizeControlByOther.generated.h"

class AUIBaseActor;
class UUIItem;
class UUISizeControlByOtherHelper;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISizeControlByOther : public UUILayoutWithAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseActor> TargetActor;
    
    UPROPERTY(EditAnywhere)
    bool ControlWidth;
    
    UPROPERTY(EditAnywhere)
    float AdditionalWidth;
    
    UPROPERTY(EditAnywhere)
    bool ControlHeight;
    
    UPROPERTY(EditAnywhere)
    float AdditionalHeight;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> TargetUIItem;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUISizeControlByOtherHelper> HelperComp;
    
public:
    UUISizeControlByOther(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetActor(AUIBaseActor* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlWidth(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlHeight(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalWidth(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalHeight(float Value);
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControlWidth() const;
    
    UFUNCTION(BlueprintPure)
    bool GetControlHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetAdditionalWidth() const;
    
    UFUNCTION(BlueprintPure)
    float GetAdditionalHeight() const;
    
};

