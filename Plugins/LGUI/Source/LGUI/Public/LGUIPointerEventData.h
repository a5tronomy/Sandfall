#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELGUIPointerInputType.h"
#include "EMouseButtonType.h"
#include "LGUIBaseEventData.h"
#include "LGUIPointerEventData.generated.h"

class ULGUIBaseRaycaster;
class USceneComponent;

UCLASS()
class LGUI_API ULGUIPointerEventData : public ULGUIBaseEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELGUIPointerInputType InputType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 pointerID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector pointerPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector pressPointerPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* enterComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<USceneComponent*> enterComponentStack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<USceneComponent*> hoverComponentArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector worldPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector WorldNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FaceIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D scrollAxisValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    ULGUIBaseRaycaster* raycaster;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMouseButtonType mouseButtonType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* pressComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector pressWorldPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector pressWorldNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float pressDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector pressRayOrigin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector pressRayDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform pressWorldToLocalTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    ULGUIBaseRaycaster* pressRaycaster;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double clickTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double ReleaseTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double pressTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool isDragging;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* dragComponent;
    
    ULGUIPointerEventData();

    UFUNCTION(BlueprintCallable)
    void SetHighlightedComponentForNavigation(USceneComponent* InComp);
    
    UFUNCTION(BlueprintCallable)
    bool IsPointerOverUI();
    
    UFUNCTION(BlueprintPure)
    FVector GetWorldPointSpherical() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWorldPointInPlane() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocalPointInPlane() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetHighlightedComponentForNavigation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDragRayOrigin() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDragRayDirection() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCumulativeMoveDelta() const;
    
};

