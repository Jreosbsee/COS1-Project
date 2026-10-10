#include "Inventory.h"
#include "MainMenu.h"

void AddItem(){
	bool y = true;

	std::cin >> y;
	mainMenu::typewriter("Would you like to add this Item to your inventory? Y or N");
	
	if (y = true) {
		//&inventory.push_back("test");
	}
}

void RemoveItem() {

}


//void Rename Item() {}