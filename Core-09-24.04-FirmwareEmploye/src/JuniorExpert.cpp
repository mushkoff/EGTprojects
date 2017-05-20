/*
 * JuniorExpert.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "JuniorExpert.h"

JuniorExpert::JuniorExpert() :
		Expert() {
	setTestmentLang("C++");
	setDegree("Master Soft Development");
	setManagerReference(true);
}

JuniorExpert::~JuniorExpert() {
	// TODO Auto-generated destructor stub
}

const string& JuniorExpert::getDegree() const {
	return degree;
}

void JuniorExpert::setDegree(const string& degree) {
	this->degree = degree;
}

const string& JuniorExpert::getTestmentLang() const {
	return testmentLang;
}

JuniorExpert::JuniorExpert(string firstName, string lastName, string department,
		double salaryPerHour, int hours, Adress& adr, int bonus,
		string testmentLang, string degree, bool managerReference) :
		Expert(firstName, lastName, department, salaryPerHour, hours, adr,
				bonus) {
	setFirstName(firstName);
	setLastName(lastName);
	setDepartment(department);
	setSalaryPerHour(salaryPerHour);
	setHours(hours);
	setAdr(adr);
	setBonus(bonus);
	setTestmentLang(testmentLang);
	setDegree(degree);
	setManagerReference(managerReference);

}

void JuniorExpert::setTestmentLang(const string& testmentLang) {
	this->testmentLang = testmentLang;
}

double JuniorExpert::calcSalary() {

	double salary;
	if (managerReference == true) {
		return salary = Expert::calcSalaray() + Expert::getBonus();
	} else {
		return Expert::calcSalaray();
	}

}

void JuniorExpert::print() {
	Expert::print();
	cout << "Testment language is " << getTestmentLang() << endl;
	cout << "University degree is " << getDegree() << endl;
}

bool JuniorExpert::isManagerReference() const {
	return managerReference;
}

void JuniorExpert::setManagerReference(bool managerReference) {
	this->managerReference = managerReference;
}
