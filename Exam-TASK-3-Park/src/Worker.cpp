/*
 * Worker.cpp
 *
 *  Created on: 10.05.2017 ã.
 *      Author: user
 */

#include "Worker.h"

Worker::Worker() {
	setFirstName("Ivan");
	setSecondName("Ivanov");
	setLastName("Ivanov");
	setId(000000000000);
	setAddress("Sofia 1000");
	setPhoneNumber(000000000);
	setGender("male");

}

Worker::~Worker() {
	// TODO Auto-generated destructor stub
}

const string& Worker::getAddress() const {
	return address;
}

void Worker::setAddress(const string& address) {
	this->address = address;
}

const string& Worker::getFirstName() const {
	return firstName;
}

void Worker::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

const string& Worker::getGender() const {
	return gender;
}

void Worker::setGender(const string& gender) {
	this->gender = gender;
}

long Worker::getId() const {
	return ID;
}

void Worker::setId(long id) {
	ID = id;
}

const string& Worker::getLastName() const {
	return lastName;
}

void Worker::setLastName(const string& lastName) {
	this->lastName = lastName;
}

long Worker::getPhoneNumber() const {
	return phoneNumber;
}

void Worker::setPhoneNumber(long phoneNumber) {
	this->phoneNumber = phoneNumber;
}

const string& Worker::getSecondName() const {
	return secondName;
}

Worker::Worker(string firstName, string secondName, string lastName, long ID,
		string address, long phoneNumber, string gender) {
	setFirstName(firstName);
	setSecondName(secondName);
	setLastName(lastName);
	setId(ID);
	setAddress(address);
	setPhoneNumber(phoneNumber);
	setGender(gender);
}

void Worker::setSecondName(const string& secondName) {
	this->secondName = secondName;
}

void Worker::printInfo() {
	cout<<"Worker first name is : "<<getFirstName()<<endl;
	cout<<"Worker second name is : "<<getSecondName()<<endl;
	cout<<"Worker family name is : "<<getLastName()<<endl;
	cout<<"Worker ID is : "<<getId()<<endl;
	cout<<"Worker address is : "<<getAddress()<<endl;
	cout<<"Worker phone number is : "<<getPhoneNumber()<<endl;
	cout<<"Worker gender is : "<<getGender()<<endl;
}
