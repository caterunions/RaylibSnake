#pragma once

#include <vector>
#include <raylib.h>
#include "GameObject.hpp"
#include "SnakeSegment.hpp"

class Snake : public GameObject {
public:
	Snake(const float&);
	const int Length() const { return segments.size(); }
	void Update() override;
	void Draw() override;
	void HandleMove(const Vector2&);
private:
	Vector2 direction;
	std::vector<SnakeSegment> segments{ };
	float tilesPerSecond;
	float accumulatedDeltaTime;
	float timeToMove;
};