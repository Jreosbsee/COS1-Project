#include <stdio.h>
#include <windows.h>
#include "MainMenu.h"

void mainMenu::typewriter(std::string text) {
	for (int i = 0; text[i] != '\0'; i++) {
		std::cout << text[i] << "\xDB";
		for (auto j = 0; j < 60000000; j++); //takes up lots of memory, is there a more modern solution?
		std::cout << "\b \b";
		
	}
	
}



void mainMenu::loadingAnimation() {
	std::cout << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "." << std::flush;
		Sleep(500);
		std::cout << "." << std::flush;
		Sleep(500);
		std::cout << "." << std::flush;
		Sleep(500);
		std::cout << "\r        \r";
		//Note: animation has to be on a separate line due to deleting the beginning of it.
		//find a workaround if possible.
		


	}
}
void mainMenu::MainMenu(std::string menu) {
	typewriter("Welcome to [insert game title here]!");
	std::cout << std::endl;

	//Press any key to contimue...
	system("pause");
	//Clears screen
	system("cls");
}