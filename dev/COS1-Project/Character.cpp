#include "Character.h"
#include "Weapons.h"
#include "MainMenu.h"
using namespace std;


//Set character default stats
 void Character::Setstat(std::string name, std::vector<std::string> inventory, int health, int level, int dmgLvl, int exp)
 {
	 inventory = { " ", " ", " ", " ", " ", };
	 health = 100;
	 level = 0;
	 dmgLvl = 5;
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

	 mainMenu::typewriter( "Inventory: ");
	 std::cout  << inventory[1] << std::endl;

	 mainMenu::typewriter("Health: ");
	 std::cout << health << std::endl;

	 mainMenu::typewriter("Level: ");
	 std::cout << level << std::endl;

	 mainMenu::typewriter("Damage Level: ");
	 std::cout << dmgLvl << std::endl;

	 mainMenu::typewriter("exp: ");
	 std::cout << exp << std::endl;
	 std::cout << std::endl;

	 system("pause");
	 system("cls");
 }

 //Set Character default inventory
 void Character::SetInventory() {
	 
	 inventory = {"Aspirin bottle ", " ", " ", " ", " ",};
	 
 }
