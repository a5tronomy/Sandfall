#include "InterchangeMaterialFunctionFactoryNode.h"

UInterchangeMaterialFunctionFactoryNode::UInterchangeMaterialFunctionFactoryNode() {
}

UClass* UInterchangeMaterialFunctionFactoryNode::GetObjectClass() const {
    return NULL;
}

bool UInterchangeMaterialFunctionFactoryNode::GetInputConnection(const FString& InputName, FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}


