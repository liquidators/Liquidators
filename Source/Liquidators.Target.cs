

using UnrealBuildTool;
using System.Collections.Generic;

public class LiquidatorsTarget : TargetRules
{
	public LiquidatorsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Liquidators" } );
	}
}
