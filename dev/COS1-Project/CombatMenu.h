#pragma once
#include <vector>
#include "Character.h"
#include "NPC.h"



class CombatMenu {
public:

	static void Attack(Character& player, NPC& enemy);
	static void Flee(Character& player);


	static void PlayerCombat(NPC& enemy, Character& player);
	//create an obj with sublcass
	//ex: crook crook1
	//then you can call playerCombat with that obj
	//ex: PlayerCombat(crook1)
	//use this as the baseline.

	static void EnemyCombat(NPC& enemy, Character& player);
	
};