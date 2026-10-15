#pragma once
#include <iostream>
class Weapons {
protected:
	std::string name;
	int level;
	int dmgLvl;

	
};

//Default weapon
class woodenSword : public Weapons {
public:
	void SetDefaultWeapon();
	static void DWDialogue();
};



class BroadSword : public Weapons {
public:
	static void  SetWeapon();
	static void BroadSwordDialogue();
};

class LongSword : public Weapons {
public:
	static void SetWeapon();
	static void LongSwordDialogue();
};

class Claymore : public Weapons {
public:
	static void SetWeapon();
	static void ClaymoreDialogue();
};




















//#pragma once
//#include <iostream>
//class Weapons {
//public:
//	std::string name;
//	int level;
//	int dmgLvl;
//
//
//};
//
////Default weapon
//class woodenSword : public Weapons {
//public:
//	std::string name;
//	int level = 0;
//	int wdmgLvl = 2;
//
//	static void SetDefaultWeapon();
//	static void DWDialogue();
//};
//
//
//
//class BroadSword : public Weapons {
//
//	std::string name;
//	int level = 2;
//	int wdmgLvl = 4;
//
//	static void  SetWeapon();
//	static void BroadSwordDialogue();
//};
//
//class LongSword : public Weapons {
//
//	std::string name;
//	int level = 3;
//	int wdmgLvl = 5;
//	static void SetWeapon();
//	static void LongSwordDialogue();
//};
//
//class Claymore : public Weapons {
//
//	std::string name;
//	int level = 4;
//	int wdmgLvl = 6;
//
//	static void SetWeapon();
//	static void ClaymoreDialogue();
//};