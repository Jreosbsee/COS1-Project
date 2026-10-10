#include <iostream>
#include <string>
#include "Weapons.h"

class NPC {
public:

	std::string name;
	std::string inventory[2]; //2 for now
	int level;
	int dmgLvl;
	int expDrop;

	void tempmethod();
};
//Some of these names are temp until better ones are found



//Enemy NPCs
class crook : public NPC {

	std::string name = "crook";
	std::string inventory[2]; //2 for now
	int level = 1;
	int dmgLvl = 3;
	int expDrop = 2;
};

class corruptKnight : public NPC {

	std::string name = "Corrupt Knight";
	std::string inventory[2]; //2 for now
	int level = 2;
	int dmgLvl = 5;
	int expDrop = 5;

};

class mage : public NPC {

	std::string name = "Mage";
	std::string inventory[2]; //2 for now
	int level = 5;
	int dmgLvl = 8;
	int expDrop = 10;
};

//Boss NPC
class boss : public NPC {

	std::string name = "Boss"; //probably temp name
	std::string inventory[2]; //2 for now
	int level = 10;
	int dmgLvl = 10;
	int expDrop = 100;
};

//Story NPCs
class dweller : public NPC {

	std::string name = "Dweller";
	std::string inventory[2]; //2 for now
	int level = 0;
};

class knight : public NPC {

	std::string name = "knight";
	std::string inventory[2]; //2 for now
	int level = 2;
};

class Royal : public NPC {
	
	std::string name = "Royal";
	std::string inventory[2]; //2 for now
	int level = 10;
};

//Shop NPCs
class blacksmith : public NPC {

	std::string name = "Blacksmith";
	std::string inventory[2]; //2 for now
};

class doctor : public NPC {

	std::string name = "Doctor";
	std::string inventory[2]; //2 for 

};



//Npc list:
// Enemies:
//crook
//corruptKnight
//mage
//Boss NPC
// Story:
//Dweller
//knight
//Royal
// Shop NPC
//blacksmith
//doctor
