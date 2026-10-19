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
};



//Enemy NPCs
class crook : public NPC {
public:
	crook() {
		name = "crook";
		inventory[1] = "Wooden Sword"; //2 for now
		health = 90;
		level = 1;
		dmgLvl = 3;
	}
	static void crDialogue();
	void crAttack(Character& player);
	void CharAttkCR(int dmg);
};


class corruptKnight : public NPC {
public:
	corruptKnight() {
		name = "Corrupt Knight";
		inventory[1] = "Broad Sword";
		health = 110;
		level = 2;
		dmgLvl = 5;
	}
	static void ckDialogue();
	void ckAttack(Character& player);
	void CharAttkCK(int dmg);
};


class mage : public NPC {
public:
	mage() {
		name = "Mage";
		inventory[1] = "Fairy Dust";
		health = 50;
		level = 5;
		dmgLvl = 8;
	}
	static void maDialogue();
	void maAttack(Character& player);
	void CharAttkMA(int dmg);
};


//Boss NPC
class boss : public NPC {
public:
	boss() {
		name = "Boss"; //temp name
		inventory[3] = "Skull of the Underworld", "Demon Sword";
		health = 250;
		level = 10;
		dmgLvl = 10;
	}
	static void BoDialogue();
	void BoAttack(Character& player);
	void CharAttkBO(int dmg);
};



//Story NPCs
class dweller : public NPC {
	dweller() {
		name = "Dweller"; 
		level = 0;
	}
};

class knight : public NPC {
	knight() {
		name = "knight";
		level = 2;
	}
};

class Royal : public NPC {
	Royal() {
		name = "Royal";
		level = 10;
	}
};

//Shop NPCs
class blacksmith : public NPC {
	blacksmith() {
		name = "Blacksmith";
		inventory[2]; //shop?
	}
	static void BsShop();
};

class doctor : public NPC {
	doctor() {
		name = "Doctor";
		inventory[2]; //shop?
	}
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
