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
	Button b(600, 400);
	Operations op;

	op.init();
	op.loadMedia();

	bool quit = false;
	bool firstPic = false;

	SDL_Event ev;

	while (!quit)
	{
		while (SDL_PollEvent(&ev) != 0)
		{
			if (ev.type == SDL_QUIT)
			{
				quit = true;

			}

		}

		SDL_SetRenderDrawColor(op.myRender, 0xFF, 0xFF, 0xFF, 0xFF);
		SDL_RenderClear(op.myRender);

		SDL_Rect backgroundRect;
		backgroundRect.x = 0;
		backgroundRect.y = 0;
		backgroundRect.w = screen_width;
		backgroundRect.h = screen_height;

		op.render(backgroundRect, op.getBackGround());

		SDL_Rect buttonRect;
		buttonRect.x = 600;
		buttonRect.y = 400;
		buttonRect.w = button_width;
		buttonRect.h = button_height;

		SDL_Rect buttonCut;
		buttonCut.x = 175;
		buttonCut.y = 0;
		buttonCut.w = 175;
		buttonCut.h = 177;

		SDL_RenderCopy(op.myRender, op.getButtonTexture(), &buttonCut,
				&buttonRect);

		if (ev.type == SDL_MOUSEBUTTONDOWN)
		{
			int mx, my;
			SDL_GetMouseState(&mx, &my);
			int x = mx;
			int y = my;
			std::cout << "X is: " << x << "Y is: " << y << std::endl;

//			if (x >= 600 && x <= x + button_width && y >= 400
//					&& y <= y + button_height)
//			{
			if (b.isClicked(600, 400))
			{
				firstPic = true;

				b.setButtonRect();

				SDL_Rect buttonCut;
				buttonCut.x = 0;
				buttonCut.y = 0;
				buttonCut.w = 170;
				buttonCut.h = 177;
				SDL_RenderCopy(op.myRender, op.getButtonTexture(), &buttonCut,
						&buttonRect);
//
//				int offset = 80;
//
//				for (int i = 0; i < 8; i++)
//				{
//				game.Render(90 + i * offset, 450,&game.arraySpriteWhite[i]);
//
//			}
				SDL_Rect pictureRect;
				pictureRect.x = 20;
				pictureRect.y = 20;
				pictureRect.w = 350;
				pictureRect.h = 250;
				SDL_RenderCopy(op.myRender, op.getTextureFirstPic(),
				NULL, &pictureRect);

			}

		}
		if (firstPic == true)
		{
			SDL_Rect pictureRect;
			pictureRect.x = 20;
			pictureRect.y = 20;
			pictureRect.w = 350;
			pictureRect.h = 250;
			SDL_RenderCopy(op.myRender, op.getTextureFirstPic(), NULL,
					&pictureRect);
			op.modifyPic(pictureRect);


		}
//		game.renderer(backgroundRect, game.getBackGround());
		SDL_RenderPresent(op.myRender);
//		SDL_Delay(100);

	}

	return 0;
}

