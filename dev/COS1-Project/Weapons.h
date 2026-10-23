
#pragma once
#include <string>

class Weapons
{
protected:
	std::string name;
	int level = 0;
	int dmgLvl = 0;
};

// Default weapon
class woodenSword : public Weapons
{
public:
	//void SetDefaultWeapon();
	static void DWDialogue();
};


//Future Feature
//class BroadSword : public Weapons {
//public:
//	static void  SetWeapon();
//	static void BroadSwordDialogue();
//};
//
//
//class LongSword : public Weapons {
//public:
//	static void SetWeapon();
//	static void LongSwordDialogue();
//};
//
//
//class Claymore : public Weapons {
//public:
//	static void SetWeapon();
//	static void ClaymoreDialogue();
//};





//Weapon Idea for Boss:

//"Skull of the Underworld", "Demon Sword";
