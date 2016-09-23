#include "Game.h"


Game::Game(string name,double version)
{
	this->developer = PO::developer;
	this->name = name;
	this->version = version;
	PO::set_name(name);
}

Game::Game()
{
}

Game::~Game()
{
	delete this->developer;
}
