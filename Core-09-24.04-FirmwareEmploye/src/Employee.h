/*
 * Employee.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <iostream>
#include "Adress.h"
#include <string>
using namespace std;

class Employee {
public:
	Employee();
	Employee(string firstName, string lastName, string department,
			double salaryPerHour, int hours, Adress& adr);
	virtual ~Employee();
	const string& getDepartment() const;
	void setDepartment(const string& department);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	int getHours() const;
	void setHours(int hours);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	double getSalaryPerHour() const;
	void setSalaryPerHour(double salaryPerHour);
	const Adress& getAdr() const;
	void setAdr(const Adress& adr);
	virtual double calcSalary();
	virtual void print();

private:
	string firstName;
	string lastName;
	string department;
	double salaryPerHour;
	int hours;
	Adress adr;

};

#endif /* EMPLOYEE_H_ */
