#pragma once
#include <iostream>
#include <string>

class mainMenu {
public:
	std::string mMenu;

	void MainMenu(std::string menu);

	static void CenterOutput(const char *s, int n);

	//"typewriter" animation for menu and text dialogue.
	static void typewriter(std::string text);

	//static void fasttypewriter(std::string text);

	static void loadingAnimation();

};