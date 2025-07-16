#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraTypes.h"
#include "Layout/Margin.h"
#include "ELGUICanvasClipType.h"
#include "ELGUICanvasRenderTargetSizeMode.h"
#include "ELGUICanvasRenderTargetUpdateMode.h"
#include "ELGUIRenderMode.h"
#include "LGUIMaterialArrayContainer.h"
#include "Templates/SubclassOf.h"
#include "LGUICanvas.generated.h"

class ULGUICanvas;
class ULGUICanvasCustomClip;
class ULGUIMeshComponent;
class UMaterialInterface;
class UTexture2D;
class UTextureRenderTarget2D;
class UUIItem;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUICanvas : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<ULGUICanvas> RootCanvas;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<ULGUICanvas> ParentCanvas;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> UIItem;
    
    UPROPERTY(EditAnywhere)
    ELGUIRenderMode renderMode;
    
    UPROPERTY(EditAnywhere)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(EditAnywhere)
    ELGUICanvasRenderTargetUpdateMode RenderTargetUpdateMode;
    
    UPROPERTY(EditAnywhere)
    ELGUICanvasRenderTargetSizeMode RenderTargetSizeMode;
    
    UPROPERTY(EditAnywhere)
    float RenderTargetResolutionScale;
    
    UPROPERTY(EditAnywhere)
    bool pixelPerfect;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSorting;
    
    UPROPERTY(EditAnywhere)
    int16 SortOrder;
    
    UPROPERTY(EditAnywhere)
    ELGUICanvasClipType clipType;
    
    UPROPERTY(EditAnywhere)
    FVector2D clipFeather;
    
    UPROPERTY(EditAnywhere)
    FMargin clipRectOffset;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* ClipTexture;
    
    UPROPERTY(EditAnywhere)
    float clipTextureHitTestThreshold;
    
    UPROPERTY(EditAnywhere)
    bool inheritRectClip;
    
    UPROPERTY(EditAnywhere, Instanced)
    ULGUICanvasCustomClip* customClip;
    
    UPROPERTY(EditAnywhere)
    float dynamicPixelsPerUnit;
    
    UPROPERTY(EditAnywhere)
    int8 additionalShaderChannels;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DefaultMaterials[3];
    
    UPROPERTY(EditAnywhere)
    float BlendDepth;
    
    UPROPERTY(EditAnywhere)
    int32 depthFade;
    
    UPROPERTY(EditAnywhere)
    bool bEnableDepthTest;
    
    UPROPERTY(EditAnywhere)
    int8 OverrideParameters;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSubclassOf<ULGUIMeshComponent> DefaultMeshType;
    
private:
    UPROPERTY(AdvancedDisplay, Export, Transient, VisibleAnywhere)
    TWeakObjectPtr<ULGUIMeshComponent> UIMesh;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    TArray<FLGUIMaterialArrayContainer> PooledUIMaterialList;
    
    UPROPERTY(AdvancedDisplay, Instanced, Transient, VisibleAnywhere)
    TArray<UUIItem*> UIRenderableList;
    
    UPROPERTY(AdvancedDisplay, Instanced, Transient, VisibleAnywhere)
    TArray<UUIItem*> UIItemList;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<ULGUICanvas>> ChildrenCanvasArray;
    
public:
    ULGUICanvas(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSortOrderToLowestOfHierarchy(bool propagateToChildrenCanvas);
    
    UFUNCTION(BlueprintCallable)
    void SetSortOrderToHighestOfHierarchy(bool propagateToChildrenCanvas);
    
    UFUNCTION(BlueprintCallable)
    void SetSortOrder(int32 NewValue, bool propagateToChildrenCanvas);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTargetUpdateMode(ELGUICanvasRenderTargetUpdateMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTargetSizeMode(ELGUICanvasRenderTargetSizeMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTargetResolutionScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTarget(UTextureRenderTarget2D* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderMode(ELGUIRenderMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRectClipOffset(FMargin newOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetRectClipFeather(FVector2D newFeather);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectionParameters(TEnumAsByte<ECameraProjectionMode::Type> InProjectionType, float InFovAngle, float InNearClipPlane, float InFarClipPlane);
    
    UFUNCTION(BlueprintCallable)
    void SetPixelPerfect(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideViewRotation(bool InOverride, FRotator InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideViewLoation(bool InOverride, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideSorting(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideProjectionMatrix(bool InOverride, FMatrix InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideFovAngle(bool InOverride, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInheriRectClip(bool newBool);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDepthTest(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicPixelsPerUnit(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDepthFade(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultMeshType(TSubclassOf<ULGUIMeshComponent> InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultMaterials(const TArray<UMaterialInterface*>& InMaterialArray);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomClip(ULGUICanvasCustomClip* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetClipType(ELGUICanvasClipType newClipType);
    
    UFUNCTION(BlueprintCallable)
    void SetClipTexture(UTexture2D* newTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendDepth(float Value);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdateForRenderTarget();
    
    UFUNCTION(BlueprintPure)
    UUIItem* GetUIItem() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSortOrder() const;
    
    UFUNCTION(BlueprintPure)
    ULGUICanvas* GetRootCanvas() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRequireUV3() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRequireUV2() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRequireUV1() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRequireTangent() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRequireNormal() const;
    
    UFUNCTION(BlueprintPure)
    ELGUICanvasRenderTargetUpdateMode GetRenderTargetUpdateMode() const;
    
    UFUNCTION(BlueprintPure)
    ELGUICanvasRenderTargetSizeMode GetRenderTargetSizeMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetRenderTargetResolutionScale() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
    UFUNCTION(BlueprintPure)
    ELGUIRenderMode GetRenderMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPixelPerfect() const;
    
    UFUNCTION(BlueprintPure)
    bool GetOverrideSorting() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInheritRectClip() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableDepthTest() const;
    
    UFUNCTION(BlueprintPure)
    float GetDynamicPixelsPerUnit() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDepthFade() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ULGUIMeshComponent> GetDefaultMeshType() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMaterialInterface*> GetDefaultMaterials() const;
    
    UFUNCTION(BlueprintPure)
    ULGUICanvasCustomClip* GetCustomClip() const;
    
    UFUNCTION(BlueprintPure)
    ELGUICanvasClipType GetClipType() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetClipTexture() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetClipFeather() const;
    
    UFUNCTION(BlueprintPure)
    float GetBlendDepth() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActualSortOrder() const;
    
    UFUNCTION(BlueprintPure)
    ELGUICanvasRenderTargetUpdateMode GetActualRenderTargetUpdateMode() const;
    
    UFUNCTION(BlueprintPure)
    ELGUICanvasRenderTargetSizeMode GetActualRenderTargetSizeMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetActualRenderTargetResolutionScale() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetActualRenderTarget() const;
    
    UFUNCTION(BlueprintPure)
    ELGUIRenderMode GetActualRenderMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetActualPixelPerfect() const;
    
    UFUNCTION(BlueprintPure)
    float GetActualDynamicPixelsPerUnit() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActualDepthFade() const;
    
    UFUNCTION(BlueprintPure)
    ULGUICanvasCustomClip* GetActualCustomClip() const;
    
    UFUNCTION(BlueprintPure)
    ELGUICanvasClipType GetActualClipType() const;
    
    UFUNCTION(BlueprintPure)
    float GetActualBlendDepth() const;
    
};

