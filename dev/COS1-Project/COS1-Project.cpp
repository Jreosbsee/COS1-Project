#include <iostream>
#include "story.h"
#include "Character.h"
#include "MainMenu.h"
#include "Weapons.h"
#include "Inventory.h"
#include "NPC.h"

int main() {

	//NPCs
	//Story *story;
	Story *continu; //might not need?
	Character *players;
	crook *crooks;
	corruptKnight *corrknights;
	mage *mages;
	boss *bosses;
	Story story;
	//Weapons
	
	//woodenSword *def;
	BroadSword brsw;
	LongSword losw;
	Claymore clmo;



	woodenSword *defaul;
	woodenSword def;
	defaul = &def;
	//pointers ------------
	// 
	// 
	//NPC Pointers
	//Story* st = &story;
	//Story* con = &continu; //might not need
	//Character* Char = &players;
	//crook* cr = &crooks;
	//corruptKnight* ck = &corrknights;
	//mage* ma = &mages;
	//boss* bo = &bosses;


	//Weapons Pointers
	/*woodenSword* ws = def;
	BroadSword* bs = &brsw;
	LongSword* ls = &losw;
	Claymore* cl = &clmo;*/

	story.mainStory();
}
	
	

