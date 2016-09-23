#pragma once
#include "PO.h"

class Virus:public PO
{
public:
	string get_name()const
	{
		return this->name;
	}
	Virus();
	void ToConsole()
	{

	}
	~Virus();
private:
	const string name = "Shade190";
	Developer* developer;
};

