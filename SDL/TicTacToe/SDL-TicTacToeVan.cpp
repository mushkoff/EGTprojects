//============================================================================
// Name        : SDL-TicTacToeVan.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "Globals.hpp"
#include "Button.h"
#include "Game.h"
#include <stdio.h>
#include <iostream>

int main(int argc, char* args[])
{
	Game game;

	int counter = 0;

	bool calculate = false;

	bool verifyRect1 = false;
	bool verifyRect2 = false;
	bool verifyRect3 = false;
	bool verifyRect4 = false;
	bool verifyRect5 = false;
	bool verifyRect6 = false;
	bool verifyRect7 = false;
	bool verifyRect8 = false;
	bool verifyRect9 = false;

	SDL_Rect r1;
	r1.x = 140;
	r1.y = 170;
	r1.w = button_width;
	r1.h = button_height;
	SDL_Rect r2;
	r2.x = 245;
	r2.y = 160;
	r2.w = button_width;
	r2.h = button_height;

	SDL_Rect r3;
	r3.x = 362;
	r3.y = 160;
	r3.w = button_width;
	r3.h = button_height;

	SDL_Rect r4;
	r4.x = 125;
	r4.y = 246;
	r4.w = button_width;
	r4.h = button_height;

	SDL_Rect r5;
	r5.x = 244;
	r5.y = 246;
	r5.w = button_width;
	r5.h = button_height;

	SDL_Rect r6;
	r6.x = 373;
	r6.y = 256;
	r6.w = button_width;
	r6.h = button_height;

	SDL_Rect r7;
	r7.x = 124;
	r7.y = 332;
	r7.w = button_width;
	r7.h = button_height;

	SDL_Rect r8;
	r8.x = 243;
	r8.y = 332;
	r8.w = button_width;
	r8.h = button_height;

	SDL_Rect r9;
	r9.x = 360;
	r9.y = 332;
	r9.w = button_width;
	r9.h = button_height;

	game.init();
	game.loadMedia();

	bool quit = false;

	SDL_Event ev;

	SDL_SetRenderDrawColor(game.myRender, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderClear(game.myRender);
	SDL_Rect bgRect;
	bgRect.x = 0;
	bgRect.y = 0;
	bgRect.w = screen_width;
	bgRect.h = screen_height;

	game.render(bgRect, game.getBackGround());

	SDL_Rect player1;
	player1.x = 26;
	player1.y = 248;
	player1.w = button_width;
	player1.h = button_height;

	game.render(player1, game.getTextureX());

	SDL_Rect player2;

	player2.x = 503;
	player2.y = 245;
	player2.w = button_width;
	player2.h = button_height;

	game.render(player2, game.getTextureY());

	SDL_RenderPresent(game.myRender);

	while (!quit)
	{
		while (SDL_PollEvent(&ev) != 0)
		{
			if (ev.type == SDL_QUIT)
			{
				quit = true;

			}
			int mouseX, mouseY;
			if (ev.type == SDL_MOUSEBUTTONDOWN)
			{
				calculate = true;
				std::cout << "BUTTON UP " << std::endl;

				SDL_GetMouseState(&mouseX, &mouseY);
				int x = mouseX;
				int y = mouseY;
				if (x >= 125 && x <= 232 && y >= 160 && y <= 232)

				{
					verifyRect1 = true;
					counter++;

				}

				if (x >= 246 && x <= 350 && y >= 160 && y <= 230)

				{
					verifyRect2 = true;
					counter++;

				}

				if (x >= 370 && x <= 458 && y >= 165 && y <= 223)

				{
					verifyRect3 = true;
					counter++;

				}

				if (x >= 133 && x <= 225 && y >= 250 && y <= 314)

				{
					verifyRect4 = true;
					counter++;

				}

				if (x >= 254 && x <= 331 && y >= 257 && y <= 304)

				{
					verifyRect5 = true;
					counter++;

				}

				if (x >= 378 && x <= 450 && y >= 257 && y <= 307)

				{
					verifyRect6 = true;
					counter++;

				}

				if (x >= 142 && x <= 216 && y >= 346 && y <= 395)

				{
					verifyRect7 = true;
					counter++;

				}

				if (x >= 243 && x <= 332 && y >= 354 && y <= 407)

				{
					verifyRect8 = true;
					counter++;

				}
				if (x >= 366 && x <= 467 && y >= 336 && y <= 402)

				{
					verifyRect9 = true;
					counter++;

				}

			}

			if (calculate == true)
			{
				std::cout << "COUNTER: " << counter << std::endl;

			}

			std::cout << "X: " << mouseX << "Y: " << mouseY << std::endl;

			if (calculate == true)
			{
				std::cout << "counter =" << counter << std::endl << verifyRect1
						<< std::endl << verifyRect2 << std::endl << verifyRect3
						<< std::endl << verifyRect4 << std::endl;

				if (verifyRect1 == true)
				{
					if ((counter % 2) == 0)
					{
						game.render(r1, game.getTextureY());
						SDL_RenderPresent(game.myRender);
					}
					else
					{

						game.render(r1, game.getTextureX());
						SDL_RenderPresent(game.myRender);

					}
					verifyRect1 = false;
				}
				if (verifyRect2 == true)
				{
					if ((counter % 2) == 0)
					{
						game.render(r2, game.getTextureY());
						SDL_RenderPresent(game.myRender);
					}
					else
					{

						game.render(r2, game.getTextureX());
						SDL_RenderPresent(game.myRender);
					}
					verifyRect2 = false;
				}
				if (verifyRect3 == true)
				{
					if ((counter % 2) == 0)
					{
						game.render(r3, game.getTextureY());
						SDL_RenderPresent(game.myRender);
					}
					else
					{

						game.render(r3, game.getTextureX());
						SDL_RenderPresent(game.myRender);
					}
					verifyRect3 = false;
				}
				if (verifyRect4 == true)
				{
					if ((counter % 2) == 0)
					{
						game.render(r4, game.getTextureY());
						SDL_RenderPresent(game.myRender);
					}
					else
					{

						game.render(r4, game.getTextureX());
						SDL_RenderPresent(game.myRender);
					}
					verifyRect4 = false;
				}
				if (verifyRect5 == true)
				{
					if ((counter % 2) == 0)
					{
						game.render(r5, game.getTextureY());
						SDL_RenderPresent(game.myRender);
					}
					else
					{

						game.render(r5, game.getTextureX());
						SDL_RenderPresent(game.myRender);
					}
					verifyRect5 = false;
				}
				if (verifyRect6 == true)
				{
					if ((counter % 2) == 0)
					{
						game.render(r6, game.getTextureY());
						SDL_RenderPresent(game.myRender);
					}
					else
					{

						game.render(r6, game.getTextureX());
						SDL_RenderPresent(game.myRender);
					}
					verifyRect6 = false;
				}
				if (verifyRect7 == true)
				{
					if ((counter % 2) == 0)
					{
						game.render(r7, game.getTextureY());
						SDL_RenderPresent(game.myRender);
					}
					else
					{

						game.render(r7, game.getTextureX());
						SDL_RenderPresent(game.myRender);
					}
					verifyRect7 = false;
				}
				if (verifyRect8 == true)
				{
					if ((counter % 2) == 0)
					{
						game.render(r8, game.getTextureY());
						SDL_RenderPresent(game.myRender);
					}
					else
					{

						game.render(r8, game.getTextureX());
						SDL_RenderPresent(game.myRender);
					}
					verifyRect8 = false;
				}
				if (verifyRect9 == true)
				{
					if ((counter % 2) == 0)
					{
						game.render(r9, game.getTextureY());
						SDL_RenderPresent(game.myRender);
					}
					else
					{

						game.render(r9, game.getTextureX());
						SDL_RenderPresent(game.myRender);
					}
					verifyRect9 = false;
				}

				calculate = false;
			}

		}

	}
	game.Free();

	return 0;
}
