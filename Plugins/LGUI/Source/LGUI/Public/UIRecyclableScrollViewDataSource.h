#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UIRecyclableScrollViewDataSource.generated.h"

class UActorComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UUIRecyclableScrollViewDataSource : public UInterface {
    GENERATED_BODY()
};

class IUIRecyclableScrollViewDataSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCell(UActorComponent* Component, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitOnCreate(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetItemCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeSetCell();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterSetCell();
    
};

