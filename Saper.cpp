#include "Saper.h"


Saper::Saper()
{
	this->developer = PO::developer;
	this->hero = "Maks";
}


Saper::~Saper()
{
	delete this->developer;
}
