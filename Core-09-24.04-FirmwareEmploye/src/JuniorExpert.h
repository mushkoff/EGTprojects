/*
 * JuniorExpert.h
 *
 *  Created on: 24.04.2017 ã.
 *      Author: user
 */

#ifndef JUNIOREXPERT_H_
#define JUNIOREXPERT_H_

#include "Expert.h"

class JuniorExpert: public Expert {
public:
	JuniorExpert();
	JuniorExpert(string firstName, string lastName, string department,
			double salaryPerHour, int hours, Adress& adr, int bonus,
			string testmentLang, string degree, bool managerReference);
	virtual ~JuniorExpert();
	const string& getDegree() const;
	void setDegree(const string& degree);
	const string& getTestmentLang() const;
	void setTestmentLang(const string& testmentLang);
	virtual double calcSalary();
	virtual void print();
	bool isManagerReference() const;
	void setManagerReference(bool managerReference);

private:
	string testmentLang;
	string degree;
	bool managerReference;

};

#endif /* JUNIOREXPERT_H_ */
