#include <string>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "story.h"
#include "Character.h"
#include "MainMenu.h"
#include "Weapons.h"
#include "Inventory.h"
#include "NPC.h"
#include "SandBox.h"
#include "CombatMenu.h"
#include "BattleRoom.h"


//Start right at main menu
void Story::mainStory() {
	Character player;
	BattleRoom5::EnterRoom(player);
	/*mainMenu menu;
	menu.MainMenu();*/
}


	//Menu --> Continue story 
	void Story::Continue(){
		Character player;
		woodenSword def;
		Story SBattle;
	//Story:

		mainMenu::typewriter("Starting story");
		mainMenu::loadingAnimation();
		std::cout << std::endl;
		system("cls");
		//114 Character limit
		mainMenu::typewriter("Long ago, four great heroes brought peace to Savoy after a demonic attack that jeopardized the fate of humanity. "); 
		std::cout << std::endl;
		std::cout << std::endl;
		Sleep(1500);
		mainMenu::typewriter("While their efforts proved success, their own fates did not, as the cost of saving savoy was their lives."); 
		std::cout << std::endl;
		std::cout << std::endl;
		Sleep(1500);
		mainMenu::typewriter("In their last moments, they agreed to seal their souls away in ancient artifacts, that once combined would create the"); 
		std::cout << std::endl;
		mainMenu::typewriter("elixir sword, giving the person who weilds it the power of our four great heros from long ago..."); 
		std::cout << std::endl;
		std::cout << std::endl;
		Sleep(1500);
		system("pause");
		system("cls");

		int n = printf("                                                                                                                        ") - 2; //OG:120
		mainMenu::CenterOutput("========================================================== ", n);
		mainMenu::CenterOutput("Year 864 A.V.", n);
		mainMenu::CenterOutput("500 Years after Savoy's victory", n);
		mainMenu::CenterOutput("========================================================== ", n);
		std::cout << std::endl;
		system("pause");
		system("cls");


		mainMenu::typewriter("Peace was never a permanent outcome. Savoy celebrated their victorious win against the deomic war.");
		std::cout << std::endl;
		mainMenu::typewriter("But since that day, no one stepped up to claim the title 'hero', leading to a plagued regime to conquer the land. ");
		std::cout << std::endl;
		std::cout << std::endl;
		Sleep(1500);
		mainMenu::typewriter("This regime went by the name of Zloduh. They worshipped the very demons that sent Savoy into anguish, and are");
		std::cout << std::endl;
		mainMenu::typewriter("preparing for *his* resummoning.");
		std::cout << std::endl;
		std::cout << std::endl;
		Sleep(1500);
		mainMenu::typewriter("Citizens of Savoy have tried to eliminate the Zloduh. But without a leader, they fail time and time again.");
		std::cout << std::endl;
		mainMenu::typewriter("With time running low, Savoy is fearful for their fate.");
		std::cout << std::endl;
		std::cout << std::endl;
		Sleep(1500);
		mainMenu::typewriter("Who will take the title of hero? Who will step up and take back the land Savoy fought so hard to keep?");
		std::cout << std::endl;
		std::cout << std::endl;
		mainMenu::typewriter("That's where you come in, player.");
		std::cout << std::endl;

		system("pause");
		system("cls");

		//calls default stats + playername:
		player.Setstat();
		
		mainMenu::typewriter("You're life within Savoy has been normal. Your family lived comfortable lives, you and your siblings pursued ");
		std::cout << std::endl;
		mainMenu::typewriter("essential education to live a normal life. The only action you took that provided a greater purpose");
		std::cout << std::endl;
	 
	 
		mainMenu::typewriter("was practicing the art of battle.");
		std::cout << std::endl;
		std::cout << std::endl;
		mainMenu::typewriter("You now find yourself retrieving the artifcats of heroism. You understand the severity of Savoy's fate, and");
		std::cout << std::endl;
		mainMenu::typewriter("decided to be among the few who dared to try and bring peace back to your land. Many have died on this journey,");
		std::cout << std::endl;
		mainMenu::typewriter("but the reward of completing it makes life worth risking.");
		std::cout << std::endl;
		system("pause");
		system("cls");

		//Default Weapon message:
		def.DWDialogue();
		system("cls");

		mainMenu::typewriter("Now, before we send you straight into enemy territory, let's have you fight a crook and see how you do!");
		std::cout << std::endl;
		system("pause");
		std::cout << std::endl;
		SBattle.Battle();

		std::cout << std::endl;
		mainMenu::typewriter("Awesome! Now that you've gotten your feet wet, I think you're ready for battle. May Savoy be with you, soilder.");
		std::cout << std::endl;

		system("pause");
		system("cls");
		BattleRoom1::EnterRoom(player);
	}


	void Story::Battle()
	{
		crook crook1;
		Character user;
		crook::crDialogue();
		system("pause");
	CombatMenu::PlayerCombat(crook1, user);
	}

	void Story::FinalStory() {
		mainMenu::typewriter("You did it! You actually did it! Savoy has been saved once again!");
		std::cout << std::endl;
		mainMenu::typewriter("You win the game! Congrats!");
		std::cout << std::endl;
		system("pause");
		mainMenu::MainMenu;
	}