#pragma once

#include <iostream>
#include <raylib.h>
#include "Snake.hpp"
#include <memory>

#define GRID_SIZE 31;

class Game {
public:
	void Reset();
private:
	std::shared_ptr<Snake> pSnake;
};