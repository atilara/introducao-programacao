#include "raylib.h"

int main(void) {
    // Inicializa a largura e altura da janela como constantes
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Título da Janela");

    SetTargetFPS(60); // Rodará a 60 FPS

    // Loop principal do game
    // Roda o game enquanto o usuário não apertar ESC
    while (!WindowShouldClose()) {
        
        Vector2 mousePosition = GetMousePosition();

        Color ballColor = DARKBLUE;

        // Inicializa a janela
        BeginDrawing();

            if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) ballColor = RED;
            else if (IsMouseButtonDown(MOUSE_RIGHT_BUTTON)) ballColor = DARKGREEN;
            else if (IsMouseButtonDown(MOUSE_MIDDLE_BUTTON)) ballColor = BLACK;

            // Cor do background da janela
            ClearBackground(RAYWHITE);

            // V porque recebe o Vector2 como paramêtro
            DrawCircleV(mousePosition, 30, ballColor);

            // Escreve um texto, recebe o TEXTO, POSIÇÃO EM X, POSIÇÃO EM Y, TAMANHO DA FONTE, COR DA FONTE
            DrawText("Esse círculo segue o movimento do seu Mouse!", 160, 40, 20, LIGHTGRAY);

            DrawText("Clique para trocar a cor do círculo!", 220, 380, 20, LIGHTGRAY);

        EndDrawing();
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}