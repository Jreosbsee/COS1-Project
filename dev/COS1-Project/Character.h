#pragma once
#include <string>
#include <iostream>
#include <vector>
class Character
{
public:
	
	std::string name = "name";
	std::vector<std::string> inventory;
	int health;
	int dmgLvl;
	int level;
	int exp;

	void Setstat(std::string name, std::vector<std::string> inventory, int health, int dmgLvl, int level, int exp);

	void SetInventory();
};
