/*
 * Operations.h
 *
 *  Created on: 18.06.2017 ã.
 *      Author: user
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "Globals.hpp"
#include "Button.h"
#include <stdio.h>
#include <iostream>

class Operations
{
public:
	Operations();
	virtual ~Operations();

	SDL_Window* myWindow = NULL;
	SDL_Renderer* myRender = NULL;

	SDL_Texture* loadTexture(std::string path);

	void init();

	void loadMedia();
	void Free();

//	void render(int x, int y, SDL_Texture* newTexture);
	void render(SDL_Rect &rectButton, SDL_Texture* newTexture);
	void freeTexture(SDL_Texture* textureToDel);
	void modifyPic(SDL_Rect& newRect, int size);

	SDL_Texture*& getBackGround();
	SDL_Texture*& getTextureFirstPic();
	SDL_Texture*& getTextureSecondPic();
	SDL_Texture*& getTextureThirdPic();
	SDL_Texture*& getTextureFourthPic();
	SDL_Texture*& getTextureFifthPic();
	SDL_Texture*& getButtonTexture();

private:

	SDL_Texture* backGround;
	SDL_Texture* buttonTexture;
	SDL_Texture* textureFirstPic;
	SDL_Texture* textureSecondPic;
	SDL_Texture* textureThirdPic;
	SDL_Texture* textureFourthPic;
	SDL_Texture* textureFifthPic;

};

#endif /* OPERATIONS_H_ */
