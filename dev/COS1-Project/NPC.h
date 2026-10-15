#include <iostream>
#include <string>
#include "Weapons.h"

class NPC {
public:

	std::string name;
	std::string inventory[2]; //2 for now
	int health;
	int level;
	int dmgLvl;
	int expDrop;

	//static void random(std::string D1, std::string D2, std::string D3);
};
//Some of these names are temp until better ones are found



//Enemy NPCs
class crook : public NPC {
public:
	crook() {
		name = "crook";
		inventory[2]; //2 for now
		health = 90;
		level = 1;
		dmgLvl = 3;
		expDrop = 2;
	}
	static void crDialogue();
	void crAttack(Character& player);
};

class corruptKnight : public NPC {
public:
	corruptKnight() {
		name = "Corrupt Knight";
		inventory[2]; //2 for now
		health = 110;
		level = 2;
		dmgLvl = 5;
		expDrop = 5;
	}
	static void ckDialogue();
	void ckAttack(Character& player);
};

class mage : public NPC {
public:
	mage() {
		name = "Mage";
		inventory[2]; //2 for now
		health = 50;
		level = 5;
		dmgLvl = 8;
		expDrop = 10;
	}
	static void maDialogue();
	void maAttack(Character& player);
};

//Boss NPC
class boss : public NPC {
public:
	boss() {
		name = "Boss"; //probably temp name
		inventory[2];
		health = 250;
		level = 10;
		dmgLvl = 10;
		expDrop = 100;
	}
	static void BoDialogue();
	void BoAttack(Character& player);
};

//Story NPCs
class dweller : public NPC {

	std::string name = "Dweller";
	std::string inventory[2]; 
	int level = 0;
};

class knight : public NPC {

	std::string name = "knight";
	std::string inventory[2]; 
	int level = 2;
};

class Royal : public NPC {
	
	std::string name = "Royal";
	std::string inventory[2]; 
	int level = 10;
};

//Shop NPCs
class blacksmith : public NPC {

	std::string name = "Blacksmith";
	std::string inventory[2]; 

	static void BsShop();
};

class doctor : public NPC {

	std::string name = "Doctor";
	std::string inventory[2]; 

	static void DrShop();

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
