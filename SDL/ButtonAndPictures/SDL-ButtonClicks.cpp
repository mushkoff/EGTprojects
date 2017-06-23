//============================================================================
// Name        : SDL-ButtonClicks.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Operations.h"
#include "Button.h"
#include "Globals.hpp"
#include "SDL2/SDL.h"
#include <stdio.h>

int main(int argc, char* args[])
{
	Button b(628, 433);
	Operations op;

	op.init();
	op.loadMedia();

	bool quit = false;
	bool firstPic = false;
	bool deletedText = false;

	int counter = 0;
	SDL_Event ev;
	SDL_SetRenderDrawColor(op.myRender, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderClear(op.myRender);

	SDL_Rect backgroundRect;
	backgroundRect.x = 0;
	backgroundRect.y = 0;
	backgroundRect.w = screen_width;
	backgroundRect.h = screen_height;

	op.render(backgroundRect, op.getBackGround());

	SDL_Rect buttonStart;
	buttonStart.x = 600;
	buttonStart.y = 400;
	buttonStart.w = button_width;
	buttonStart.h = button_height;

	SDL_Rect buttonCutStart;
	buttonCutStart.x = 175;
	buttonCutStart.y = 0;
	buttonCutStart.w = 175;
	buttonCutStart.h = 177;

	SDL_Rect secondPic;
	secondPic.x = 20;
	secondPic.y = 20;
	secondPic.w = 350;
	secondPic.h = 250;

	SDL_Rect buttonPressed;
	buttonPressed.x = 600;
	buttonPressed.y = 400;
	buttonPressed.w = button_width;
	buttonPressed.h = button_height;

	SDL_Rect pictureRect;
	pictureRect.x = 20;
	pictureRect.y = 20;
	pictureRect.w = 350;
	pictureRect.h = 250;

	b.setButtonRect();

	SDL_Rect buttonCutPressed;
	buttonCutPressed.x = 0;
	buttonCutPressed.y = 0;
	buttonCutPressed.w = 170;
	buttonCutPressed.h = 177;

	SDL_RenderCopy(op.myRender, op.getButtonTexture(), &buttonCutStart,
			&buttonStart);

	while (!quit)
	{
		while (SDL_PollEvent(&ev) != 0)
		{
			if (ev.type == SDL_QUIT)
			{
				quit = true;

			}

			if (ev.type == SDL_MOUSEBUTTONDOWN)
			{

				if (ev.button.button == SDL_BUTTON_LEFT)
				{
					int mx, my;
					SDL_GetMouseState(&mx, &my);
					int x = mx;
					int y = my;
					std::cout << "X is: " << x << "Y is: " << y << std::endl;

					if (b.isClicked(x, y))
					{
						counter++;

						firstPic = true;
						deletedText = true;

					}

					if (firstPic == true)
					{
						if ((counter % 2) == 0)
						{

							SDL_RenderCopy(op.myRender, op.getButtonTexture(),
									&buttonCutPressed, &buttonPressed);

							SDL_RenderCopy(op.myRender,
									op.getTextureSecondPic(),
									NULL, &pictureRect);

						}
						else
						{

							SDL_RenderCopy(op.myRender, op.getButtonTexture(),
									&buttonCutStart, &buttonStart);
							SDL_RenderCopy(op.myRender, op.getTextureFirstPic(),
							NULL, &secondPic);
//				op.render(20,20, op.getTextureSecondPic());

						}

					}
				}
				if (ev.button.button == SDL_BUTTON_RIGHT)
				{
					int mx, my;
					SDL_GetMouseState(&mx, &my);
					int x = mx;
					int y = my;
					if (b.isClicked(x, y))
					{
						op.modifyPic(secondPic, 56);
						SDL_RenderCopy(op.myRender, op.getTextureFirstPic(),
						NULL, &secondPic);
					}
				}
				if (deletedText == true)
				{
					if ((counter % 2) == 0)
					{
						op.freeTexture(op.getTextureSecondPic());
					}

				}
			}
//		game.renderer(backgroundRect, game.getBackGround());

//		SDL_Delay(100);

			SDL_RenderPresent(op.myRender);

		}
	}

	return 0;
}

