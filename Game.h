#pragma once
#include "PO.h"

class Game:public PO //protect ��� ������� 2
{
public:
	string hero;
	Game();
	Game(string,double);
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

