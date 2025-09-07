#pragma once

#include "Game.hpp"

class Snake : public GameObject {
public:
	Snake();
	const int Length() const { return length; }
private:
	int length;
	Vector2 direction;
};