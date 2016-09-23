#pragma once
#include "Developer.h"

class PO
{
public:
	PO();
	~PO();
	virtual void ToConsole() = 0;
	Developer* developer;
};

