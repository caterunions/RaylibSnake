#include <iostream>
#include <raylib.h>
#include "Game.hpp"

static const int ScreenWidth{ 800 };
static const int ScreenHeight{ 450 };

static Game GameInstance{ 0 };

void Draw();
void Update();
void InitGame();

int main()
{
    InitWindow(ScreenWidth, ScreenHeight, "raylib snake");

    SetTargetFPS(60);

    InitGame();

    while (!WindowShouldClose()) {
        Update();

        Draw();
    }

    CloseWindow();

    return 0;
}

void Update() {

}

void Draw() {
    BeginDrawing();

    ClearBackground(RAYWHITE);

    EndDrawing();
}

void InitGame() {
    GameInstance = { 0 };
}