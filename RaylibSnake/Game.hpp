#pragma once

#include <iostream>
#include <raylib.h>
#include "Snake.hpp"
#include "GameObject.hpp"
#include <memory>

#define GRID_SIZE 31;

class Game {
public:
	void Reset();
	void Update();
	void Draw();
private:
	std::shared_ptr<Snake> pSnake;
};