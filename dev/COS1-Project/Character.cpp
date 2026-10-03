#include "Character.h"


using namespace std;


//Set character default stats
 void Character::Setstat(std::string name, int health, int dmgLvl, int level, int exp)
 {
	 health = 100;
	 dmgLvl = 5;
	 level = 0;
	 exp = 0;

	 std::cout << "Create your Character" << std::endl;
	 std::cout << "Character name: ";
	 std::cin >> name;

	 std::cout << std::endl;
	 std::cout << "Hello, " << name << "! Here are your stats: " << std::endl;
	 std::cout << "Health: " << health << std::endl;
	 std::cout << "Level: " << dmgLvl << std::endl;
	 std::cout << "Damage Level: " << level << std::endl;
	 std::cout << "exp: " << exp << std::endl;

	 //std::cout << "Inventory: " << player.SetInventory() << std::endl; 
 }




























//Starting stats for character (level 0)

//static Character character(){}

//getters
//std::string Character::GetName()
//{
//	std::cin >> name;
//	return name;
//}
//
//int Character::GetDmgLvl()
//{
//	return dmgLvl;
//}
//
//int Character::GetLevel()
//{
//	return level;
//}
//
//int Character::GetHealth()
//{
//	return health;
//}
//
//int Character::GetExp()
//{
//	return exp;
//}

//std::vector<std::string> Character::GetInventory()
//{
//	return std::vector<std::string>();
//}



//setters
//int Character::SetHealth()
//{
//	health = 100;
//	return health;
//}
//
//int Character::SetDmgLvl()
//{
//	dmgLvl = 5;
//	return dmgLvl;
//}
//
//int Character::SetLevel()
//{
//	level = 0;
//	return level;
//}
//
//int Character::SetExp()
//{
//	exp = 0;
//	return exp;
//}
//
//std::string Character::SetName() {
//
//	return name;
//	
//}

//std::vector<std::string> Character::SetInventory()
//{	
//	return _inventory;
//}




