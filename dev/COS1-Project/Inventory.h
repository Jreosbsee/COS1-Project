#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Inventory {

	vector<string> inventory; // = { "Slot 1, Slot 2, Slot 3, Slot 4, Slot 5" };
	


	void AddItem();
	void RemoveItem();

	//void RenameItem();
};