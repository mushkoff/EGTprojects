/*
 * Game.h
 *
 *  Created on: 18.06.2017 ã.
 *      Author: user
 */

#ifndef GAME_H_
#define GAME_H_
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "Globals.hpp"
#include "Button.h"
#include <stdio.h>
#include <iostream>

class Game
{
public:
	Game();
	virtual ~Game();

	SDL_Window* myWindow = NULL;
	SDL_Renderer* myRender = NULL;

	SDL_Texture* loadTexture(std::string path);

	void init();
	void loadMedia();
	void Free();
	void render(SDL_Rect &rectButton, SDL_Texture* newTexture);
	void renderer(SDL_Rect &from, SDL_Rect &to);

	SDL_Texture*& getBackGround();
	SDL_Texture*& getTextureX();
	SDL_Texture*& getTextureY();

private:

	SDL_Texture* backGround;
	SDL_Texture* textureX;
	SDL_Texture* textureY;
};

#endif /* GAME_H_ */
