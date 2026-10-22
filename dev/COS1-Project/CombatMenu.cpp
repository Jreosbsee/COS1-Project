#include <windows.h>
#include <stdio.h>
#include <string>
#include "NPC.h"
#include "Character.h"
#include "Weapons.h"
#include "Inventory.h"
#include "MainMenu.h"
#include "CombatMenu.h"




//Combat Menu Functions:

void CombatMenu::Attack(Character& player, NPC& enemy) {
	enemy.health -= player.GetDmgLvl();
	
	system("cls");
	std::cout << "=== ATTACK ===" << std::endl;
	std::cout << "You attacked!" << std::endl;
	std::cout << "Hit points: " << player.GetDmgLvl() << std::endl;
	
	system("pause");
	system("cls");
	Sleep(100);
	//attack or reference here
}


void CombatMenu::Flee(Character& player) {
	Character user;
	Sleep(100);
	std::cout << "=== FLEE ===" << std::endl;
	std::cout << "you flee'd!" << std::endl;
	system("pause");
	system("cls");
	Sleep(100);
	//rand to roll for escpae chance
	// flee rates will remain consistent thru whole battle
	// if roll succeeds, player will escape
	// if not, player will continue battle.
	// Flee uses a turn. 
	
	//Flee or reference here
}


void CombatMenu::PlayerCombat(NPC& enemy, Character& player)
{
	//crook::crDialogue(); implement soon
	//menu here
	int point = 1;
	int min = 1, max = 2;
	//int health = player.GetHealth();
	while (true)
	{
		system("cls");
		std::cout << "=== " << enemy.name << " ===";
		std::cout << std::endl;
		std::cout << "Your health: ";
		std::cout << player.GetHealth() << std::endl;
		//how to specify NPC?
		std::cout << "Enemy health: ";
		std::cout << enemy.health << std::endl;
		std::cout << std::endl;
		std::cout << "=== Select option below ===" << std::endl; //Should be typewriter
		std::cout << mainMenu::set_arrow(point, 1);
		std::cout << "Attack" << std::endl;
		std::cout << mainMenu::set_arrow(point, 2);
		std::cout << "Flee" << std::endl;

		while (true)
		{
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				if (point > min)
				{
					point--;
				}
				break;
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				if (point < max)
				{
					point++;
				}
				break;
			}
			if (GetAsyncKeyState(VK_RETURN) & 0x8000)
			{
				while (GetAsyncKeyState(VK_RETURN) & 0x8000) {
					goto combat_menu;
				}

			}
		}
		Sleep(100);
		system("cls");
		if (false)
		{
		combat_menu:
			switch (point) {

			case 1:
				CombatMenu::Attack(player, enemy);
				
				if (enemy.health <= 0)
				{
					system("cls");
					std::cout << "You have defeated a " << enemy.name << "!" << std::endl;
					system("pause");
					system("cls");
					return;
				}
				CombatMenu::EnemyCombat(enemy, player);
				if (player.GetHealth() <= 0)
				{
					std::cout << "You have been defeated!" << std::endl;
					system("pause");
					system("cls");
					return;
				}
				Sleep(100);
				break;

			case 2:
				CombatMenu::Flee(player);
				CombatMenu::EnemyCombat(enemy, player);

				if (player.GetHealth() <= 0)
				{
					std::cout << "You have been defeated!" << std::endl;
					system("pause");
					system("cls");
					return;
				}
				Sleep(100);
				break;
			}
		}
	}
}



	void CombatMenu::EnemyCombat(NPC& enemy, Character& player)
	{
		std::cout << "=== " << enemy.name << " ===" << std::endl;
		std::cout << "Enemy Attacked!" << std::endl;
		std::cout << "Hit points: " << enemy.dmgLvl << std::endl;

		player.SetHealth(player.GetHealth() - enemy.dmgLvl);

		Sleep(100);
		system("pause");
		system("cls");

	}