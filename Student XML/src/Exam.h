/*
 * Exam.h
 *
 *  Created on: 26.05.2017 ã.
 *      Author: user
 */

#ifndef EXAM_H_
#define EXAM_H_
#include <string>
#include <iostream>

using namespace std;

class Exam {
public:
	Exam();
	Exam(string name, string teacher, double grade);
	virtual ~Exam();
	const string& getName() const;
	const string& getTeacher() const;
	double getGrade() const;
	void setGrade(double grade);
	void setName(const string& name);
	void setTeacher(const string& teacher);
	void printInfo();
private:
	string name;
	string teacher;
	double grade;

};

#endif /* EXAM_H_ */
