#pragma once

#include <iostream>
#include <raylib.h>
#include "Snake.hpp"

#define GRID_SIZE 31;

class Game {
public:
	Snake snake;

	void Reset();
};