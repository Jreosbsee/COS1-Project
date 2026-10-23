#include <windows.h>
#include <stdio.h>
#include <string>
#include "NPC.h"
#include "Character.h"
#include "Weapons.h"
#include "MainMenu.h"
#include "CombatMenu.h"

void CombatMenu::Attack(Character& player, NPC& enemy) {
	enemy.health -= player.GetDmgLvl();
	
	system("cls");
	std::cout << "=== ATTACK ===" << std::endl;
	std::cout << "You attacked!" << std::endl;
	std::cout << "Hit points: " << player.GetDmgLvl() << std::endl;
	
	system("pause");
	system("cls");
	Sleep(100);
}


void CombatMenu::Flee() {
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
	int point = 1;
	const int min = 1;
	const int max = 2;

	while (GetAsyncKeyState(VK_RETURN) & 0x8000)
	{
		Sleep(10);
	}

	while (player.GetHealth() > 0 && enemy.health > 0)
	{
		while (GetAsyncKeyState(VK_RETURN) & 0x8000)
		{
			Sleep(10);
		}

		system("cls");

		std::cout << "=== " << enemy.name << " ===" << std::endl;
		std::cout << "Your health: " << player.GetHealth() << std::endl;
		std::cout << "Enemy health: " << enemy.health << std::endl;
		std::cout << std::endl;

		std::cout << "=== Select option below ===" << std::endl;
		std::cout << mainMenu::set_arrow(point, 1) << "Attack" << std::endl;
		std::cout << mainMenu::set_arrow(point, 2) << "Flee" << std::endl;

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
			else if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				if (point < max)
				{
					point++;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) & 0x8000)
			{
				while (GetAsyncKeyState(VK_RETURN) & 0x8000)
				{
					Sleep(10);
				}

				if (point == 1)
				{
					Attack(player, enemy);

					if (enemy.health <= 0)
					{
						system("cls");
						std::cout << "You have defeated a "
							<< enemy.name << "!" << std::endl;
						system("pause");
						return;
					}
				}
				else
				{
					Flee();
				}

				EnemyCombat(enemy, player);

				if (player.GetHealth() <= 0)
				{
					std::cout << "You have been defeated!" << std::endl;
					system("pause");
					return;
				}
				break;
			}

			Sleep(10);
		}

		while ((GetAsyncKeyState(VK_UP) & 0x8000) || (GetAsyncKeyState(VK_DOWN) & 0x8000))
		{
			Sleep(10);
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