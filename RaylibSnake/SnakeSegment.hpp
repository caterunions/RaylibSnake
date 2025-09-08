#pragma once

#include "GameObject.hpp"

class SnakeSegment : public GameObject {
public:
	SnakeSegment();
	void Update() override;
	void Draw() override;
};