/*
 * Box.cpp
 *
 *  Created on: 10.05.2017 ã.
 *      Author: user
 */

#include "Box.h"

istream& operator>>(istream& input, Box& result) {
	// [x,y,z]
	input.ignore(1);                     //[
	input >> setw(1) >> result.lenght;   // x
	input.ignore(1);                     // ,
	input >> setw(1) >> result.width;    // y
	input.ignore(1);                     // ,
	input >> setw(1) >> result.hight;    // z
	input.ignore(1);                     // ]
	input.ignore(1);

	return input;

}
ostream& operator<<(ostream& output, const Box& result) {
	output << " [ " << result.lenght << "," << result.width << ","
			<< result.hight << " ] ";

	return output;
}

Box::Box() {
	// TODO Auto-generated constructor stub

}

Box::~Box() {
	// TODO Auto-generated destructor stub
}

double Box::getHight() const {
	return hight;
}

void Box::setHight(double hight) {
	if (hight < 10 && hight >= 99) {
		this->hight = 0;
	} else {
		this->hight = hight;
	}

}

double Box::getLenght() const {
	return lenght;
}

void Box::setLenght(double lenght) {
	if (lenght < 10 && lenght >= 99) {
		this->lenght = 0;
	} else {
		this->lenght = lenght;
	}
}
double Box::getWidth() const {
	return width;
}

void Box::setWidth(double width) {
	if (width < 10 && width >= 99) {
		this->width = 0;
	} else {
		this->width = width;
	}
}

Box::Box(double lenght, double width, double hight) {
	setLenght(lenght);
	setWidth(width);
	setHight(hight);
}

double Box::calcV() {

	return getLenght() * getWidth() * getHight();
}

Box& Box::operator +(Box& right) {
	double newL = this->lenght + right.lenght;
	double newW = this->width + right.width;
	double newH = this->hight + right.hight;
	Box *newB = new Box(newL, newW, newH);

	return *newB;

}

bool Box::operator ==(Box& right) {
	if (this->hight == right.hight && this->width == right.width
			&& this->lenght == right.lenght) {
		return true;
	} else {
		return false;
	}

}

bool Box::operator <(Box& right) {
	if (this->hight < right.hight || this->width < right.width
			|| this->lenght < right.lenght) {
		return true;
	} else {
		return false;
	}

}
