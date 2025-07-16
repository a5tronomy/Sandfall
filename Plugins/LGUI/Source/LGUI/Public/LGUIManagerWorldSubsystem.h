#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "LGUIManagerWorldSubsystem.generated.h"

class ILGUICultureChangedInterface;
class ULGUICultureChangedInterface;
class ILGUILayoutInterface;
class ULGUILayoutInterface;
class ULGUIBaseInputModule;
class ULGUIBaseRaycaster;
class ULGUICanvas;
class ULGUILifeCycleBehaviour;
class UObject;
class UUIItem;
class UUISelectableComponent;

UCLASS(BlueprintType, NotPlaceable, Transient)
class LGUI_API ULGUIManagerWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<UUIItem>> AllRootUIItemArray;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<ULGUICanvas>> ScreenSpaceCanvasArray;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<ULGUICanvas>> WorldSpaceUECanvasArray;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<ULGUICanvas>> WorldSpaceLGUICanvasArray;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<ULGUICanvas>> RenderTargetSpaceLGUICanvasArray;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<ULGUIBaseRaycaster>> AllRaycasterArray;
    
    UPROPERTY(Export, VisibleAnywhere)
    TWeakObjectPtr<ULGUIBaseInputModule> CurrentInputModule;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<UUISelectableComponent>> AllSelectableArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TWeakObjectPtr<UObject>> AllLayoutArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TWeakObjectPtr<UObject>> AllCultureChangedArray;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<ULGUILifeCycleBehaviour>> LGUILifeCycleBehavioursForUpdate;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<ULGUILifeCycleBehaviour>> LGUILifeCycleBehavioursForStart;
    
public:
    ULGUIManagerWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    static void UnregisterLGUILayout(TScriptInterface<ILGUILayoutInterface> InItem);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterLGUICultureChangedEvent(TScriptInterface<ILGUICultureChangedInterface> InItem);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterLGUILayout(TScriptInterface<ILGUILayoutInterface> InItem);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterLGUICultureChangedEvent(TScriptInterface<ILGUICultureChangedInterface> InItem);
    
    UFUNCTION(BlueprintCallable)
    static void RebuildLayout(UUIItem* InItem);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceUpdateLayout(UObject* WorldContextObject);
    
};

