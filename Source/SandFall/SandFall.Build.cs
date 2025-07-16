using UnrealBuildTool;

public class SandFall : ModuleRules {
    public SandFall(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "CommonInput",
            "CommonUI",
            "ControlRig",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "GameplayTags",
            "GeometryCollectionEngine",
            "InputCore",
            "LevelSequence",
            "MoviePlayer",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "RigVM",
            "SlateCore",
            "StateTreeModule",
            "TextToSpeech",
            "UMG",
        });
    }
}
