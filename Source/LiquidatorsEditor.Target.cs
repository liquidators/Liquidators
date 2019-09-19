

using UnrealBuildTool;
using System.Collections.Generic;

public class LiquidatorsEditorTarget : TargetRules
{
	public LiquidatorsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Liquidators" } );
	}
}
