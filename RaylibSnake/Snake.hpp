#pragma once

#include <vector>

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
	const float timeToMove{ 1 / tilesPerSecond };
};