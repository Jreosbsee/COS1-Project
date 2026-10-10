#include "Character.h"
#include "Weapons.h"
#include "MainMenu.h"


//Set character default stats
 void Character::Setstat()
 {

	 vector<std::string> pInventory = { "Slot 1, Slot 2, Slot 3, Slot 4, Slot 5" };
	 health = 100;
	 level = 0;
	 dmgLvl = 2;
	 exp = 0;
	
	
	 mainMenu::typewriter("Create your Character");
	 std::cout << std::endl;

	 mainMenu::typewriter("Character name: ");
	 std::cin >> name;
	 std::cout << std::endl;

	 mainMenu::typewriter("Hello, "); 
	 std::cout << name;
	mainMenu::typewriter("! Here are your stats: ");
	 std::cout << std::endl;

	 mainMenu::typewriter("Health: ");
	 std::cout << health << std::endl;

	 mainMenu::typewriter("Level: ");
	 std::cout << level << std::endl;

	 mainMenu::typewriter("Damage Level: ");
	 std::cout << dmgLvl << std::endl;

	 mainMenu::typewriter("exp: ");
	 std::cout << exp << std::endl;

	 mainMenu::typewriter("Inventory: ");
	 
	 //std::cout << pInventory << std::endl;
	 std::cout << std::endl;
	 system("pause");
	 system("cls");
 }

 //Set Character default inventory
 void Character::SetInventory() {
	 //inventory.push_back(Weapons);
	 
 }
