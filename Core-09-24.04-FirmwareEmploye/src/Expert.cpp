/*
 * Expert.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "Expert.h"

Expert::Expert() :
		Employee() {
	setBonus(bonus);

}

Expert::~Expert() {
	// TODO Auto-generated destructor stub
}

Expert::Expert(string firstName, string lastName, string department,
		double salaryPerHour, int hours, Adress& adr, int bonus) :
		Employee(firstName, lastName, department, salaryPerHour, hours, adr) {
	setFirstName(firstName);
	setLastName(lastName);
	setDepartment(department);
	setSalaryPerHour(salaryPerHour);
	setHours(hours);
	setAdr(adr);
	setBonus(bonus);
}

int Expert::getBonus() const {
	return bonus;
}

void Expert::setBonus(int bonus) {
	this->bonus = bonus;
}
void Expert::print() {
	Employee::print();
	cout << "Bonus is " << getBonus() << endl;
//	cout<< "Manager team is ";
	//Manager::print();
	//must include Manager.h
}

double Expert::calcSalaray() {
	return Employee::calcSalary();
}
