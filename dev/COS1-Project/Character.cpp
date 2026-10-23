#include "Character.h"
#include "Weapons.h"
#include "MainMenu.h"
#include "NPC.h"
#include "Inventory.h"

Character::Character() {
	health = 100;
	level = 0;
	dmgLvl = 5;
}

//Set character default stats
 void Character::Setstat()
 {

	 mainMenu::typewriter("Create your Character");
	 std::cout << std::endl;

	 mainMenu::typewriter("Character name: ");
	 std::getline(std::cin >> std::ws, name);
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

	 std::cout << std::endl;
	 system("pause");
	 system("cls");
 }

 //Getters
 int Character::GetHealth() {
	return health;
}

 int Character::GetDmgLvl()
 {
	 return dmgLvl;
 }

 //Setters

 void Character::SetLvl()
 {
	 level++;
	 health += 10;
	 dmgLvl += 2;

	 mainMenu::typewriter("You have leveled up!");
	 std::cout << std::endl;

	 mainMenu::typewriter("Current level: ");
	 std::cout << level << std::endl;

	 mainMenu::typewriter("Health: ");
	 std::cout << health << std::endl;

	 mainMenu::typewriter("Damage Level: ");
	 std::cout << dmgLvl << std::endl;
 }


 void Character::SetHealth(int newHealth)
 {
	 health = newHealth;
 }
 //attacks
 void Character::EnemyAttk(int dmg) {
	 health -= dmg;
	 //NPC to player
 }
