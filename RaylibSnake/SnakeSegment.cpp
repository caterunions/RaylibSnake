#include "Game.hpp"

SnakeSegment::SnakeSegment() {

}

void SnakeSegment::Update() {

}

void SnakeSegment::Draw() {
	DrawRectangleV(position, { GRID_SIZE, GRID_SIZE }, BLUE);
}