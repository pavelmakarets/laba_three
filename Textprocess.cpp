#include "Textprocess.h"


Textprocess::Textprocess()
{
	this->developer = PO::developer;
}


Textprocess::~Textprocess()
{
	delete this->developer;
}

string Textprocess::get_Developer()
{
	return this->developer->get_name();
}

