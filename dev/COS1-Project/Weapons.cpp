#include <string>
#include <iostream>
#include <windows.h>
#include "Weapons.h"
#include "MainMenu.h"


//woodenSword class
void woodenSword::SetDefaultWeapon(std::string sname) {
	mainMenu::typewriter("Thanks for joining us on this journey! ");
	std::cout << std::endl;

	mainMenu::typewriter("Please take this weapon. I know it's not much,");
	std::cout << std::endl;

	mainMenu::typewriter("But it's at least something!");
	std::cout << std::endl;

	mainMenu::typewriter("Enter your weapon name here : ");
	std::cin >> sname;
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


//Weapons class
void Weapons::SetWeaponName(std::string wname) {

	mainMenu::typewriter("You've found a weapon!");
	std::cout << std::endl;

	mainMenu::typewriter("Name your weapon: ");
	std::cin >> wname;

	mainMenu::typewriter("Success! ");
	std::cout << wname;
	mainMenu::typewriter(" is now added to your inventory!");
	std::cout << std::endl;

	system("pause");
	system("cls");
}


