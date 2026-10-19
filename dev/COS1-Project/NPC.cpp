#include <random>
#include "Character.h"
#include "NPC.h"
#include "MainMenu.h"

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
Character::Character() {}



//enemy attacks player
void crook::crAttack(Character& player) {
	
	player.EnemyAttk(dmgLvl);
}

void corruptKnight::ckAttack(Character& player) {

	player.EnemyAttk(dmgLvl);
}

void mage::maAttack(Character& player) {

	player.EnemyAttk(dmgLvl);
}

void boss::BoAttack(Character& player) {

	player.EnemyAttk(dmgLvl);
}




//player attack enemy
void crook::CharAttkCR(int dmg) {
	health -= dmg;
}

void corruptKnight::CharAttkCK(int dmg) {
	health -= dmg;
}

void mage::CharAttkMA(int dmg) {
	health -= dmg;
}

void boss::CharAttkBO(int dmg) {
	health -= dmg;
}


//dialogues and attacks for NPCs:

//Crook
void crook::crDialogue() {
	crook cr;

	mainMenu::typewriter("You've encountered a crook!");
		std:cout << std::endl;

		//Crook dialogue + attack
		int randNum = rand() % 3;
		if (randNum == 0) {
			mainMenu::typewriter("Crook: You think you can win against me? I play dirty!");
			std::cout << std::endl;
		}
		else if (randNum == 1) {
			mainMenu::typewriter("Crook: You better hide your coin, because I'm coming to get it!");
			std::cout << std::endl;
		}
		else if (randNum == 2) {
			mainMenu::typewriter("Crook: Petty crime? Nothing is going to be petty about this crime!");
			std::cout << std::endl;
		}
	
	std::cout << std::endl;
	while (cr.health > 0) {
	
	}
}


//Corrput Knight 
void corruptKnight::ckDialogue() {
	int randNum = rand() % 2;
	if (randNum == 0) {
		mainMenu::typewriter("Corrupt Knight: Who needs rules? Making your own choices is fun!");
	}
	else if (randNum == 1) {
		mainMenu::typewriter("Corrupt Knight: Me? Betray the blade? You won't live to tell the tale!");
	}
	else if (randNum == 2) {
		mainMenu::typewriter("Corrupt Knight: I joined this force for the gear! And it'll prove great against you!");
	}
}
//Mage
void mage::maDialogue() {
	int randNum = rand() % 2;
	if (randNum == 0) {
		mainMenu::typewriter("Mage: Who needs the blade when you have magic? Better watch out sword user!");
	}
	else if (randNum == 1) {
		mainMenu::typewriter("Mage: What are you gonna do? Stab me? My attacks are long range! Good luck :)");
	}
	else if (randNum == 2) {
		mainMenu::typewriter("Mage: My magic outranks your sword, just try to overpower me!");
	}
}

//Boss
void boss::BoDialogue() {
	int randNum = rand() % 2;
	if (randNum == 0) {
		mainMenu::typewriter("Boss: I've survived centuries against foes like you. Don't get your hopes up.");
	}
	else if (randNum == 1) {
		mainMenu::typewriter("Boss: You dare face me? You're just a speck of dirt trapped under my feet.");
	}
	else if (randNum == 2) {
		mainMenu::typewriter("Boss: I took over your land once, and I will take it over again. You cannot win.");
	}
}


//shops

void blacksmith::BsShop() {
	mainMenu::typewriter("Looking for some weapons? You came to the right place!");
	//shop
}

void doctor::DrShop() {
	mainMenu::typewriter("Medicine usually doesn't heal instantly, but it does here!");
	//shop
}


