#include "InterchangeActorFactoryNode.h"

UInterchangeActorFactoryNode::UInterchangeActorFactoryNode() {
}

bool UInterchangeActorFactoryNode::SetCustomMobility(const uint8& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeActorFactoryNode::SetCustomLocalTransform(const FTransform& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeActorFactoryNode::SetCustomGlobalTransform(const FTransform& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeActorFactoryNode::SetCustomActorClassName(const FString& AttributeValue) {
    return false;
}

bool UInterchangeActorFactoryNode::GetCustomMobility(uint8& AttributeValue) const {
    return false;
}

bool UInterchangeActorFactoryNode::GetCustomLocalTransform(FTransform& AttributeValue) const {
    return false;
}

bool UInterchangeActorFactoryNode::GetCustomGlobalTransform(FTransform& AttributeValue) const {
    return false;
}

bool UInterchangeActorFactoryNode::GetCustomActorClassName(FString& AttributeValue) const {
    return false;
}


