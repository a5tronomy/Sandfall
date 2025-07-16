using UnrealBuildTool;

public class IKFootToGround : ModuleRules {
    public IKFootToGround(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
