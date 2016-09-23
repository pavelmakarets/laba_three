#include "Developer.h"


Developer::Developer(string name)
{
	this->name = name;
	cout << "Developer created : " << name << endl;
}


Developer::~Developer()
{
	cout << "Developer destroyed " << endl;
}

string Developer::get_name()
{
	return this->name;
}
