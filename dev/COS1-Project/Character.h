#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Character
{
public:
	
	std::string name;
	

	//std::string  inventory[5];
	int health;
	int dmgLvl;
	int level;
	int exp;

	void Setstat();

	void SetInventory();
};
