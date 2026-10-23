#include <vector>
#include "BattleRoom.h"
#include "CombatMenu.h"
#include "MainMenu.h"
#include <Windows.h>
#include "story.h"

bool AllEnemiesDefeated(const std::vector<NPC*>& enemies)
{
	for (NPC* enemy : enemies) {
		if (enemy->health > 0) {
			return false;
		}
	}
	return true;
}
void GetHealing(Character& player, int& killCount)
{
	if (killCount >= 3)
	{
		player.SetHealth(100);

		system("cls");
		std::cout << "You found a health potion!" << std::endl;
		std::cout << "Your health has been restored to 100!" << std::endl;
		system("pause");

		killCount = 0;
	}
}


void FightEnemy(std::vector<NPC*>& enemies, int choice,
	Character& player, int& killCount)
{
	int index = choice - 1;

	if (index < 0 || index >= static_cast<int>(enemies.size()))
	{
		return;
	}

	NPC* enemy = enemies[index];

	if (enemy->health <= 0)
	{
		system("cls");
		std::cout << enemy->name << " already defeated!" << std::endl;
		system("pause");
		system("cls");
		return;
	}

	CombatMenu::PlayerCombat(*enemy, player);

	if (enemy->health <= 0 && player.GetHealth() > 0)
	{
		killCount++;
		GetHealing(player, killCount);
	}
}


bool RunBattleRoom(Character& player,
	std::vector<NPC*>& enemies,
	const std::string& roomName,
	const std::string& missionName,
	const std::string& missionDesc)
{
	player.SetHealth(100);
	bool collectedArtifcact = false;
	int killCount = 0;
	int choice;
	

	int n = printf("                                                                                                                        ") - 2; //OG:120
	system("cls");
	mainMenu::CenterOutput(missionName.c_str(), n);
	Sleep(2000);
	
	system("cls");
	mainMenu::CenterOutput(missionDesc.c_str(), n);
	Sleep(2000);

	system("cls");

	while (player.GetHealth() > 0)
	{
		system("cls");
		bool roomCleared = AllEnemiesDefeated(enemies);

			std::cout << "===" << roomName << "===" << std::endl;

		for (NPC* enemy : enemies)
		{
			std::cout << enemy->name << " " << (enemy->health > 0 ? "[Alive]" : "[Defeated]") << std::endl;
		}

		std::cout << std::endl;
		std::cout << "== Options ==" << std::endl;

		for (int i = 0; i < static_cast<int>(enemies.size()); i++)
		{
			std::cout << i + 1 << ". Battle " << enemies[i]->name << std::endl;
		}
		int getOpt = static_cast<int>(enemies.size()) + 1;
		int roomOpt = static_cast<int>(enemies.size()) + 2;

		std::cout << getOpt << ". Collect artifact" << std::endl;
		std::cout << roomOpt << ". Proceed to the next room" << std::endl;
		std::cout << "Choose an option: ";

		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}
		if (choice >= 1 && choice <= static_cast<int>(enemies.size()))
		{
			FightEnemy(enemies, choice, player, killCount);
		}
		else if (choice == getOpt)
		{
			if (collectedArtifcact)
			{
				system("cls");
				std::cout << "You already collected this artifact!" << std::endl;
				system("pause");
				system("cls");
			}
			else if (roomCleared)
			{
				collectedArtifcact = true;

				system("cls");
				std::cout << "You collected the artifact!" << std::endl;
				system("pause");
				system("cls");
			}
			else
			{
				system("cls");
				std::cout << "You must defeat all enemies first!" << std::endl;
				system("pause");
				system("cls");
			}
		}
		else if (choice == roomOpt)
		{
			if (collectedArtifcact)
			{
				system("cls");
				std::cout << "Proceeding to the next room!" << std::endl;
				system("pause");
				system("cls");

				return true;
			}
			else
			{
				system("cls");
				std::cout << "You must collect the artifact first!" << std::endl;
				system("pause");
				system("cls");
			}
		}
		else
		{
			system("cls");
			std::cout << "Invalid Option!" << std::endl;
			system("pause");
			system("cls");
		}
	}
	return false;
}
void BattleRoom1::EnterRoom(Character& player) 
{
	crook crook1;
	mage mage1;

	std::vector<NPC*> enemies =
	{
		&crook1,
		&mage1,
	};

	bool completed = RunBattleRoom(player, enemies, "The forgotten Amulet", "First Mission", "Locate and secure the amulet");

	if (completed)
	{
		BattleRoom2::EnterRoom(player);
	}
	else
	{
		std::cout << "Game OVer!" << std::endl;
	}
}
	
