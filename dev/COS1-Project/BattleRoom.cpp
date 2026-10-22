#include "BattleRoom.h"
#include "CombatMenu.h"
#include "MainMenu.h"
#include <Windows.h>
#include "story.h"
//===The Forgotten Amulet===
void BattleRoom1::EnterRoom(Character& player) {
	crook crook1;
	mage mage1;


	bool ColletedArtifact = false;
	int choice;

	int n = printf("                                                                                                                        ") - 2; //OG:120
	system("cls");
	mainMenu::CenterOutput("First mission", n);
	Sleep(2000);
	system("cls");
	mainMenu::CenterOutput("Locate and secure the amulet.", n);
	Sleep(2000);
	system("cls");

	while (player.GetHealth() > 0)
	{
		bool roomCleared = crook1.health <= 0 && mage1.health <= 0;

		//temp menu, implement arrow menu later
		std::cout << "===The Forgotten Amulet===" << std::endl;
		std::cout << std::endl;
		//only takes one, make it take multiple
		std::cout << "Crook " << (crook1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n"; //add enemy amount | ex: 3 Alive, 2 Defeated.
		std::cout << "Mage " << (mage1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n";
		std::cout << std::endl;

		std::cout << "1. Battle Crook" << std::endl;
		std::cout << "2. Battle Mage" << std::endl;
		std::cout << "3. Collect artifact" << std::endl; //must defeat all enemies first
		std::cout << "4. Proceed to the next room" << std::endl; //must collect artifact first
		std::cout << "Choose an option: ";

		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}

		switch (choice)
		{
			case 1:
				if (crook1.health > 0)
				{
				CombatMenu::PlayerCombat(crook1, player);
				}
				else
				{
					system("cls");
					std::cout << "Crook already defeated!" << std::endl;
					system("pause");
					system("cls");
				}
				break;
			case 2:
				if (mage1.health > 0)
				{
					CombatMenu::PlayerCombat(mage1, player);
				}
				else
				{
					system("cls");
					std::cout << "Mage already defeated!" << std::endl;
					system("pause");
					system("cls");
				}
			
				break;
			case 3:
				if (roomCleared)
				{
					ColletedArtifact = true;

					system("cls");
					std::cout << "You collected the artifact!" << std::endl;
					system("pause");
					system("cls");
				}
				else
				{
					system("cls");
					std::cout << "You must defeat all of the enemies!" << std::endl;
					system("pause");
					system("cls");
				}
				break;
			case 4:
				if (ColletedArtifact)
				{;
					system("cls");
					std::cout << "Prcoceeding to the next room!" << std::endl;
					system("pause");
					system("cls");
					BattleRoom2::EnterRoom(player);
				}
				else
				{
					system("cls");
					std::cout << "You must collect the artifact first!" << std::endl;
					system("pause");
					system("cls");
				}
				break;

			default:
				system("cls");
				std::cout << "Invalid Option!" << std::endl;
				system("pause");
				system("cls");
				break;
		}
	}
	std::cout << "Game Over!" << std::endl;
	//system("pause");
}




//===The Four Star Grimoire===
void BattleRoom2::EnterRoom(Character& player) {
	crook crook1;
	mage mage1;
	corruptKnight corruptKnight1;

	bool ColletedArtifact = false;
	int choice;

	int n = printf("                                                                                                                        ") - 2; //OG:120
	system("cls");
	mainMenu::CenterOutput("Second mission", n);
	Sleep(2000);
	system("cls");
	mainMenu::CenterOutput("Locate and secure the Four Star Grimoire.", n);
	Sleep(2000);
	system("cls");

	while (player.GetHealth() > 0)
	{
		bool roomCleared = crook1.health <= 0 && mage1.health <= 0 && corruptKnight1.health <= 0;

		//temp menu, implement arrow menu later
		std::cout << "===The Four Star Grimoire===" << std::endl;
		std::cout << std::endl;
		//only takes one, make it take multiple
		std::cout << "Crook " << (crook1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n"; //add enemy amount | ex: 3 Alive, 2 Defeated.
		std::cout << "Mage " << (mage1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n";
		std::cout << "Corrupt Knight " << (corruptKnight1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n";
		std::cout << std::endl;

		std::cout << "1. Battle Crook" << std::endl;
		std::cout << "2. Battle Mage" << std::endl;
		std::cout << "3. Battle Corrupt Knight" << std::endl;
		std::cout << "4. Collect artifact" << std::endl; //must defeat all enemies first
		std::cout << "5. Proceed to the next room" << std::endl; //must collect artifact first
		std::cout << "Choose an option: ";

		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}

		switch (choice)
		{
		case 1:
			if (crook1.health > 0)
			{
				CombatMenu::PlayerCombat(crook1, player);
			}
			else
			{
				system("cls");
				std::cout << "Crook already defeated!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 2:
			if (mage1.health > 0)
			{
				CombatMenu::PlayerCombat(mage1, player);
			}
			else
			{
				system("cls");
				std::cout << "Mage already defeated!" << std::endl;
				system("pause");
				system("cls");

			}
			break;
		case 3:
			if (corruptKnight1.health > 0)
			{
				CombatMenu::PlayerCombat(corruptKnight1, player);
			}
			else
			{
				system("cls");
				std::cout << "Corrupt Knight already defeated!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 4:
			if (roomCleared)
			{
				ColletedArtifact = true;
		
				system("cls");
				std::cout << "You collected the artifact!" << std::endl;
				system("pause");
				system("cls");
			}
			else
			{
				system("cls");
				std::cout << "You must defeat all of the enemies!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 5:
			if (ColletedArtifact)
			{
				system("cls");
				std::cout << "Prcoceeding to the next room!" << std::endl;
				system("pause");
				system("cls");
				BattleRoom3::EnterRoom(player);
			}
			else
			{
				system("cls");
				std::cout << "You must collect the artifact first!" << std::endl;
				system("pause");
				system("cls");
			}
			break;

		default:
			system("cls");
			std::cout << "Invalid Option!" << std::endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("cls");
	std::cout << "Game Over!" << std::endl;
	system("pause");
	system("cls");
}



//===Artifact 3===
void BattleRoom3::EnterRoom(Character& player) {
	crook crook1;
	mage mage1;
	corruptKnight corruptKnight1;

	bool ColletedArtifact = false;
	int choice;

	int n = printf("                                                                                                                        ") - 2; //OG:120
	system("cls");
	mainMenu::CenterOutput("Third mission", n);
	Sleep(2000);
	system("cls");
	mainMenu::CenterOutput("Locate and secure <Artifact 3>.", n);
	Sleep(2000);
	system("cls");

	while (player.GetHealth() > 0)
	{
		bool roomCleared = crook1.health <= 0 && mage1.health <= 0 && corruptKnight1.health <= 0;

		//temp menu, implement arrow menu later
		std::cout << "===Artifact 3===" << std::endl;
		std::cout << std::endl;
		//only takes one, make it take multiple
		std::cout << "Crook " << (crook1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n"; //add enemy amount | ex: 3 Alive, 2 Defeated.
		std::cout << "Mage " << (mage1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n";
		std::cout << "Corrupt Knight " << (corruptKnight1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n";
		std::cout << std::endl;

		std::cout << "1. Battle Crook" << std::endl;
		std::cout << "2. Battle Mage" << std::endl;
		std::cout << "3. Battle Corrupt Knight" << std::endl;
		std::cout << "4. Collect artifact" << std::endl; //must defeat all enemies first
		std::cout << "5. Proceed to the next room" << std::endl; //must collect artifact first
		std::cout << "Choose an option: ";

		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}

		switch (choice)
		{
		case 1:
			if (crook1.health > 0)
			{
				CombatMenu::PlayerCombat(crook1, player);
			}
			else
			{
				system("cls");
				std::cout << "Crook already defeated!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 2:
			if (mage1.health > 0)
			{
				CombatMenu::PlayerCombat(mage1, player);
			}
			else
			{
				system("cls");
				std::cout << "Mage already defeated!" << std::endl;
				system("pause");
				system("cls");

			}
			break;
		case 3:
			if (corruptKnight1.health > 0)
			{
				CombatMenu::PlayerCombat(corruptKnight1, player);
			}
			else
			{
				system("cls");
				std::cout << "Corrupt Knight already defeated!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 4:
			if (roomCleared)
			{
				ColletedArtifact = true;

				system("cls");
				std::cout << "You collected the artifact!" << std::endl;
				system("pause");
				system("cls");
			}
			else
			{
				system("cls");
				std::cout << "You must defeat all of the enemies!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 5:
			if (ColletedArtifact)
			{
				system("cls");
				std::cout << "Prcoceeding to the next room!" << std::endl;
				system("pause");
				system("cls");
				BattleRoom4::EnterRoom(player);
			}
			else
			{
				system("cls");
				std::cout << "You must collect the artifact first!" << std::endl;
				system("pause");
				system("cls");
			}
			break;

		default:
			system("cls");
			std::cout << "Invalid Option!" << std::endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("cls");
	std::cout << "Game Over!" << std::endl;
	system("pause");
	system("cls");
}



//===Artifact 4===
void BattleRoom4::EnterRoom(Character& player) {
	crook crook1;
	mage mage1;
	corruptKnight corruptKnight1;

	bool ColletedArtifact = false;
	int choice;

	int n = printf("                                                                                                                        ") - 2; //OG:120
	system("cls");
	mainMenu::CenterOutput("Fourth mission", n);
	Sleep(2000);
	system("cls");
	mainMenu::CenterOutput("Locate and secure <Artifact 4>.", n);
	Sleep(2000);
	system("cls");

	while (player.GetHealth() > 0)
	{
		bool roomCleared = crook1.health <= 0 && mage1.health <= 0 && corruptKnight1.health <= 0;

		//temp menu, implement arrow menu later
		std::cout << "===Artifact 4===" << std::endl;
		std::cout << std::endl;
		//only takes one, make it take multiple
		std::cout << "Crook " << (crook1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n"; //add enemy amount | ex: 3 Alive, 2 Defeated.
		std::cout << "Mage " << (mage1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n";
		std::cout << "Corrupt Knight " << (corruptKnight1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n";
		std::cout << std::endl;

		std::cout << "1. Battle Crook" << std::endl;
		std::cout << "2. Battle Mage" << std::endl;
		std::cout << "3. Battle Corrupt Knight" << std::endl;
		std::cout << "4. Collect artifact" << std::endl; //must defeat all enemies first
		std::cout << "5. Proceed to the next room" << std::endl; //must collect artifact first
		std::cout << "Choose an option: ";

		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}

		switch (choice)
		{
		case 1:
			if (crook1.health > 0)
			{
				CombatMenu::PlayerCombat(crook1, player);
			}
			else
			{
				system("cls");
				std::cout << "Crook already defeated!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 2:
			if (mage1.health > 0)
			{
				CombatMenu::PlayerCombat(mage1, player);
			}
			else
			{
				system("cls");
				std::cout << "Mage already defeated!" << std::endl;
				system("pause");
				system("cls");

			}
			break;
		case 3:
			if (corruptKnight1.health > 0)
			{
				CombatMenu::PlayerCombat(corruptKnight1, player);
			}
			else
			{
				system("cls");
				std::cout << "Corrupt Knight already defeated!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 4:
			if (roomCleared)
			{
				ColletedArtifact = true;

				system("cls");
				std::cout << "You collected the artifact!" << std::endl;
				system("pause");
				system("cls");
			}
			else
			{
				system("cls");
				std::cout << "You must defeat all of the enemies!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 5:
			if (ColletedArtifact)
			{
				system("cls");
				std::cout << "Prcoceeding to the next room!" << std::endl;
				system("pause");
				system("cls");
				BattleRoom5::EnterRoom(player);
			}
			else
			{
				system("cls");
				std::cout << "You must collect the artifact first!" << std::endl;
				system("pause");
				system("cls");
			}
			break;

		default:
			system("cls");
			std::cout << "Invalid Option!" << std::endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("cls");
	std::cout << "Game Over!" << std::endl;
	system("pause");
	system("cls");
}



//===The Boss Room===
void BattleRoom5::EnterRoom(Character& player) {
	crook crook1;
	mage mage1;
	corruptKnight corruptKnight1;
	boss boss;

	bool CraftArtifact = false;
	int choice;

	int n = printf("                                                                                                                        ") - 2; //OG:120
	system("cls");
	mainMenu::CenterOutput("Final mission", n);
	Sleep(2000);
	system("cls");
	mainMenu::CenterOutput("Defeat <Boss name> and craft the artifact.", n);
	Sleep(2000);
	system("cls");

	while (player.GetHealth() > 0)
	{
		bool enemiesDefeated = crook1.health <= 0 && mage1.health <= 0 && corruptKnight1.health <= 0;

		bool roomCleared = crook1.health <= 0 && mage1.health <= 0 && corruptKnight1.health <= 0 && boss.health <= 0;

		//temp menu, implement arrow menu later
		std::cout << "===The Final Ruin===" << std::endl;
		std::cout << std::endl;
		//only takes one, make it take multiple
		std::cout << "Crook " << (crook1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n"; //add enemy amount | ex: 3 Alive, 2 Defeated.
		std::cout << "Mage " << (mage1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n";
		std::cout << "Corrupt Knight " << (corruptKnight1.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n";
		std::cout << "Boss " << (boss.health > 0 ? ">>Alive<<" : ">>Defeated<<") << "\n";
		std::cout << std::endl;

		std::cout << "1. Battle Crook" << std::endl;
		std::cout << "2. Battle Mage" << std::endl;
		std::cout << "3. Battle Corrupt Knight" << std::endl;
		std::cout << "4. Battle boss" << std::endl; //must defeat all enemies first
		std::cout << "5. Craft artifact" << std::endl; //must defeat all enemies first	
		std::cout << "Choose an option: ";

		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}

		switch (choice)
		{
		case 1:
			if (crook1.health > 0)
			{
				CombatMenu::PlayerCombat(crook1, player);
			}
			else
			{
				system("cls");
				std::cout << "Crook already defeated!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 2:
			if (mage1.health > 0)
			{
				CombatMenu::PlayerCombat(mage1, player);
			}
			else
			{
				system("cls");
				std::cout << "Mage already defeated!" << std::endl;
				system("pause");
				system("cls");

			}
			break;
		case 3:
			if (corruptKnight1.health > 0)
			{
				CombatMenu::PlayerCombat(corruptKnight1, player);
			}
			else
			{
				system("cls");
				std::cout << "Corrupt Knight already defeated!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 4:
			if (enemiesDefeated) {
				if (boss.health > 0)
				{
					CombatMenu::PlayerCombat(boss, player);
				}
				else
				{
					system("cls");
					std::cout << "The Boss is already defeated!" << std::endl;
					system("pause");
					system("cls");
				}
			}
			else
			{
				system("cls");
				std::cout << "You must defeat all of the enemies!" << std::endl;
				system("pause");
				system("cls");
			}
			break;
		case 5:
			if (roomCleared)
			{
				CraftArtifact = true;
				
				//temp dialogue, this will take you back to the story and comeplete it.
				system("cls");
				std::cout << "You crafted the artifact!" << std::endl;
				system("pause");
				system("cls");
				Story::FinalStory();
				break;
			}
			else
			{
				system("cls");
				std::cout << "You must defeat all of the enemies!" << std::endl;
				system("pause");
				system("cls");
			}
			break;

		default:
			system("cls");
			std::cout << "Invalid Option!" << std::endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("cls");
	std::cout << "Game Over!" << std::endl;
	system("pause");
	system("cls");
}