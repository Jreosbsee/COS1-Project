#include <stdio.h>
#include <windows.h>
#include <iostream>
#include "MainMenu.h"
#include "story.h"

void mainMenu::typewriter(const std::string& text)
{
    for (char letter : text)
    {
        std::cout << letter << "\xDB" << std::flush;
        Sleep(20); //adjust sleep speed
        std::cout << "\b \b" << std::flush;
    }
}

void mainMenu::loadingAnimation() 
{
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

std::string mainMenu::set_arrow(int point, int item_no)
{

	if (item_no == point) {
		 
		return "-->";
	}
	else {
		return "   ";
	}
}


void mainMenu::MainMenu() 
{
	int point = 1;
	const int min = 1;
	const int max = 4;

	while (true) 
	{
		system("cls");
		std::cout << "=== The Final Ruin ===" << std::endl;
		std::cout << set_arrow(point, 1) << "Play Game" << std::endl;
		std::cout << set_arrow(point, 2) << "Settings" << std::endl;
		std::cout << set_arrow(point, 3) << "Credits" << std::endl;
		std::cout << set_arrow(point, 4) << "Exit" << std::endl;

		while (true)
		{
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				if (point > min)
				{
					point--;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				if (point < max)
				{
					point++;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) & 0x8000)
			{
				while (GetAsyncKeyState(VK_RETURN) & 0x8000) 
				{
					Sleep(10);
				}
				switch (point) 
				{

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
				break;
			}
			Sleep(10);
		}
		while ((GetAsyncKeyState(VK_UP) & 0x8000) || (GetAsyncKeyState(VK_DOWN) & 0x8000))
		{
			Sleep(10);
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