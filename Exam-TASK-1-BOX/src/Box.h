/*
 * Box.h
 *
 *  Created on: 10.05.2017 ã.
 *      Author: user
 */

#ifndef BOX_H_
#define BOX_H_
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Box {

	friend istream& operator>>(istream& input, Box& result);
	friend ostream& operator<<(ostream& output, const Box& result);

public:
	Box();
	Box(double lenght, double width, double hight);

	virtual ~Box();
	double calcV();
	double getHight() const;
	void setHight(double hight);
	double getLenght() const;
	void setLenght(double lenght);
	double getWidth() const;
	void setWidth(double width);

	Box& operator +(Box& right);
	bool operator ==(Box& right);
	bool operator <(Box& right);


private:
	double lenght; //x
	double width; //y
	double hight; //z

};

#endif /* BOX_H_ */
