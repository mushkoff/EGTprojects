//============================================================================
// Name        : SDL-TUTORIAL.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

const unsigned int WIDTH = 640;
const unsigned int HEIGHT = 480;

int main(int args, char* argc[])
{
	SDL_Window* window = NULL;
	SDL_Surface* ScreenSurface = NULL;
	SDL_Surface* ImageSurface = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cerr << "CANNOT INITIALIZE SDL" << std::endl;
	}

	window = SDL_CreateWindow("TASK 2 (200x200", SDL_WINDOWPOS_UNDEFINED,
	SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);

	ScreenSurface = SDL_GetWindowSurface(window);

	ImageSurface = IMG_Load("pic.png");
	if (ImageSurface == NULL)
	{
		std::cerr << "CANNOT LOAD IMAGE!" << std::endl;
	}

	bool quit = false;
	SDL_Event e;

	while (!quit)
	{
		while (SDL_PollEvent(&e) != 0)
		{
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
		}

		SDL_Rect rect;
		rect.h = 200;
		rect.w = 200;
		rect.x = 210;
		rect.y = 150;

		SDL_BlitSurface(ImageSurface, NULL, ScreenSurface, &rect);
		SDL_UpdateWindowSurface(window);
	}

	return 0;
}
