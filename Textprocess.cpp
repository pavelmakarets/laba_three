#include "Textprocess.h"


Textprocess::Textprocess()
{
	this->developer = new Developer("Pavel");
}


Textprocess::~Textprocess()
{
	delete this->developer;
}
