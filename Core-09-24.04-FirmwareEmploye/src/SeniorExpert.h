/*
 * SeniorExpert.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#ifndef SENIOREXPERT_H_
#define SENIOREXPERT_H_

#include "Expert.h"

class SeniorExpert: public Expert {
public:
	SeniorExpert();
	SeniorExpert(string firstName, string lastName, string department,
			double salaryPerHour, int hours, Adress& adr,int bonus, string technologies);
	virtual ~SeniorExpert();
	const string& getTechnologies() const;
	void setTechnologies(const string& technologies);
	virtual void print();
	double calcSalary();

private:
	string technologies;
};

#endif /* SENIOREXPERT_H_ */
