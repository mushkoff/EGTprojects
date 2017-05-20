/*
 * SeniorExpert.cpp
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#include "SeniorExpert.h"

SeniorExpert::SeniorExpert():Expert() {
	setTechnologies("Software overwriting");

}

SeniorExpert::~SeniorExpert() {
	// TODO Auto-generated destructor stub
}

const string& SeniorExpert::getTechnologies() const {
	return technologies;
}

SeniorExpert::SeniorExpert(string firstName, string lastName, string department,
		double salaryPerHour, int hours, Adress& adr, int bonus,
		string technologies): Expert(firstName, lastName, department, salaryPerHour, hours, adr,bonus) {
	setFirstName(firstName);
		setLastName(lastName);
		setDepartment(department);
		setSalaryPerHour(salaryPerHour);
		setHours(hours);
		setAdr(adr);
		setBonus(bonus);
		setTechnologies(technologies);
}

void SeniorExpert::setTechnologies(const string& technologies) {
	this->technologies = technologies;
}
void SeniorExpert::print() {
	Expert::print();
	cout<<"Specialist in "<<getTechnologies()<<" technologies"<<endl;
}

double SeniorExpert::calcSalary() {
	return Expert::calcSalaray();
}
