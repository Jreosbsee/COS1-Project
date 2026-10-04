#include <string>
#include <iostream>
#include "Weapons.h"
//Weapons class
void Weapons::SetWeaponName(std::string wname) {

	std::cout << "You've found a weapon! " << std::endl;
	std::cout << "Name your weapon: ";
	std::cin >> wname;
	std::cout << "Success! " << wname << " is now added to your inventory!";
	std::cout << std::endl;
}


//woodenSword class
void woodenSword::SetDefaultWeapon(std::string sname) {
	std::cout << "Thanks for joining us on this journey! " << std::endl;
	std::cout << "Please take this weapon. I know it's not much," << std::endl;
	std::cout << "But it's at least something!" << std::endl;
	std::cout << "Enter your weapon name here: ";
	std::cin >> sname;
	std::cout << std::endl;
	std::cout << "error, name not recognized picking random name." << std::endl;
	std::cout << "Weapon name: Aspirin bottle" << std::endl;
	std::cout << "(note: this weapon does not provide any healing abilities" << std::endl;
}