#include <iostream>
#include "Character.h"
//#include "Weapons.h" -Causing a slowdown on the startup of the the application - 5 seconds vs instant
//#include "Map1.h"


int main() {
	Character player;
	
	//calls default stats + playername
	player.Setstat("name", 100, 5, 0, 0);
}
	
	

