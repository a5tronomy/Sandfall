#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnBodySkinAssignedSignatureDelegate.h"
#include "OnFaceSkinAssignedSignatureDelegate.h"
#include "OnSkinAssignCompletedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "CharacterSkinAssignPolicy.generated.h"

class AActor;

UCLASS(Abstract, BlueprintType)
class SANDFALL_API UCharacterSkinAssignPolicy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnBodySkinAssignedSignature OnBodySkinAssigned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnFaceSkinAssignedSignature OnFaceSkinAssigned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnSkinAssignCompletedSignature OnSkinAssignCompleted;
    
    UCharacterSkinAssignPolicy();

    UFUNCTION(BlueprintCallable)
    void OnSkinAssignPolicyDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void InitSkinAssignPolicy();
    
    UFUNCTION(BlueprintCallable)
    void AssignFaceSkinAsync(AActor* Owner, const FName& CharacterName, const TSoftClassPtr<AActor>& FaceSkinClass);
    
    UFUNCTION(BlueprintCallable)
    void AssignFaceSkin(AActor* Owner, const FName& CharacterName, const TSubclassOf<AActor>& FaceSkinClass);
    
    UFUNCTION(BlueprintCallable)
    void AssignBodySkinAsync(AActor* Owner, const FName& CharacterName, const TSoftClassPtr<AActor>& BodySkinClass);
    
    UFUNCTION(BlueprintCallable)
    void AssignBodySkin(AActor* Owner, const FName& CharacterName, const TSubclassOf<AActor>& BodySkinClass);
    
    UFUNCTION(BlueprintCallable)
    void AssignBodyAndFaceSkinAsync(AActor* Owner, const FName& CharacterName, const TSoftClassPtr<AActor>& BodySkinClass, const TSoftClassPtr<AActor>& FaceSkinClass);
    
    UFUNCTION(BlueprintCallable)
    void AssignBodyAndFaceSkin(AActor* Owner, const FName& CharacterName, const TSubclassOf<AActor>& BodySkinClass, const TSubclassOf<AActor>& FaceSkinClass);
    
};

