#include <stdio.h>
#include <windows.h>
#include <iostream>
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

///------------------------------------------


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






HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

static std::string set_arrow(int point, int item_no) {

	if (item_no == point) {
		return "-->";
	}
	else {
		return "   ";
	}
}








void mainMenu::CenterOutput(const char *s, int n) {
	printf("%*s\n", (n + (int)strlen(s)) / 2, s);
};

//Function for each option:

void PlayGame()
{
	system("cls");
	Story::Continue();
}

void Settings()
{
	system("cls");
	OtherMenu::Settings();
	
}

void Credits()
{
	system("cls");
	OtherMenu::Credits();
	
}

void Exit()
{
	std::exit(0);
}

void mainMenu::MainMenu() {
	

	int point = 1;
	int min = 1, max = 4;

	while (true) {

		system("cls");
		std::cout << "=== The Final Ruin ===" << std::endl;
		std::cout << set_arrow(point, 1);
		std::cout << "Play Game" << std::endl;
		std::cout << set_arrow(point, 2);
		std::cout << "Settings" << std::endl;
		std::cout << set_arrow(point, 3);
		std::cout << "Credits" << std::endl;
		std::cout << set_arrow(point, 4);
		std::cout << "Exit" << std::endl;

		while (true)
		{
			if (GetAsyncKeyState(VK_UP))
			{
				if (point > min)
				{
					point--;
				}
				break;
			}
			if (GetAsyncKeyState(VK_DOWN))
			{
				if (point < max)
				{
					point++;
				}
				break;
			}
			if (GetAsyncKeyState(VK_RETURN))
			{
				while (GetAsyncKeyState(VK_RETURN) & 0x8000) {
					Sleep(10);
					goto function_call;
				}
				
			}
		}
		Sleep(100);
		system("cls");
		if (false)
		{
		function_call:
			switch (point) {

			case 1:
				PlayGame();
				break;
			case 2:
				Settings();
				break;
			case 3:
				Credits();
				break;
			case 4:
				Exit();
				break;
			}

		}
	}

}


	
//Settings page

void OtherMenu::Settings() {
	mainMenu::typewriter("Settings!!!!");
	std::cout << std::endl;
	system("pause");
	Sleep(100);
	//add menu functionality
	//nothing serious here for now, just add some funny settings that don't affect game play
}

void OtherMenu::Credits() {
	mainMenu::typewriter("Credits: ");
	std::cout << std::endl;
	system("pause");
	Sleep(100);
	//add all of the roles I covered: project manager, developer, etc etc.
	//mainMenu::typewriter("");
}









//Used as a reference or deleted later:


////Press any key to continue...
//system("pause");
////Clears screen
//system("cls");




		//int n = printf("                                                                                                                        ") - 2; //OG:120
		//CenterOutput("===========================================================", n); //OG:120

		//CenterOutput("=== The Final Ruin ===", n);
		//std::cout << set_arrow(point, 1);
		//CenterOutput("Play Game", n);
		//std::cout << set_arrow(point, 2);
		//CenterOutput("Settings", n);
		//std::cout << set_arrow(point, 3);
		//CenterOutput("Credits", n);
		//std::cout << set_arrow(point, 4);
		//CenterOutput("Exit", n);

		//CenterOutput("===========================================================", n); //OG:120





//	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
//	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
//	INPUT_RECORD inp;
//	DWORD num_of_events;
//
//	bool exit = false;
//	int opt = 10;
//	do {
//		ReadConsoleInput(hIn, &inp, 1, &num_of_events);
//
//		switch (inp.EventType) {
//
//		case KEY_EVENT:
//			switch (inp.Event.KeyEvent.wVirtualKeyCode) {
//
//			case VK_UP:
//				if (opt > 4) {
//					test--;
//				}
//				break;
//
//			case VK_DOWN:
//				if (opt <= 0) {
//					test++;
//				}
//				break;
//
//			case VK_LEFT:
//				std::cout << "LEFT\n";
//				break;
//
//			case VK_RIGHT:
//				std::cout << "RIGHT\n";
//				break;
//
//			case VK_ESCAPE:
//				exit = true;
//				break;
//			}
//			break;
//		}
//
//	} while (!exit);
//}