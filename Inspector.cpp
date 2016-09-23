#include "Inspector.h"



Inspector::Inspector(Developer* dev)
{
	cout<<dev->name<<endl;
}


Inspector::~Inspector()
{
}

string get_Developer(Developer* dev)
{
	return dev->name;
}
