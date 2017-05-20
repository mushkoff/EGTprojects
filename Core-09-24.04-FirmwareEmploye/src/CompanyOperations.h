/*
 * CompanyOperations.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#ifndef COMPANYOPERATIONS_H_
#define COMPANYOPERATIONS_H_
#include <vector>
#include "Employee.h"
#include "Manager.h"
#include "Expert.h"
#include "SeniorExpert.h"
#include "JuniorExpert.h"



class CompanyOperations {
public:
	CompanyOperations();
	double sumOfSalaries();
	void addEmployee(Employee&);


	virtual ~CompanyOperations();
	const vector<Employee*>& getStaff() const;
	void setStaff(const vector<Employee*>& staff);

private:
	vector<Employee*> staff;
};

#endif /* COMPANYOPERATIONS_H_ */