//===The Four Star Grimoire===
void BattleRoom2::EnterRoom(Character& player)
{
	crook crook1;
	mage mage1;
	corruptKnight knight1;

	std::vector<NPC*> enemies = {
		&crook1,
		&mage1,
		&knight1
	};

	bool completed = RunBattleRoom(player, enemies, "The Four Star Grimoire", "Second mission", "Locate and secure the Four Star Grimoire.");

	if (completed)
	{
		BattleRoom3::EnterRoom(player);
	}
	else
	{
		std::cout << "Game Over!" << std::endl;
	}
}


//===Artifact 3===
void BattleRoom3::EnterRoom(Character& player)
{
	crook crook1;
	mage mage1;
	corruptKnight knight1;

	std::vector<NPC*> enemies = {
		&crook1,
		&mage1,
		&knight1
	};

	bool completed = RunBattleRoom(player, enemies, "The Ember", "Third mission", "Locate and secure The Ember.");

	if (completed)
	{
		BattleRoom4::EnterRoom(player);
	}
	else
	{
		std::cout << "Game Over!" << std::endl;
	}
}


//===Artifact 4===
void BattleRoom4::EnterRoom(Character& player)
{
	crook crook1;
	mage mage1;
	corruptKnight knight1;

	std::vector<NPC*> enemies = {
		&crook1,
		&mage1,
		&knight1
	};

	bool completed = RunBattleRoom(player, enemies, "The Heart of Savoy", "Fourth mission", "Locate and secure The Heart of Savoy.");

	if (completed)
	{
		BattleRoom5::EnterRoom(player);
	}
	else
	{
		std::cout << "Game Over!" << std::endl;
	}
}







//===The Boss Room===
void BattleRoom5::EnterRoom(Character& player) 
{
	player.SetHealth(100);
	crook crook1;
	mage mage1;
	corruptKnight corruptKnight1;
	boss boss;

	std::vector<NPC*> enemies =
	{
		&crook1,
		&mage1,
		&corruptKnight1
	};

	int killCount = 0;
	int choice;

	int n = printf("                                                                                                                        ") - 2; //OG:120
	system("cls");
	mainMenu::CenterOutput("Final mission", n);
	Sleep(2000);
	system("cls");
	mainMenu::CenterOutput("Defeat Malachar and craft the artifact.", n);
	Sleep(2000);
	system("cls");

	while (player.GetHealth() > 0)
	{
		system("cls");
		bool enemiesDefeated = AllEnemiesDefeated(enemies);
		bool roomCleared = enemiesDefeated && boss.health <= 0;
		std::cout << "===The Final Ruin===" << std::endl;
		std::cout << std::endl;
		for (NPC* enemy : enemies)
		{
			std::cout << enemy->name << " "
				<< (enemy->health > 0 ? "[Alive]" : "[Defeated]")
				<< std::endl;
		}

		std::cout << boss.name << " "
			<< (boss.health > 0 ? "[Alive]" : "[Defeated]")
			<< std::endl;
		std::cout << std::endl;

		std::cout << "== Options ==" << std::endl;

		for (int i = 0; i < static_cast<int>(enemies.size()); i++)
		{
			std::cout << i + 1 << ". Battle "
				<< enemies[i]->name << std::endl;
		}

		int bossOpt = static_cast<int>(enemies.size()) + 1;
		int craftOpt = static_cast<int>(enemies.size()) + 2;

		std::cout << bossOpt << ". Battle " << boss.name << std::endl;
		std::cout << craftOpt << ". Craft artifact" << std::endl;
		std::cout << "Choose an option: ";

		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}

		if (choice >= 1 && choice <= static_cast<int>(enemies.size()))
		{
			FightEnemy(enemies, choice, player, killCount);
		}

		else if (choice == bossOpt)
		{
			if (!enemiesDefeated)
			{
				system("cls");
				std::cout << "You must defeat all regular enemies first!" << std::endl;
				system("pause");
			}
			else if (boss.health > 0)
			{
				CombatMenu::PlayerCombat(boss, player);
			}
			else
			{
				system("cls");
				std::cout << "Malachar is already defeated!" << std::endl;
				system("pause");
			}
		}
		else if (choice == craftOpt)
		{
			if (roomCleared)
			{
				system("cls");
				std::cout << "You crafted the artifact!" << std::endl;
				system("pause");
				system("cls");

				Story::FinalStory();
				return;
			}
			else
			{
				system("cls");
				std::cout << "You must defeat all enemies and Malachar first!" << std::endl;
				system("pause");
			}
		}
		else
		{
			system("cls");
			std::cout << "Invalid Option!" << std::endl;
			system("pause");
		}
	}

	system("cls");
	std::cout << "Game Over!" << std::endl;
	system("pause");
	system("cls");
}
