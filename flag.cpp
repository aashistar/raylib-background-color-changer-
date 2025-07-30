#include<raylib.h>

int main() {
	int length = 800;
	int width = 800;
	Color bgcolor = WHITE;
	InitWindow(width, length, "Background Changer");
	while (!WindowShouldClose()) {
		BeginDrawing();
		DrawText("PRESS LETTERS ACCORINDINGLY TO CHANGE COLOR \n COLOR AVAILABLE ARE \n 1.BLACK(B)\n 2.YELLOW(Y)\n 3.BLUE(E)\n 4.PINK(P)\n 5.GREEN(G)\n 5.MAROON(M)\n 6.ORANGE(O)\n 7.LIME(L)\n 8.SKYBLUE(S)\n 9.VOILET(V)\n 10.RAYWHITE(R)\n 11.PURPLE(U)",10,10,20,BLACK);
		if (IsKeyPressed(KEY_B))
			bgcolor = BLACK;
		else if (IsKeyPressed(KEY_Y))
			bgcolor = YELLOW;
		else if (IsKeyPressed(KEY_E))
			bgcolor = BLUE;
		else if (IsKeyPressed(KEY_P))
			bgcolor = PINK;
		else if (IsKeyPressed(KEY_G))
			bgcolor = GREEN;
		else if (IsKeyPressed(KEY_M))
			bgcolor = MAROON;
		else if (IsKeyPressed(KEY_O))
			bgcolor = ORANGE;
		else if (IsKeyPressed(KEY_L))
			bgcolor = LIME;
		else if (IsKeyPressed(KEY_S))
			bgcolor = SKYBLUE;
		else if (IsKeyPressed(KEY_V))
			bgcolor = VIOLET;
		else if (IsKeyPressed(KEY_R))
			bgcolor = RAYWHITE;
		else if (IsKeyPressed(KEY_U))
			bgcolor = PURPLE;

		ClearBackground(bgcolor);

		EndDrawing();
	}
	CloseWindow();
}