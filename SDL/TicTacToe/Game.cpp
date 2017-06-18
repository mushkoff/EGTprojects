/*
 * Game.cpp
 *
 *  Created on: 18.06.2017 ã.
 *      Author: user
 */

#include "Game.h"
#include <stdio.h>
#include <iostream>

Game::Game() :
		backGround(NULL), textureX(NULL), textureY(NULL)
{

}

Game::~Game()
{
	// TODO Auto-generated destructor stub
}

SDL_Texture*& Game::getTextureX()
{
	return textureX;
}

SDL_Texture*& Game::getTextureY()
{
	return textureY;
}

void Game::renderer(SDL_Rect& from, SDL_Rect& to)
{

}

void Game::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cerr << "Cannot initialize!" << std::endl;

	}
	if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1"))
	{
		std::cerr << "ERROR - Linear structure!" << std::endl;

	}
	myWindow = SDL_CreateWindow("TicTacToe", SDL_WINDOWPOS_UNDEFINED,
	SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height,
			SDL_WINDOW_SHOWN);


	if (myWindow == NULL)
	{
		std::cerr << "Cannot create window!" << std::endl;

	}
	myRender = SDL_CreateRenderer(myWindow, -1, SDL_RENDERER_PRESENTVSYNC);
	if (myRender == NULL)
	{
		std::cerr << "Cannot create renderer!!!" << std::endl;

	}
	SDL_SetRenderDrawColor(myRender, 0xFF, 0xFF, 0xFF, 0xFF);
	int imgFlags = IMG_INIT_PNG;
	if (!(IMG_Init(imgFlags) & imgFlags))
	{
		std::cerr << "Cannot initialize a PNG image" << std::endl;
	}

}
void Game::loadMedia()
{
	backGround = loadTexture("file_74632.png");
	if (backGround == NULL)
	{
		std::cerr << "Problem loading background picture!" << std::endl;

	}
	textureX = loadTexture("x.png");
	if (textureX == NULL)
	{
		std::cerr << "Cannot load X texture!" << std::endl;

	}
	textureY = loadTexture("ounjtu.png");
	if (textureY == NULL)
	{
		std::cerr << "Cannot load 0 texture" << std::endl;

	}
}
SDL_Texture* Game::loadTexture(std::string picturePath)
{
	SDL_Texture* newTexture = NULL;

	SDL_Surface* loadedSurface = IMG_Load(picturePath.c_str());
	if (loadedSurface == NULL)
	{
		std::cerr << "Cannot load surface!" << std::endl;

	}
	SDL_SetColorKey(loadedSurface, SDL_TRUE,
			SDL_MapRGB(loadedSurface->format, 255, 255, 255));
	newTexture = SDL_CreateTextureFromSurface(myRender, loadedSurface);
	if (newTexture == NULL)
	{
		std::cerr << "New texture cannot be created! " << std::endl;

	}

	SDL_FreeSurface(loadedSurface);
	return newTexture;

}
void Game::Free()
{
	SDL_DestroyTexture(backGround);
	SDL_DestroyTexture(textureX);
	SDL_DestroyTexture(textureY);
	backGround = NULL;
	textureX = NULL;
	textureY = NULL;

	SDL_DestroyRenderer(myRender);
	myRender = NULL;

	SDL_DestroyWindow(myWindow);
	myWindow = NULL;

	IMG_Quit();
	SDL_Quit();

}

SDL_Texture*& Game::getBackGround()
{
	return backGround;
}
void Game::render(SDL_Rect &rectButton, SDL_Texture* newTexture)
{

	SDL_RenderCopy(myRender, newTexture, NULL, &rectButton);

}
