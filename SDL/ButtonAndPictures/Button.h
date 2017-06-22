/*
 * Button.h
 *
 *  Created on: 17.06.2017 ã.
 *      Author: user
 */

#ifndef BUTTON_H_
#define BUTTON_H_
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "Globals.hpp"

class Button
{
public:
	Button(int x, int y);
	virtual bool isClicked(int x, int y);
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
//	int getHeight() const;
//	void setHeight(int height);
//	int getWidth() const;
//	void setWidth(int width);

	SDL_Rect& getButtonRect();

	virtual ~Button();
	SDL_Rect setButtonRect();

private:
	SDL_Rect buttonRect;

	int x;
	int y;
//	int width;
//	int height;

};

#endif /* BUTTON_H_ */
