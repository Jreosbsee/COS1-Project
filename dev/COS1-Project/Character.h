#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Character
{
private:
	
	std::string name;
	std::string  inventory[6];
	int health;
	int dmgLvl;
	int level;

public:
	//default constructor
	Character();

	//constructor
	Character(std::string *_name, std::string *_inventory, int *_health, int *_dmgLvl, int *_level) {
		name = *_name;
		inventory[6] = *_inventory;
		health = *_health;
		dmgLvl = *_dmgLvl;
		level = *_level;
	}
	
	void Setstat();
	static void SetInventory();
	int GetHealth();
	static void SetLvl();

	//attack
	void EnemyAttk(int dmg); //NPC to player

	
};
