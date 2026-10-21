#pragma once
#include <iostream>
#include <string>

class mainMenu {
public:
	//std::string mMenu; | Probably not needed, can delete

	static void MainMenu();

	static void CenterOutput(const char *s, int n);

	//"typewriter" animation for menu and text dialogue.
	static void typewriter(std::string text);

	//static void fasttypewriter(std::string text);

	static void loadingAnimation();

	static std::string set_arrow(int point, int item_no);
	
};

class OtherMenu {
public:

	//settings
	static void Settings();

	//Credits
	static void Credits();






	
};



