/*
 * GrassWorker.cpp
 *
 *  Created on: 10.05.2017 ã.
 *      Author: user
 */

#include "GrassWorker.h"

GrassWorker::GrassWorker() :
		Worker() {
	setPayPerSquare(1.7);
	setWorkerdArea(6000);

}

GrassWorker::~GrassWorker() {
	// TODO Auto-generated destructor stub
}

double GrassWorker::getPayPerSquare() const {
	return payPerSquare;
}

void GrassWorker::setPayPerSquare(double payPerSquare) {
	this->payPerSquare = payPerSquare;
}

double GrassWorker::getWorkerdArea() const {
	return workerdArea;
}

GrassWorker::GrassWorker(string firstName, string secondName, string lastName,
		long ID, string address, long phoneNumber, string gender,
		double payPerSquare, double workedArea) :
		Worker(firstName, secondName, lastName, ID, address, phoneNumber,
				gender) {
	setPayPerSquare(payPerSquare);
	setWorkerdArea(workedArea);
}

void GrassWorker::setWorkerdArea(double workerdArea) {
	this->workerdArea = workerdArea;
}

double GrassWorker::calcSalary() {
	double salary;
	if (getWorkerdArea() < 5000) {
		return salary = (getWorkerdArea() * getPayPerSquare()) - 200;

	}
	if (getWorkerdArea() > 10000) {
		return salary = (getWorkerdArea() * getPayPerSquare()) + 500;
	} else {
		return salary = getWorkerdArea() * getPayPerSquare();
	}

}

void GrassWorker::printInfo() {
	Worker::printInfo();
	cout<<"Grass worker payment per square is : "<<getPayPerSquare()<<endl;
	cout<<"Grass worker working area is : "<<getWorkerdArea()<<endl;
}
