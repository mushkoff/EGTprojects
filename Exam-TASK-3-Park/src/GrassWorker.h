/*
 * GrassWorker.h
 *
 *  Created on: 10.05.2017 ã.
 *      Author: user
 */

#ifndef GRASSWORKER_H_
#define GRASSWORKER_H_
#include <iostream>
#include "Worker.h"

class GrassWorker: public Worker {
public:
	GrassWorker();
	GrassWorker(string firstName, string secondName, string lastName, long ID,
			string address, long phoneNumber, string gender,
			double payPerSquare, double workedArea);
	virtual ~GrassWorker();
	double getPayPerSquare() const;
	void setPayPerSquare(const double payPerSquare);
	double getWorkerdArea() const;
	void setWorkerdArea(const double workerdArea);
	double calcSalary();
	virtual void printInfo();

private:
	double payPerSquare;
	double workerdArea;
};

#endif /* GRASSWORKER_H_ */
