#include "Game.h"


Game::Game()
{
	this->developer = new Developer("Pavel");
}


Game::~Game()
{
	delete this->developer;
}
