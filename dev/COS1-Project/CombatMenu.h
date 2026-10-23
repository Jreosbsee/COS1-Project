#pragma once
#include <vector>
#include "Character.h"
#include "NPC.h"



class CombatMenu {
public:
	static void Attack(Character& player, NPC& enemy);
	static void Flee();
	static void PlayerCombat(NPC& enemy, Character& player);
	static void EnemyCombat(NPC& enemy, Character& player);
	
};