#include <iostream>
#include "Character.h"
#include "Weapons.h" 
#include "MainMenu.h"



int main() {
	Character player;
	Weapons starter;
	woodenSword def;
	mainMenu menu;

	menu.MainMenu("menu");

	//calls default stats + playername:
	player.Setstat("name", {}, 100, 5, 0, 0);

	//Default Weapon message:
	def.SetDefaultWeapon("name");

	//Player recieves a new weapon! (move to respesctive spot)
	starter.SetWeaponName("name");
}
	
	

