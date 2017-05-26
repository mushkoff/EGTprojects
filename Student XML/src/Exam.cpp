/*
 * Exam.cpp
 *
 *  Created on: 26.05.2017 ã.
 *      Author: user
 */

#include "Exam.h"

Exam::Exam(string name, string teacher, double grade) {
	setName(name);
	setTeacher(teacher);
	setGrade(grade);

}
Exam::Exam() {
	setName(" ");
	setTeacher(" ");
	setGrade(0.0);
}
Exam::~Exam() {
	// TODO Auto-generated destructor stub
}

const string& Exam::getName() const {
	return name;
}

const string& Exam::getTeacher() const {
	return teacher;
}

double Exam::getGrade() const {
	return grade;
}

void Exam::setGrade(double grade) {
	this->grade = grade;
}

void Exam::setName(const string& name) {
	this->name = name;
}

void Exam::setTeacher(const string& teacher) {
	this->teacher = teacher;
}

void Exam::printInfo() {
	cout<<"Exam object is: "<<getName()<<endl;
	cout<<"The lector is:  "<<getTeacher()<<endl;
	cout<<"The grade is: "<<getGrade()<<endl;
}
