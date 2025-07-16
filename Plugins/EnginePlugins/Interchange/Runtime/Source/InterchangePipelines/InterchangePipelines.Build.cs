using UnrealBuildTool;

public class InterchangePipelines : ModuleRules {
    public InterchangePipelines(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InterchangeCommon",
            "InterchangeCore",
            "InterchangeFactoryNodes",
            "InterchangeNodes",
        });
    }
}
