#pragma once
#include <iostream>
class Weapons {
public:
	std::string name;
	int level;
	int dmgLvl;

	
};

//Default weapon
class woodenSword : public Weapons {
public:
	std::string name;
	int level = 0;
	int wdmgLvl = 2;
	
	void SetDefaultWeapon();
	void DWDialogue();
};



class BroadSword : public Weapons {

	std::string name;
	int level = 2;
	int wdmgLvl = 4;

	void SetWeapon();
	void BroadSwordDialogue();
};

class LongSword : public Weapons {

	std::string name;
	int level = 3;
	int wdmgLvl = 5;
	void SetWeapon();
	void LongSwordDialogue();
};

class Claymore : public Weapons {

	std::string name;
	int level = 4;
	int wdmgLvl = 6;

	void SetWeapon();
	void ClaymoreDialogue();
};