#include "Virus.h"


Virus::Virus()
{
	this->developer = PO::developer;
}


Virus::~Virus()
{
	delete this->developer;
}
