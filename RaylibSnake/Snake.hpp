#include "Game.hpp"

class Snake {
public:
	Snake();
	const int Length() const { return length; }
private:
	int length;
	Vector2 direction;
};