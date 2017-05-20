/*
 * Adress.h
 *
 *  Created on: 20.04.2017 ã.
 *      Author: user
 */

#ifndef ADRESS_H_
#define ADRESS_H_
#include <string>
#include <iostream>
using namespace std;

class Adress {
public:
	Adress();
	Adress(int, string, int);
	virtual ~Adress();
	int getId() const;
	void setId(int id);
	int getNumber() const;
	void setNumber(int number);
	const string& getStreet() const;
	void setStreet(const string& street);

	void print();


private:
	int id;
	string street;
	int number;
};

#endif /* ADRESS_H_ */
