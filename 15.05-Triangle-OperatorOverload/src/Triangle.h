/*
 * Triangle.h
 *
 *  Created on: 15.05.2017 ã.
 *      Author: user
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
#include <iomanip>

using namespace std;


class Triangle {

	friend istream& operator>>(istream& input, Triangle& triangle);
	friend ostream& operator<<(ostream& output, const Triangle& triangle);


public:
	Triangle();
	virtual ~Triangle();
	int getA() const;
	void setA(int a);
	int getB() const;
	void setB(int b);
	int getC() const;
	void setC(int c);
	int getH() const;
	void setH(int h);

	bool operator==(Triangle& triangle);
	bool operator!=(Triangle& triangle);

private:
	int a;
	int b;
	int c;
	int h;
};

#endif /* TRIANGLE_H_ */
