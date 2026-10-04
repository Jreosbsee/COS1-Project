#include <iostream>
#include "Character.h"
#include "Weapons.h" 
//#include "Map1.h"


int main() {
	Character player;
	Weapons starter;
	woodenSword def;
	//calls default stats + playername:
	player.Setstat("name", {}, 100, 5, 0, 0);

	//Default Weapon message:
	def.SetDefaultWeapon("name");

	//Player recieves a new weapon! (move to respesctive spot)
	starter.SetWeaponName("name");
	
}
	
	

