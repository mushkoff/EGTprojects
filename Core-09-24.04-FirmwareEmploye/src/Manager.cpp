/*
 * Manager.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "Manager.h"

Manager::Manager() :
		Employee() {
	setYearsOfExp(5);

}

Manager::~Manager() {
	// TODO Auto-generated destructor stub
}

int Manager::getYearsOfExp() const {
	return yearsOfExp;
}

Manager::Manager(string firstName, string lastName, string department,
		double salaryPerHour, int hours, Adress& adr, int getYearsOfExp) :
		Employee(firstName, lastName, department, salaryPerHour, hours, adr) {
	setYearsOfExp(yearsOfExp);
}

void Manager::setYearsOfExp(int yearsOfExp) {
	this->yearsOfExp = yearsOfExp;
}
void Manager::print() {
	Employee::print();
	cout << "Years of experience are " << getYearsOfExp() << endl;

}

double Manager::calcSalary() {
	return Employee::calcSalary();
}
