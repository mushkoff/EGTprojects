/*
 * Adress.cpp
 *
 *  Created on: 20.04.2017 ã.
 *      Author: user
 */

#include "Adress.h"



Adress::~Adress() {
	// TODO Auto-generated destructor stub
}

Adress::Adress(int id, string street, int number) {
setId(id);
setStreet(street);
setNumber(number);
}

int Adress::getId() const {
	return id;
}

void Adress::setId(int id) {
	this->id = id;
}

int Adress::getNumber() const {
	return number;
}

void Adress::setNumber(int number) {
	this->number = number;
}

const string& Adress::getStreet() const {
	return street;
}

void Adress::setStreet(const string& street) {
	this->street = street;
}
void Adress::print() {
   cout<<"Adress ID is "<<getId()<<endl;
   cout<<"Street name is "<<getStreet()<<endl;
   cout<<"Street number is "<<getNumber()<<endl;
}

Adress::Adress() {
	setId(1500);
	setStreet("bul.Bulgaria");
	setNumber(150);
}
