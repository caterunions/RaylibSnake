#include "Game.hpp"

void Game::Reset() {
	pSnake = std::shared_ptr<Snake>(new Snake());
}