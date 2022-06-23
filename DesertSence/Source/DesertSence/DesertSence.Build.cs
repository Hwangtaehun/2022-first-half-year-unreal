// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DesertSence : ModuleRules
{
	public DesertSence(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
