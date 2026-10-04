#include "Character.h"
#include "Weapons.h"

using namespace std;


//Set character default stats
 void Character::Setstat(std::string name, std::vector<std::string> inventory, int health, int level, int dmgLvl, int exp)
 {
	 inventory = { " ", " ", " ", " ", " ", };
	 health = 100;
	 level = 0;
	 dmgLvl = 5;
	 exp = 0;

	 std::cout << "Create your Character" << std::endl;
	 std::cout << "Character name: ";
	 std::cin >> name;

	 std::cout << std::endl;
	 std::cout << "Hello, " << name << "! Here are your stats: " << std::endl;
	 std::cout << "Inventory: " << inventory[1] << std::endl;
	 ::cout << "Health: " << health << std::endl;
	 std::cout << "Level: " << level << std::endl;
	 std::cout << "Damage Level: " << dmgLvl << std::endl;
	 std::cout << "exp: " << exp << std::endl;
	 std::cout << std::endl;

	 //std::cout << "Inventory: " << player.SetInventory() << std::endl; 
 }

 //Set Character default inventory
 void Character::SetInventory() {
	 
	 inventory = {"Aspirin bottle ", " ", " ", " ", " ",};
	 
 }
