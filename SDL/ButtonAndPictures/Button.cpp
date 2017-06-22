/*
 * Button.cpp
 *
 *  Created on: 17.06.2017 ã.
 *      Author: user
 */

#include "Button.h"

Button::Button(int x, int y)
{
	setX(x);
	setY(y);

}

Button::~Button()
{
	// TODO Auto-generated destructor stub
}

bool Button::isClicked(int x, int y)
{
	if (x >= getX() && x <= button_width + getX() && y >= getY()
			&& y <= getY() + button_height)
	{
		return true;

	}
	return false;
}

SDL_Rect& Button::getButtonRect()
{
	return buttonRect;
}

SDL_Rect Button::setButtonRect()
{
	SDL_Rect buttonRect;
	this->buttonRect.x = getX();
	this->buttonRect.y = getY();
	this->buttonRect.w = button_width;
	this->buttonRect.h = button_height;
	return buttonRect;
}
int Button::getX() const
{
	return x;
}
int Button::getY() const
{
	return y;
}
//int Button::getWidth() const
//{
//	return width;
//}
//int Button::getHeight() const
//{
//	return height;
//}
void Button::setX(int x)
{
	this->x = x;
}
void Button::setY(int y)
{
	this->y = y;
}
//void Button::setWidth(int width)
//{
//	this->width = width;
//}
//void Button::setHeight(int height)
//{
//	this->height = height;
//}

