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

//attacks



void crook::crAttack(Character& player) {
	
	player.TakeDmg(dmgLvl);
}

void corruptKnight::ckAttack(Character& player) {

	player.TakeDmg(dmgLvl);
}

void mage::maAttack(Character& player) {

	player.TakeDmg(dmgLvl);
}

void boss::BoAttack(Character& player) {

	player.TakeDmg(dmgLvl);
}

//dialogues +attacks for NPCs:

//Crook dialogue + attack
void crook::crDialogue() {
	crook cr;

	//Crook dialogue + attack
	int randNum = rand() % 2;
	if (randNum == 0) {
		mainMenu::typewriter("You think you can win against me? I play dirty!");
	}
	else if (randNum == 1) {
		mainMenu::typewriter("You better hide your coin, because I'm coming to get it!");
	}
	else if (randNum == 2) {
		mainMenu::typewriter("Petty crime? Nothing is going to be petty about this crime!");
	}
	
	std::cout << std::endl;
	while (cr.health > 0) {
		//cr.crAttack(player);
		//player health decrease
		//player attack 
		//crook health decrease
		
			
	}
}


//Corrput Knight dialogue + attack
void corruptKnight::ckDialogue() {
	int randNum = rand() % 2;
	if (randNum == 0) {
		mainMenu::typewriter("Who needs rules? Making your own choices is fun!");
	}
	else if (randNum == 1) {
		mainMenu::typewriter("Me? Betray the blade? You won't live to tell the tale!");
	}
	else if (randNum == 2) {
		mainMenu::typewriter("I joined this force for the gear! And it'll prove great against you!");
	}
}
//Mage dialogue + attack
void mage::maDialogue() {
	int randNum = rand() % 2;
	if (randNum == 0) {
		mainMenu::typewriter("Who needs the blade when you have magic? Better watch out sword user!");
	}
	else if (randNum == 1) {
		mainMenu::typewriter("What are you gonna do? Stab me? My attacks are long range! Good luck :)");
	}
	else if (randNum == 2) {
		mainMenu::typewriter("My magic outranks your sword, just try to overpower me!");
	}
}

//Boss dialogue + attack
void boss::BoDialogue() {
	int randNum = rand() % 2;
	if (randNum == 0) {
		mainMenu::typewriter("I've survived centuries against foes like you. Don't get your hopes up.");
	}
	else if (randNum == 1) {
		mainMenu::typewriter("You dare face me? You're just a speck of dirt trapped under my feet.");
	}
	else if (randNum == 2) {
		mainMenu::typewriter("I took over your land once, and I will take it over again. You cannot win.");
	}
}


//shops

void blacksmith::BsShop() {
	mainMenu::typewriter("Looking for some weapons? You canme to the right place!");
	//shop
}

void doctor::DrShop() {
	mainMenu::typewriter("Medicine usually doesn't heal instantly, but it does here!");
	//shop
}