// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SnowSence : ModuleRules
{
	public SnowSence(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
