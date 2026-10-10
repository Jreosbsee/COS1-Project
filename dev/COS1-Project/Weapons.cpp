#include <string>
#include <iostream>
#include <windows.h>
#include "Weapons.h"
#include "MainMenu.h"


//woodenSword---------------------------------------------------------
void woodenSword::SetDefaultWeapon() {

	name = "Aspirin bottle";
	level = 0;
	dmgLvl = 3;
}

void woodenSword::DWDialogue(){

	std::string wname; // false name

	//dialogue
	mainMenu::typewriter("Thanks for joining us on this journey! ");
	std::cout << std::endl;

	mainMenu::typewriter("Please take this weapon. I know it's not much,");
	std::cout << std::endl;

	mainMenu::typewriter("But it's at least something!");
	std::cout << std::endl;

	mainMenu::typewriter("Enter your weapon name here : ");
	std::cin >> wname;
	std::cout << std::endl;

	mainMenu::typewriter("error, name not recognized..");
	std::cout << std::endl;
	mainMenu::typewriter("Picking random name"); 
	mainMenu::loadingAnimation();
	std::cout << std::endl;

	mainMenu::typewriter("Generated random name!");
	std::cout << std::endl;
	Sleep(300);

	mainMenu::typewriter("Weapon name: Aspirin bottle");
	std::cout << std::endl;

	mainMenu::typewriter("(note: this weapon does not provide any healing abilities)");
	std::cout << std::endl;
	
	system("pause");
	system("cls");
	
}





//BroadSword---------------------------------------------------------
void SetWeapon(BroadSword) {


}

void BroadSword::BroadSwordDialogue() {
	std::string wname;
	mainMenu::typewriter("You've found a BroadSword!");
	std::cout << std::endl;

	mainMenu::typewriter("Name your weapon: ");
	std::cin >> wname;

	mainMenu::typewriter("Success! ");
	std::cout << wname;
	mainMenu::typewriter(" is now added to your inventory!");
	std::cout << std::endl;

	mainMenu::typewriter("Updated inventory: ");


	system("pause");
	system("cls");
}




//LongSword---------------------------------------------------------
void SetWeapon(LongSword) {
}

void LongSword::LongSwordDialogue() {

	std::string wname;
	mainMenu::typewriter("You've found a LongSword!");
	std::cout << std::endl;

	mainMenu::typewriter("Name your weapon: ");
	std::cin >> wname;

	mainMenu::typewriter("Success! ");
	std::cout << wname;
	mainMenu::typewriter(" is now added to your inventory!");
	std::cout << std::endl;

	mainMenu::typewriter("Updated inventory: ");


	system("pause");
	system("cls");
}


//Claymore---------------------------------------------------------
void SetWeapon(Claymore) {
}

void Claymore::ClaymoreDialogue() {

	std::string wname;
	mainMenu::typewriter("You've found a Claymore!");
	std::cout << std::endl;

	mainMenu::typewriter("Name your weapon: ");
	std::cin >> wname;

	mainMenu::typewriter("Success! ");
	std::cout << wname;
	mainMenu::typewriter(" is now added to your inventory!");
	std::cout << std::endl;

	mainMenu::typewriter("Updated inventory: ");


	system("pause");
	system("cls");
}