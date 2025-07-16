using UnrealBuildTool;

public class InterchangeFactoryNodes : ModuleRules {
    public InterchangeFactoryNodes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
            "InterchangeCore",
            "InterchangeNodes",
        });
    }
}
