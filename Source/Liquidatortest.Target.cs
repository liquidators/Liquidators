

using UnrealBuildTool;
using System.Collections.Generic;

public class LiquidatortestTarget : TargetRules
{
	public LiquidatortestTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Liquidatortest" } );
	}
}
