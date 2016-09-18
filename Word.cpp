#include "Word.h"


Word::Word()
{
	this->developer = new Developer("Pavel");
}


Word::~Word()
{
	delete this->developer;
}
