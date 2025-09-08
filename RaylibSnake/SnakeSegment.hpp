#pragma once

#include "GameObject.hpp"
#include "raylib.h"

class SnakeSegment : public GameObject {
public:
	SnakeSegment();
	void Update() override;
	void Draw() override;
	void SetPosition(const Vector2&);
};