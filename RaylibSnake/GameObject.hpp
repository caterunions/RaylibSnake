#pragma once

#include "Game.hpp"

class GameObject {
public:
	virtual void Update() = 0;
	virtual void Draw() = 0;
	const Vector2& Position() const { return position; }
private:
	Vector2 position;
};