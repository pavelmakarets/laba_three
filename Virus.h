#pragma once
#include "PO.h"

class Virus:public PO
{
public:
	Virus();
	~Virus();
private:
	Developer* developer;
};

