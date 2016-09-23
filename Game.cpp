#include "Game.h"


Game::Game()
{
	this->developer = PO::developer;
	this->name = "Saper";
	this->version = 1.3;
}


Game::~Game()
{
	delete this->developer;
}
