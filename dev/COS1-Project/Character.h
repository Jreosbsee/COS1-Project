#pragma once
#include <string>
#include <iostream>
class Character
{
public:
	
	std::string name = "name";
	//std::vector<std::string> inventory;
	int health;
	int dmgLvl;
	int level;
	int exp;

	//void Setstat();
	void Setstat(std::string name, int health, int dmgLvl, int level, int exp);
};


	//public:
	//	//Constructor
	//	Character(std::string _name,
	//		int _health, 
	//		int _dmgLvl, 
	//		int _level, 
	//		int _exp): 
	//		name(_name), 
	//		health(_health), 
	//		dmgLvl(_dmgLvl), 
	//		level(_level), 
	//		exp(_exp) {
	//
	//		std::vector<std::string> inventory,
	//		_inventory(inventory),
	//	}


		//Setters
		/*int SetDmgLvl();
		int SetLevel();
		int SetHealth();
		int SetExp();
		std::string SetName();*/
		//std::vector<std::string> SetInventory();

	//	//Getters
	//	std::string GetName();
	//	int GetDmgLvl();
	//	int GetLevel();
	//	int GetHealth();
	//	int GetExp();
	//	//static std::vector<std::string> GetInventory();
	//
	//};