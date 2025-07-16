#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InterchangeMeshGeometry.h"
#include "InterchangeMeshInstance.h"
#include "InterchangePipelineMeshesUtilitiesContext.h"
#include "InterchangePipelineMeshesUtilities.generated.h"

class UInterchangeBaseNodeContainer;
class UInterchangePipelineMeshesUtilities;

UCLASS(BlueprintType)
class INTERCHANGEPIPELINES_API UInterchangePipelineMeshesUtilities : public UObject {
    GENERATED_BODY()
public:
    UInterchangePipelineMeshesUtilities();

    UFUNCTION(BlueprintPure)
    void SetContext(const FInterchangePipelineMeshesUtilitiesContext& Context) const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidMeshInstanceUid(const FString& MeshInstanceUid) const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidMeshGeometryUid(const FString& MeshGeometryUid) const;
    
    UFUNCTION(BlueprintPure)
    FString GetMeshInstanceSkeletonRootUid(const FString& MeshInstanceUid) const;
    
    UFUNCTION(BlueprintPure)
    FInterchangeMeshInstance GetMeshInstanceByUid(const FString& MeshInstanceUid) const;
    
    UFUNCTION(BlueprintPure)
    FString GetMeshGeometrySkeletonRootUid(const FString& MeshGeometryUid) const;
    
    UFUNCTION(BlueprintPure)
    FInterchangeMeshGeometry GetMeshGeometryByUid(const FString& MeshGeometryUid) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllStaticMeshInstance(TArray<FString>& MeshInstanceUids) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllStaticMeshGeometry(TArray<FString>& MeshGeometryUids) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllSkinnedMeshInstance(TArray<FString>& MeshInstanceUids) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllSkinnedMeshGeometry(TArray<FString>& MeshGeometryUids) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllMeshInstanceUidsUsingMeshGeometryUid(const FString& MeshGeometryUid, TArray<FString>& MeshInstanceUids) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllMeshInstanceUids(TArray<FString>& MeshInstanceUids) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllMeshGeometryNotInstanced(TArray<FString>& MeshGeometryUids) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllMeshGeometry(TArray<FString>& MeshGeometryUids) const;
    
    UFUNCTION(BlueprintCallable)
    static UInterchangePipelineMeshesUtilities* CreateInterchangePipelineMeshesUtilities(UInterchangeBaseNodeContainer* BaseNodeContainer);
    
};

