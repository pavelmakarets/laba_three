#pragma once
#include "PO.h"

class Game:protected PO
{
public:
	string hero;
	Game();
	void ToConsole()
	{
		cout << name << endl;
		cout << version << endl;
	}
	~Game();
protected:
	string platform;
private:
	Developer* developer;
	string name;
	double version;
};

