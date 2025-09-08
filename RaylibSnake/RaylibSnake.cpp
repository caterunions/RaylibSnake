#include <iostream>
#include <raylib.h>
#include "Game.hpp"

static const int ScreenWidth{ 800 };
static const int ScreenHeight{ 450 };

static Game GameInstance{ };

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
    GameInstance.Update();
}

void Draw() {
    BeginDrawing();

    ClearBackground(RAYWHITE);

    GameInstance.Draw();

    EndDrawing();
}

void InitGame() {
    GameInstance.Reset();
}