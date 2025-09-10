#include "Game.hpp"
#include "Snake.hpp"

Snake::Snake(const float& _tilesPerSecond) {
	direction = { 1, 0 };
	segments.push_back(SnakeSegment());
	tilesPerSecond = _tilesPerSecond;
	accumulatedDeltaTime = 0;
	timeToMove = 1 / tilesPerSecond;
}

void Snake::Update() {
	accumulatedDeltaTime += GetFrameTime();

	if (accumulatedDeltaTime >= timeToMove) {
		accumulatedDeltaTime -= timeToMove;
		position.x += direction.x;
		position.y += direction.y;

		for (int i = 0; i < segments.size(); i++) {
			if (i == 0) {
				segments[i].SetPosition(position);
			}
			else segments[i].SetPosition(segments[i - 1].PrevPosition());
		}
	}
}

void Snake::Draw() {
	for (SnakeSegment segment : segments) {
		segment.Draw();
	}
}

void Snake::HandleMove(const Vector2& moveInfo) {
	if ((moveInfo.x == 0 && direction.y == 0) || (moveInfo.y == 0 && direction.x == 0)) {
		direction = moveInfo;
	}
}

void Snake::AddSegment() {
	SnakeSegment back = segments.back();
	SnakeSegment addition = SnakeSegment();
	segments.push_back(addition);
	addition.SetPosition(back.PrevPosition());
}