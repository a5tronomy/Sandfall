#include "InterchangeCommonPipelineDataFactoryNode.h"

UInterchangeCommonPipelineDataFactoryNode::UInterchangeCommonPipelineDataFactoryNode() {
}

bool UInterchangeCommonPipelineDataFactoryNode::SetCustomGlobalOffsetTransform(const UInterchangeBaseNodeContainer* NodeContainer, const FTransform& AttributeValue) {
    return false;
}

bool UInterchangeCommonPipelineDataFactoryNode::SetBakeMeshes(const UInterchangeBaseNodeContainer* NodeContainer, const bool& AttributeValue) {
    return false;
}

bool UInterchangeCommonPipelineDataFactoryNode::GetCustomGlobalOffsetTransform(FTransform& AttributeValue) const {
    return false;
}

bool UInterchangeCommonPipelineDataFactoryNode::GetBakeMeshes(bool& AttributeValue) const {
    return false;
}


