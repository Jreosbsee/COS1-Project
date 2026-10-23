#pragma once
#include <iostream>
#include <string>

class mainMenu {
public:

	static void MainMenu();

	static void CenterOutput(const char *s, int n);

	//"typewriter" animation for menu and text dialogue.
	static void typewriter(const std::string& text);

	static void loadingAnimation();

	static std::string set_arrow(int point, int item_no);
	
	static void CenterText(const std::string& text);
};

class OtherMenu {
public:

	//settings
	static void Settings();

	//Credits
	static void Credits();

};



