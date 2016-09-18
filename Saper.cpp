#include "Saper.h"


Saper::Saper()
{
	this->developer = new Developer("Pavel");
}


Saper::~Saper()
{
	delete this->developer;
}
