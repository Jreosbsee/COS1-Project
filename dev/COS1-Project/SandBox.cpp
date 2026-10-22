#include <stdio.h>
#include <windows.h>
#include "SandBox.h"
#include "CombatMenu.h"
#include "MainMenu.h"
#include "Character.h"
#include "Inventory.h"
#include "NPC.h"
#include "Weapons.h"


void Sandbox::sandBox() {
	CombatMenu cm;
	crook crook1;
	mage mage1;
	corruptKnight corruptKnight1;
	boss boss;
	Character user;
	//cm.PlayerCombat(player);

	CombatMenu::PlayerCombat(crook1, user);
	
	CombatMenu::PlayerCombat(mage1, user);
	CombatMenu::PlayerCombat(corruptKnight1, user);
	CombatMenu::PlayerCombat(boss, user);
}