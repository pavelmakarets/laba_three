#pragma once
#include "PO.h"

class Game:public PO
{
public:
	Game();
	~Game();
private:
	Developer* developer;
};

