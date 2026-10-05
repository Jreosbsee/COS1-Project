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

//if I need another method for faster animation:

//void mainMenu::fasttypewriter(std::string text) {
//	for (int i = 0; text[i] != '\0'; i++) {
//		std::cout << text[i] << "\xDB";
//		for (auto j = 0; j < 600000; j++); //takes up lots of memory, is there a more modern solution?
//		std::cout << "\b \b";
//
//	}
//
//}



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
void mainMenu::MainMenu(std::string menu){


	//115x26
	typewriter("===================================================================================================================");
	for (int i = 0; i < 8; i++) {
		std::cout << std::endl;
		std::cout << ("|                                                                                                                 |");
		Sleep(10);
	}

	//10 lines free.
	
	// 58 spaces markes the middle of the board. Change spacing accordign to characters used.
	
	//line 1:
	std::cout << std::endl;
	std::cout << "|                                                   "; // spaces
	typewriter("The Final Ruin");										// characters
	std::cout << "                                                |"; // spaces
	

	//line 2:
	std::cout << std::endl;
	std::cout << "|                                                     "; // spaces
	typewriter("(1) Play Game!");											  // characters
	std::cout << "                                              |"; // spaces

	//line 2:
	std::cout << std::endl;
	std::cout << "|                                                     "; // spaces
	typewriter("(2)Settings");												    // characters
	std::cout << "                                                 |"; // spaces


	//line 3:
	std::cout << std::endl;
	std::cout << "|                                                     ";  // spaces
	typewriter("(3)Credits");												     // characters
	std::cout << "                                                  |"; // spaces


	//line 4:
	std::cout << std::endl;
	std::cout << "|                                                     "; // spaces
	typewriter("(4)Exit");												    // characters
	std::cout << "                                                     |"; // spaces

	//line 4:
	std::cout << std::endl;
	std::cout << ("|                                                                                                                 |") << std::endl;
	std::cout << "|                                                    ";
	typewriter("Enter Option: ");												    // characters
	std::cout << "                                               |"; // spaces



	for (int i = 0; i < 8; i++) {
		std::cout << std::endl;
		std::cout << ("|                                                                                                                 |");
		Sleep(10);
	}
	std::cout << std::endl;
	typewriter("===================================================================================================================");

	int Option;
	std::cin >> Option;

	switch (Option) {
	case 1:
		system("cls");
		break;
	case 2:
		system("cls");
		break;
	case 3:
		system("cls");
		break;
	case 4:
		std::exit;
	}

	////Press any key to continue...
//system("pause");
////Clears screen
//system("cls");
}