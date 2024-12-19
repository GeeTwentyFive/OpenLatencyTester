#include "../external/raylib/raylib.h"



int main() {

        InitWindow(640, 480, 0);



        while (!WindowShouldClose()) {

                BeginDrawing();

                        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
                                ClearBackground(WHITE);
                        }

                        else {
                                ClearBackground(BLACK);
                        }

                EndDrawing();

        }



        return 0;

}