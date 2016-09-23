#pragma once;
#include "Computer.h"
class Keyboard
{
public:
	Keyboard(Computer*);
	void install_SOFT()
	{
		this->comp->add_PO(new Game("Stronghold", 1.2));
		this->comp->add_PO(new Word());
		this->comp->add_PO(new Game("Saper", 1.1));
		this->comp->add_PO(new Game("CS", 1.5));
	}
	void poisc_SOFT(string name)
	{
		PO* SOFT = this->comp->get_PO(name);
		SOFT->ToConsole();
	}
	void print_SOFT()
	{
		this->comp->perebor();
	}
	~Keyboard();
private:
	Computer* comp;
};

