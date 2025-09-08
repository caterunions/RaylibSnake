#pragma once

#include <iostream>
#include <raylib.h>
#include "Snake.hpp"
#include "SnakeSegment.hpp"
#include "GameObject.hpp"
#include <memory>

constexpr int GRID_SIZE{ 32 };

class Game {
public:
	void Reset();
	void Update();
	void Draw();
private:
	std::shared_ptr<Snake> pSnake;
};