#include "Game.hpp"
#include "SnakeSegment.hpp"

SnakeSegment::SnakeSegment() {

}

void SnakeSegment::Update() {

}

void SnakeSegment::Draw() {
	DrawRectangleV({ position.x * GRID_SIZE, position.y * GRID_SIZE }, { GRID_SIZE, GRID_SIZE }, BLUE);
}

void SnakeSegment::SetPosition(const Vector2& pos) {
	position = pos;
}