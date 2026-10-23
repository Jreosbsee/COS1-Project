#pragma once
#include <string>
class Character
{
private:
	
	std::string name;
	int health;
	int dmgLvl;
	int level;

public:
	Character();

	//setters
	void Setstat();
	void SetLvl();
	void SetHealth(int newHeatlh);
	//getters
	int GetDmgLvl();
	int GetHealth();
	

	//attack
	void EnemyAttk(int dmg); //NPC to player

	
};
