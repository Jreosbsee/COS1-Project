#pragma once
#include <iostream>
class Weapons {
public:
	std::string name;
	int level;
	int dmgLvl;

	void SetWeaponName(std::string name);

};

//Default weapon
class woodenSword : public Weapons {
public:
	std::string name;
	int level;
	int dmgLvl;
	
	void SetDefaultWeapon(std::string name);
};