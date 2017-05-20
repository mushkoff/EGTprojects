/*
 * Manager.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include "Employee.h"

class Manager: public Employee {
public:
	Manager();
	Manager(string firstName, string lastName, string department,
			double salaryPerHour, int hours, Adress& adr, int getYearsOfExp);
	virtual ~Manager();
	int getYearsOfExp() const;
	void setYearsOfExp(int yearsOfExp);
	virtual void print();
	double calcSalary();


private:
	int yearsOfExp;
};

#endif /* MANAGER_H_ */
