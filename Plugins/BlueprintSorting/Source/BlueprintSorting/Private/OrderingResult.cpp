#include "OrderingResult.h"

UOrderingResult::UOrderingResult() {
    this->Result = ESortOrdering::LessThan;
}

void UOrderingResult::SetForTexts(const FText& A, const FText& B) {
}

void UOrderingResult::SetForStrings(const FString& A, const FString& B) {
}

void UOrderingResult::SetForInts(int32 A, int32 B) {
}

void UOrderingResult::SetForInt(int32 R) {
}

void UOrderingResult::SetForFloat(float R, float Epsilon) {
}

UOrderingResult* UOrderingResult::MakeOrderingResult() {
    return NULL;
}

bool UOrderingResult::IsFirstAfterSecond(UOrderingResult* OrderingResult, ESortDirection SortDirection) {
    return false;
}


