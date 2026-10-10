#include <stdio.h>
#include <windows.h>
#include "MainMenu.h"
#include "story.h"

void mainMenu::typewriter(std::string text) {
	for (int i = 0; text[i] != '\0'; i++) {
		std::cout << text[i] << "\xDB";
		for (auto j = 0; j < 90000000; j++); //takes up lots of memory, is there a more modern solution?
		std::cout << "\b \b";

		//return 0;
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


void mainMenu::CenterOutput(const char *s, int n) {
	printf("%*s\n", (n + (int)strlen(s)) / 2, s);
};

void mainMenu::MainMenu(std::string menu) {
	//value shows at 120
	int n = printf("                                                                                                                        ") - 2; //OG:120
	CenterOutput("===========================================================", n); //OG:120

	CenterOutput("=== The Final Ruin ===", n);
	CenterOutput("Play Game", n);
	CenterOutput("Settings", n);
	CenterOutput("Credits", n);
	CenterOutput("Exit", n);

	CenterOutput("===========================================================", n); //OG:120



	////115x26
	//typewriter("===================================================================================================================");
	//for (int i = 0; i < 8; i++) {
	//	std::cout << std::endl;
	//	std::cout << ("|                                                                                                                 |");
	//	Sleep(10);
	//}
	//	//line 1:
	//	std::cout << std::endl;
	//	std::cout << "|                                                   ";
	//	typewriter("The Final Ruin");
	//	std::cout << "                                                |";


	//	//line 2:
	//	std::cout << std::endl;
	//	std::cout << "|                                                     ";
	//	typewriter("(1) Play Game!");
	//	std::cout << "                                              |";

	//	//line 2:
	//	std::cout << std::endl;
	//	std::cout << "|                                                     ";
	//	typewriter("(2)Settings");
	//	std::cout << "                                                 |";


	//	//line 3:
	//	std::cout << std::endl;
	//	std::cout << "|                                                     ";
	//	typewriter("(3)Credits");
	//	std::cout << "                                                  |";


	//	//line 4:
	//	std::cout << std::endl;
	//	std::cout << "|                                                     ";
	//	typewriter("(4)Exit");
	//	std::cout << "                                                     |";

	//	//line 4:
	//	std::cout << std::endl;
	//	std::cout << ("|                                                                                                                 |") << std::endl;
	//	std::cout << "|                                                    ";
	//	typewriter("Enter Option: ");
	//	std::cout << "                                               |";



	//	for (int i = 0; i < 8; i++) {
	//		std::cout << std::endl;
	//		std::cout << ("|                                                                                                                 |");
	//		Sleep(10);
	//	}
	//	std::cout << std::endl;
	//	typewriter("===================================================================================================================");







		int Option;
		std::cin >> Option;

		//add loop for menu
		//use bitwise for option control? 
		switch (Option) {

		case 1:
			system("cls");
			Story::Continue();
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