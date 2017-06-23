/*
 * Operations.cpp
 *
 *  Created on: 18.06.2017 ã.
 *      Author: user
 */

#include "Operations.h"

Operations::Operations() :
		backGround(NULL), buttonTexture(NULL), textureFirstPic(NULL), textureSecondPic(
		NULL), textureThirdPic(
		NULL), textureFourthPic(NULL), textureFifthPic(NULL)
{

}

Operations::~Operations()
{
	// TODO Auto-generated destructor stub
}

void Operations::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cerr << "Cannot initialize!" << std::endl;

	}
	if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1"))
	{
		std::cerr << "ERROR - Linear structure!" << std::endl;

	}
	myWindow = SDL_CreateWindow("Pictures Changer", SDL_WINDOWPOS_UNDEFINED,
	SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_SHOWN);

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

void Operations::loadMedia()
{
	backGround = loadTexture("back.png");
	if (backGround == NULL)
	{
		std::cerr << "Cannot load background" << std::endl;

	}
	buttonTexture = loadTexture("button.png");
	if (buttonTexture == NULL)
	{
		std::cerr << "Cannot load button texture" << std::endl;
	}
	textureFirstPic = loadTexture("penguin.png");
	if (textureFirstPic == NULL)
	{
		std::cerr << "Cannot load first picture" << std::endl;

	}
	textureSecondPic = loadTexture("mario.png");
	if (textureSecondPic == NULL)
	{
		std::cerr << "Cannot load picture 2" << std::endl;

	}
	textureThirdPic = loadTexture("lamp.png");
	if (textureThirdPic == NULL)
	{
		std::cerr << "Cannot load picture 3" << std::endl;

	}
	textureFourthPic = loadTexture("lamp.png");
	if (textureFourthPic == NULL)
	{
		std::cerr << "Cannot load picture 4" << std::endl;

	}
	textureFifthPic = loadTexture("apple.png");
	if (textureFifthPic == NULL)
	{
		std::cerr << "Cannot load picture 5" << std::endl;

	}

}

void Operations::Free()
{
	SDL_DestroyTexture(backGround);
	SDL_DestroyTexture(textureSecondPic);
	SDL_DestroyTexture(textureThirdPic);
	SDL_DestroyTexture(textureFourthPic);
	SDL_DestroyTexture(textureFifthPic);
	SDL_DestroyTexture(textureFirstPic);
	SDL_DestroyTexture(buttonTexture);

	backGround = NULL;
	textureFirstPic = NULL;
	textureSecondPic = NULL;
	textureThirdPic = NULL;
	textureFourthPic = NULL;
	textureFifthPic = NULL;
	buttonTexture = NULL;

	SDL_DestroyRenderer(myRender);
	myRender = NULL;

	SDL_DestroyWindow(myWindow);
	myWindow = NULL;

	IMG_Quit();
	SDL_Quit();

}

void Operations::render(SDL_Rect &rectButton, SDL_Texture* newTexture)
{
	SDL_RenderCopy(myRender, newTexture, NULL, &rectButton);
//	SDL_Rect renderQuad =
//	{ x, y, button_width, button_height };
//	SDL_RenderCopy(myRender, newTexture, NULL, &renderQuad);
}

SDL_Texture * &Operations::getBackGround()
{
	return backGround;
}

SDL_Texture * &Operations::getTextureFirstPic()
{
	return textureFirstPic;
}

SDL_Texture * &Operations::getTextureSecondPic()
{
	return textureSecondPic;
}

SDL_Texture * &Operations::getTextureThirdPic()
{
	return textureThirdPic;
}

SDL_Texture * &Operations::getTextureFourthPic()
{
	return textureFourthPic;
}

SDL_Texture * &Operations::getTextureFifthPic()
{
	return textureFifthPic;
}

SDL_Texture* Operations::loadTexture(std::string texturePath)

//{
//	SDL_Texture* newTexture = NULL;
//
//	SDL_Surface* loadedSurface = IMG_Load(texturePath.c_str());
//	if (loadedSurface == NULL)
//	{
//		std::cerr << "Cannot load surface!" << std::endl;
//
//	}
//	SDL_SetColorKey(loadedSurface, SDL_TRUE,
//			SDL_MapRGB(loadedSurface->format, 255, 255, 255));
//	newTexture = SDL_CreateTextureFromSurface(myRender, loadedSurface);
//	if (newTexture == NULL)
//	{
//		std::cerr << "New texture cannot be created! " << std::endl;
//
//	}
//
//	SDL_FreeSurface(loadedSurface);
//	return newTexture;
//
//}
{
//The final texture
	SDL_Texture* newTexture = NULL;

//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load(texturePath.c_str());
	if (loadedSurface == NULL)
	{
		printf("Unable to load image %s! SDL_image Error: %s\n",
				texturePath.c_str(), IMG_GetError());
	}
	else
	{
		SDL_SetColorKey(loadedSurface, SDL_TRUE,
				SDL_MapRGB(loadedSurface->format, 255, 255, 255));
		//Create texture from surface pixels
		newTexture = SDL_CreateTextureFromSurface(myRender, loadedSurface);
		if (newTexture == NULL)
		{
			printf("Unable to create texture from %s! SDL Error: %s\n",
					texturePath.c_str(), SDL_GetError());
		}

//		SDL_SetColorKey(loadedSurface, SDL_TRUE,
//				SDL_MapRGB(loadedSurface->format, 255, 255, 255));
//		newTexture = SDL_CreateTextureFromSurface(myRender, loadedSurface);

//Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}

	return newTexture;
}

SDL_Texture * &Operations::getButtonTexture()
{
	return buttonTexture;
}

void Operations::freeTexture(SDL_Texture* textureToDel)
{
	SDL_DestroyTexture(textureToDel);
	textureToDel = NULL;
}
void Operations::modifyPic(SDL_Rect& newRect, int size)
{

	newRect.w += size;
	newRect.h += size;

}

