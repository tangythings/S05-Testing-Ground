// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class S05_Testing_GroundTarget : TargetRules
{
	public S05_Testing_GroundTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("S05_Testing_Ground");
	}
}
