#pragma once
class Character;

class Story {
public:
	static void mainStory();
	static void Continue();
	static void Battle(Character& player);
	static void FinalStory();
};

