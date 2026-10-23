#pragma once
#include <iostream>
#include <string>
#include "Weapons.h"
#include "Character.h"

class NPC {
public:

	std::string name = "NPC";
	int health = 100;
	int level = 0;
	int dmgLvl = 0;
};



//Enemy NPCs
class crook : public NPC {
public:

	crook() {
		name = "crook";
		health = 10;
		level = 1;
		dmgLvl = 3;

		
	}
	static void crDialogue();
};


class corruptKnight : public NPC {
public:
	corruptKnight() {
		name = "Corrupt Knight";
		health = 20; //OG 90
		level = 2;
		dmgLvl = 5;
	}
	static void ckDialogue();
	
};


class mage : public NPC {
public:
	mage() {
		name = "Mage";
		health = 15;
		level = 5;
		dmgLvl = 8;
	}
	static void maDialogue();
};


//Boss NPC
class boss : public NPC {
public:
	boss() {
		name = "Malachar"; 

		health = 50; 
		level = 10;
		dmgLvl = 5;
	}
	static void BoDialogue();
};



//Future Implementation

////Story NPCs
//class dweller : public NPC {
//	dweller() {
//		name = "Dweller"; 
//		level = 0;
//	}
//};
//
//class knight : public NPC {
//	knight() {
//		name = "knight";
//		level = 2;
//	}
//};
//
//class Royal : public NPC {
//	Royal() {
//		name = "Royal";
//		level = 10;
//	}
//};









//FUTURE IMPLEMENTATION: NPC shops
//class blacksmith : public NPC {
//	blacksmith() {
//		name = "Blacksmith";
//	}
//	static void BsShop();
//};
//
//class doctor : public NPC {
//	doctor() {
//		name = "Doctor";
//	}
//	static void DrShop();
//
//};