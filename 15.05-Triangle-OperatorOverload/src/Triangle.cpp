/*
 * Triangle.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#include "Triangle.h"
#include <iomanip>
#include <iostream>
#include <istream>

Triangle::Triangle() {
	// TODO Auto-generated constructor stub

}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

int Triangle::getA() const {
	return a;
}

void Triangle::setA(int a) {
	this->a = a;
}

int Triangle::getB() const {
	return b;
}

void Triangle::setB(int b) {
	this->b = b;
}

int Triangle::getC() const {
	return c;
}

void Triangle::setC(int c) {
	this->c = c;
}

istream& operator>>(istream& input, Triangle& triangle) {
	input.ignore(1);
	input >> setw(1) >> triangle.a;
	input.ignore(1);
	input >> setw(1) >> triangle.b;
	input.ignore(1);
	input >> setw(1) >> triangle.c;
	input.ignore(1);
	input >> setw(1) >> triangle.h;
	input.ignore(1);

	return input;

}
ostream& operator<<(ostream& output, const Triangle& triangle) {
	output << triangle.getA() << " , " << triangle.getB() << " , "
			<< triangle.getC() << " , " << triangle.getH();

	return output;
}

int Triangle::getH() const {
	return h;
}

void Triangle::setH(int h) {
	this->h = h;
}

bool Triangle::operator ==(Triangle& triangle) {
	if (this->a == triangle.a && this->b == triangle.b && this->c == triangle.c
			&& this->h == triangle.h) {
		return true;
	} else {
		return false;
	}
}

bool Triangle::operator !=(Triangle& triangle) {
	if (this->a != triangle.a || this->b != triangle.b || this->c != triangle.c
			|| this->h != triangle.h) {
		return true;
	} else {
		return false;
	}
}

