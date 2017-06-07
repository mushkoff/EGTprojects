//============================================================================
// Name        : SDL-mouseclick.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL2/SDL.h>
#include <stdio.h>
#include <string>

int width = 640;
int height = 480;

// mouse click

SDL_Window* myWindow = NULL;

SDL_Surface* screenSurface = NULL;

int main(int argc, char* args[])
{

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cerr << "Could not initialize SDL: " << SDL_GetError();
		return false;
	}

	//Create window
	myWindow = SDL_CreateWindow("Mouseclick task", SDL_WINDOWPOS_UNDEFINED,
	SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);

	if (myWindow == NULL)
	{
		std::cerr << "WINDOW CANNOT BE INITIALIZED!!!" << SDL_GetError();
		return false;
	}

	else
	{
		screenSurface = SDL_GetWindowSurface(myWindow);
	}

	bool quit = false;
	SDL_Event e;
	int counter = 0;
	while (!quit)
	{
		while (SDL_PollEvent(&e) != 0)
		{
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
			else if (e.type == SDL_MOUSEBUTTONDOWN)
			{
				int x, y;

				SDL_GetMouseState(&x, &y);

				std::cout << " X postitioning is: " << " " << x
						<< " Y positioning is: " << y << "\n";

				counter++;

			}

		}
	}
	std::cout << "Mouse clicks are: " << counter << "\n" << std::endl;

	SDL_FreeSurface(screenSurface);

	SDL_FreeSurface(screenSurface);
	screenSurface = NULL;

	SDL_DestroyWindow(myWindow);
	myWindow = NULL;
	SDL_Quit();

	return 0;
}
