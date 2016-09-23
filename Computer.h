#pragma once
#include "PO.h"

class Computer
{
public:
	Computer();
	void set_element();
	PO* get_element();
	void add_element(PO&);
	void remove_element(PO&);
	void print_elements();
	~Computer();
};

