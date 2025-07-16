using UnrealBuildTool;

public class SandfallGameTarget : TargetRules {
	public SandfallGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"AndroidPermission",
			"SandFall",
		});
	}
}
