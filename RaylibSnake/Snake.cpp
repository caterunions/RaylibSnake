#include "Game.hpp"

Snake::Snake(const float& _tilesPerSecond) {
	direction = { 1, 0 };
	segments.push_back(SnakeSegment());
	tilesPerSecond = _tilesPerSecond;
}

void Snake::Update() {
	accumulatedDeltaTime += GetFrameTime();

	if (accumulatedDeltaTime >= timeToMove) {
		accumulatedDeltaTime -= timeToMove;
		position.x += direction.x;
		position.y += direction.y;
	}
}

void Snake::Draw() {
	for (SnakeSegment segment : this->segments) {
		segment.Draw();
	}
}

void Snake::HandleMove(const Vector2& moveInfo) {
	if ((moveInfo.x == 0 && direction.y == 0) || (moveInfo.y == 0 && direction.x == 0)) {
		direction = moveInfo;
	}
}