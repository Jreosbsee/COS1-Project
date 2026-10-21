#include "Character.h"
#include "Weapons.h"
#include "MainMenu.h"
#include "NPC.h"
#include "Inventory.h"

Character::Character() {
	health = 100;
	level = 0;
	dmgLvl = 3;
}

//Set character default stats
 void Character::Setstat()
 {
	 //inventory[5] =  "Slot 1", "Slot 2", "Slot 3", "Slot 4", "Slot 5";
	 health = 100;
	 level = 0;
	 dmgLvl = 2;
	

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

	//mainMenu::typewriter("Inventory: ");
	// Inventory inv;
	//inv.DisplayInv();
	//std::cout << inventory[5] << std::endl;
	
	 std::cout << std::endl;
	 system("pause");
	 system("cls");
 }

 //Set Character default inventory
 //void Character::SetInventory() {
 //}

 //Getters
 int Character::GetHealth() {
	return health;
}

 int Character::GetDmgLvl()
 {
	 return dmgLvl;
 }

 //Setters
 void Character::SetLvl() {
	 Character player;

	 mainMenu::typewriter("You have leveled up!");
	 std::cout << std::endl;
	 mainMenu::typewriter("Current level: ");
	 player.level = player.level + 1;
	 player.health = player.health + 10;
	 player.dmgLvl = player.dmgLvl + 2;
 }

 void Character::SetHealth(int newHeatlh) {
	 crook crook1;
	 health = newHeatlh;

 }
 //attacks
 void Character::EnemyAttk(int dmg) {
	 health -= dmg;
	 //NPC to player
 }
