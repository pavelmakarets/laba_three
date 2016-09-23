#pragma once
#include <string>
#include <iostream>
using namespace std;

class Developer
{
public:
	Developer(string);
	string get_name();
	~Developer();
	friend class Inspector;
	friend string get_Developer(Developer* dev);
private:
	string name;
};




