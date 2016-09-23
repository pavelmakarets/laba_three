#pragma once
#include "PO.h"
#include "Game.h"
#include "Word.h"

class Computer
{
public:
	Computer();
	void set_PO(string,PO*);
	PO* get_PO(string);
	void add_PO(PO*);
	void remove_PO(string);
	void print_PO();
	void perebor();
	~Computer();
private:
	PO* BIOS;
};

