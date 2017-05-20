/*
 * Expert.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#ifndef EXPERT_H_
#define EXPERT_H_

#include "Employee.h"

class Expert: public Employee {
public:
	Expert();
	Expert(string firstName, string lastName, string department,
			double salaryPerHour, int hours, Adress& adr,int bonus);

	virtual ~Expert();
	int getBonus() const;
	void setBonus(int bonus);
	virtual void print();
	virtual double calcSalaray();

private:
	int bonus;
};

#endif /* EXPERT_H_ */
