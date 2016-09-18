#include "Virus.h"


Virus::Virus()
{
	this->developer = new Developer("Pavel");
}


Virus::~Virus()
{
	delete this->developer;
}
