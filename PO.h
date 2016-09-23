#pragma once
#include "Developer.h"

class PO
{
public:
	PO();
	~PO();
	virtual void ToConsole() = 0;
	Developer* developer;
	string get_name()
	{
		return this->name;
	}
	void set_name(string name)
	{
		this->name = name;
	}
	PO* next;
	PO* prev;
private:
	string name;
};

