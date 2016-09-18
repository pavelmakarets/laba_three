#include "PO.h"


PO::PO()
{
	this->developer = new Developer("Pavel");
}


PO::~PO()
{
	delete this->developer;
}
