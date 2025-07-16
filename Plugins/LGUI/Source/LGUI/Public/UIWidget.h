#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"
#include "LGUIPrefabInterface.h"
#include "Templates/SubclassOf.h"
#include "UICustomMesh.h"
#include "UIWidget.generated.h"

class UTextureRenderTarget2D;
class UUserWidget;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIWidget : public UUICustomMesh, public ILGUIPrefabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EWidgetTimingPolicy TimingPolicy;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(EditAnywhere)
    bool bManuallyRedraw;
    
    UPROPERTY(EditAnywhere)
    float RedrawTime;
    
    UPROPERTY(EditAnywhere)
    float ResolutionScale;
    
    UPROPERTY(EditAnywhere)
    bool bWindowFocusable;
    
    UPROPERTY(EditAnywhere)
    EWindowVisibility WindowVisibility;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bApplyGammaCorrection;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(EditAnywhere)
    bool TickWhenOffscreen;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(EditAnywhere)
    ETickMode TickMode;
    
private:
    UPROPERTY(DuplicateTransient, Instanced, Transient)
    UUserWidget* Widget;
    
public:
    UUIWidget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWindowVisibility(EWindowVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowFocusable(bool bInWindowFocusable);
    
    UFUNCTION(BlueprintCallable)
    void SetWidget(UUserWidget* NewWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetTickWhenOffscreen(const bool bWantTickWhenOffscreen);
    
    UFUNCTION(BlueprintCallable)
    void SetTickMode(ETickMode InTickMode);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRedrawTime(float InRedrawTime);
    
    UFUNCTION(BlueprintCallable)
    void SetManuallyRedraw(bool bUseManualRedraw);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(const FLinearColor NewBackgroundColor);
    
    UFUNCTION(BlueprintCallable)
    void RequestRenderUpdate();
    
    UFUNCTION(BlueprintPure)
    bool IsWidgetVisible() const;
    
    UFUNCTION(BlueprintPure)
    EWindowVisibility GetWindowVisiblility() const;
    
    UFUNCTION(BlueprintPure)
    bool GetWindowFocusable() const;
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetWidget() const;
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetUserWidgetObject() const;
    
    UFUNCTION(BlueprintPure)
    bool GetTickWhenOffscreen() const;
    
    UFUNCTION(BlueprintPure)
    float GetResolutionScale() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
    UFUNCTION(BlueprintPure)
    float GetRedrawTime() const;
    
    UFUNCTION(BlueprintPure)
    bool GetManuallyRedraw() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCurrentDrawSize() const;
    

    // Fix for true pure virtual functions not being implemented
};

