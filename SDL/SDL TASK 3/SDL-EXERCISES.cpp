//============================================================================
// Name        : SDL-EXERCISES.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SDL2/SDL.h"

using namespace std;

const int x = 860;
const int y = 420;

bool init();

bool loadMedia();

void clsoe();

SDL_Window* myWindow = NULL;

SDL_Surface* screen = NULL;

SDL_Surface* picture = NULL;

bool init()
{
	bool success = true;

	if (SDL_Init( SDL_INIT_VIDEO) < 0)
	{
		cout << "SDL could not initialize" << endl;
		success = false;
	}
	else
	{
		//Create window
		myWindow = SDL_CreateWindow("Misho Tutorial", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, x, y, SDL_WINDOW_SHOWN);
		if (myWindow == NULL)
		{
			cout << "Window could not be created" << endl;

			success = false;
		}
		else
		{
			screen = SDL_GetWindowSurface(myWindow);
		}
	}

	return success;
}

bool loadMedia()
{
	bool success = true;

	picture = SDL_LoadBMP("pic.bmp");

	if (picture == NULL)
	{
		cout << "Can not load the picture" << endl;
		success = false;
	}
	return success;
}
void close()
{
	SDL_FreeSurface(picture);
	picture = NULL;

	SDL_DestroyWindow(myWindow);
	myWindow = NULL;


}

int main(int argc, char* args[])
{

	if (!init())
	{
		cout << "Can not laod file" << endl;
	}
	else
	{
		if (!loadMedia())
		{
			cout << "Cannot load picture" << endl;
		}
		else
		{

		}
		SDL_BlitSurface(picture, NULL, screen, NULL);

		SDL_UpdateWindowSurface(myWindow);

		SDL_Delay(7000);
	}

	return 0;
}
