

using UnrealBuildTool;
using System.Collections.Generic;

public class LiquidatortestEditorTarget : TargetRules
{
	public LiquidatortestEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Liquidatortest" } );
	}
}
