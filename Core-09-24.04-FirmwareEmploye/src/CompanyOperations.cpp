/*
 * CompanyOperations.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "CompanyOperations.h"

CompanyOperations::CompanyOperations() {
	// TODO Auto-generated constructor stub

}

CompanyOperations::~CompanyOperations() {

}

double CompanyOperations::sumOfSalaries() {
	int sum = 0;
	for(unsigned int i = 0; i < staff.size(); i++){
		sum += staff[i]->calcSalary();
	}
	return sum;
}

void CompanyOperations::addEmployee(Employee& empl) {
	staff.push_back(&empl);
}

const vector<Employee*>& CompanyOperations::getStaff() const {
	return staff;
}

void CompanyOperations::setStaff(const vector<Employee*>& staff) {
	this->staff = staff;
}
