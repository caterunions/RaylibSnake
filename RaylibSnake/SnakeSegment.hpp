#pragma once

#include "Game.hpp"

class SnakeSegment : public GameObject {
public:
	SnakeSegment();
	void Update() override;
	void Draw() override;
};