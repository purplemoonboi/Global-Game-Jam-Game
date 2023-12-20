// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GlobalGameJam24 : ModuleRules
{
	public GlobalGameJam24(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
