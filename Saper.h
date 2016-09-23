#pragma once
#include "Game.h"

class Saper:public Game
{
public:
	
	Saper();
	void ToConsole()
	{
		cout << this->name << endl;
	}
	~Saper();
private:
	Developer* developer;
	string name = "Saper";
};

