#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Character
{
private:
	
	std::string name;
	//std::string  inventory[5];
	int health;
	int dmgLvl;
	int level;

public:
	//default constructor
	Character();

	//constructor
	Character(std::string *_name, int *_health, int *_dmgLvl, int *_level) {
		name = *_name;
		health = *_health;
		dmgLvl = *_dmgLvl;
		level = *_level;
		//int getHealth(*_health);
	}
	void Setstat();
	
	static void SetInventory();

	
	int GetHealth();
	
	static void SetLvl();



	//attack
	void TakeDmg(int dmg);

	void crAttack();


};
