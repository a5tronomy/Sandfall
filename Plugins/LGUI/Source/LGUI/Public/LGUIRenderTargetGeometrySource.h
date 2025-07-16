#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Interfaces/Interface_CollisionDataProvider.h"
#include "Components/MeshComponent.h"
#include "ELGUIRenderTargetGeometryMode.h"
#include "LGUIComponentReference.h"
#include "LGUIRenderTargetInteractionSourceInterface.h"
#include "LGUIRenderTargetGeometrySource.generated.h"

class UBodySetup;
class ULGUICanvas;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIRenderTargetGeometrySource : public UMeshComponent, public IInterface_CollisionDataProvider, public ILGUIRenderTargetInteractionSourceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FLGUIComponentReference TargetCanvas;
    
    UPROPERTY(EditAnywhere)
    ELGUIRenderTargetGeometryMode GeometryMode;
    
    UPROPERTY(EditAnywhere)
    FVector2D Pivot;
    
    UPROPERTY(EditAnywhere)
    float CylinderArcAngle;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideStaticMeshMaterial;
    
    UPROPERTY(EditAnywhere)
    bool bEnableInteractOnBackside;
    
    UPROPERTY(EditAnywhere)
    bool bFlipVerticalOnGLES;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* BodySetup;
    
    UPROPERTY(DuplicateTransient, Transient)
    UMaterialInstanceDynamic* MaterialInstance;
    
public:
    ULGUIRenderTargetGeometrySource(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPivot(const FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGeometryMode(ELGUIRenderTargetGeometryMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFlipVerticalOnGLES(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableInteractOnBackside(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCylinderArcAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCanvas(ULGUICanvas* Value);
    
    UFUNCTION(BlueprintPure)
    FIntPoint GetRenderTargetSize() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetPivot() const;
    
    UFUNCTION(BlueprintPure)
    bool GetOverrideStaticMeshMaterial() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstance() const;
    
    UFUNCTION(BlueprintPure)
    ELGUIRenderTargetGeometryMode GetGeometryMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFlipVerticalOnGLES() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableInteractOnBackside() const;
    
    UFUNCTION(BlueprintPure)
    float GetCylinderArcAngle() const;
    
    UFUNCTION(BlueprintPure)
    ULGUICanvas* GetCanvas() const;
    

    // Fix for true pure virtual functions not being implemented
};

