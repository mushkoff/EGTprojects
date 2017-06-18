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
	if (x >= getX() && x <= getWidth() + getX() && y >= getY()
			&& y <= getY() + getHeight())
	{
		return true;

	}
	return false;
}

SDL_Rect& Button::getButtonRect()
{
	return buttonRect;
}

void Button::setButtonRect(SDL_Rect buttonRect)
{
	this->buttonRect.x = getX();
	this->buttonRect.y = getY();
	this->buttonRect.w = getWidth();
	this->buttonRect.h = getHeight();
}
int Button::getX() const
{
	return x;
}
int Button::getY() const
{
	return y;
}
int Button::getWidth() const
{
	return width;
}
int Button::getHeight() const
{
	return height;
}
void Button::setX(int x)
{
	this->x = x;
}
void Button::setY(int y)
{
	this->y = y;
}
void Button::setWidth(int width)
{
	this->width = width;
}
void Button::setHeight(int height)
{
	this->height = height;
}

