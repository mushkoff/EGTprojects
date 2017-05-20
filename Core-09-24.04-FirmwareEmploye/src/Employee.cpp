/*
 * NewEmploye.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "Employee.h"
#include "Adress.h"
#include <iostream>

Employee::Employee() :
		adr(89, "Tsar Boris", 80) {
	setFirstName("Michael");
	setLastName("Mushkov");
	setDepartment("C++ Devs");
	setSalaryPerHour(9.1);
	setHours(160);

}
Employee::Employee(string firstName, string lastName, string department,
		double salaryPerHour, int hours, Adress& adr) :
		adr(adr) {
	setFirstName(firstName);
	setLastName(lastName);
	setDepartment(department);
	setSalaryPerHour(salaryPerHour);
	setHours(hours);
	setAdr(adr);

}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

const string& Employee::getDepartment() const {
	return department;
}

void Employee::setDepartment(const string& department) {
	this->department = department;
}

const string& Employee::getFirstName() const {
	return firstName;
}

void Employee::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

int Employee::getHours() const {
	return hours;
}

void Employee::setHours(int hours) {
	this->hours = hours;
}

const string& Employee::getLastName() const {
	return lastName;
}

void Employee::setLastName(const string& lastName) {
	this->lastName = lastName;
}

double Employee::getSalaryPerHour() const {
	return salaryPerHour;
}

void Employee::setSalaryPerHour(double salaryPerHour) {
	this->salaryPerHour = salaryPerHour;
}

const Adress& Employee::getAdr() const {
	return adr;
}

void Employee::setAdr(const Adress& adr) {
	this->adr = adr;
}

double Employee::calcSalary() {
	double salary;
	return salary = getSalaryPerHour() * getHours();


}

void Employee::print() {
	cout << "First name is " << getFirstName() << endl;
	cout << "Last name is " << getLastName() << endl;
	cout << "Department is " << getDepartment() << endl;
	cout << "Salary per/hour is " << getSalaryPerHour() << endl;
	cout << "Month hours are " << getHours() << endl;
	adr.print();
}
