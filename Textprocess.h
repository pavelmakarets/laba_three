#pragma once
#include "PO.h"

class Textprocess:public PO
{
public:
	Textprocess();
	string get_Developer();
	void ToConsole()
	{

	}
	~Textprocess();
private:
	Developer* developer;
};

