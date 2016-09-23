#pragma once
#include "Word.h"
class Printer
{
public:
	Printer();
	void iAmPrinting(PO *someobj)
	{
		if (typeid(PO*) == typeid(someobj))
		{
			someobj->ToConsole();
		}
	}
	~Printer();
};

