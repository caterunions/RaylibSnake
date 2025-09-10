#include "Game.hpp"

void Game::Reset() {
	pSnake = std::shared_ptr<Snake>(new Snake(5));
}

void Game::Update() {
	if (IsKeyPressed(KEY_RIGHT)) {
		pSnake->HandleMove({ 1, 0 });
	}
	else if (IsKeyPressed(KEY_LEFT)) {
		pSnake->HandleMove({ -1, 0 });
	}
	else if (IsKeyPressed(KEY_UP)) {
		pSnake->HandleMove({ 0, -1 });
	}
	else if (IsKeyPressed(KEY_DOWN)) {
		pSnake->HandleMove({ 0, 1 });
	}

	if (IsKeyPressed(KEY_TAB)) {
		pSnake->AddSegment();
	}

	pSnake->Update();
}

void Game::Draw() {
	pSnake->Draw();
}