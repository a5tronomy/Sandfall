#pragma once
#include "CoreMinimal.h"
#include "MoviePlayer.h"
#include "LoadingScreenData.generated.h"

USTRUCT(BlueprintType)
struct FLoadingScreenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumLoadingScreenDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoCompleteWhenLoadingCompletes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> LoadingScreenMovies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMoviePlaybackType> MoviePlayingMode;
    
    SANDFALL_API FLoadingScreenData();
};

