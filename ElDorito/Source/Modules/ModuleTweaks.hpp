#pragma once
#include "ModuleBase.hpp"

namespace Modules
{
	class ModuleTweaks : public Utils::Singleton<ModuleTweaks>, public ModuleBase
	{
	public:
		Command *VarIntelBloomPatch;
		Command *VarAggressiveAudioDiscarding;
		Command *VarDisableReactorFog;
		Command *VarDisableWeaponOutline;
		Command *VarDisableHeadshotEffect;
		Command *VarDisableHitMarkers;
		Command *VarGruntBirthdayParty;
		Command *VarReachStyleFrags;
		Command* VarMemoryExpansion;

		ModuleTweaks();
	};
}