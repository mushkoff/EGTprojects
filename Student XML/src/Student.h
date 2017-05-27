/*
 * Student.h
 *
 *  Created on: 26.05.2017 ã.
 *      Author: user
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
#include <vector>


using namespace std;

#include "Exam.h"

class Student {
public:
	Student();
	Student(string firstName, string lastName, string gender, string birthday, string phoneNumber,
			string email, string course, string speciality, int facultyNumber);
	virtual ~Student();
	const string& getBirthday() const;
	void setBirthday(const string& birthday);
	const string& getCourse() const;
	void setCourse(const string& course);
	const string& getEmail() const;
	void setEmail(const string& email);
	const vector<Exam*>& getExamObj() const;
	void setExamObj(const vector<Exam*>& examObj);
	int getFacultyNumber() const;
	void setFacultyNumber(int facultyNumber);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getGender() const;
	void setGender(const string& gender);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	const string& getPhoneNumber() const;
	void setPhoneNumber(const string& phoneNumber);
	const string& getSpeciality() const;
	void setSpeciality(const string& speciality);
	void printInfo();
	void addExam(Exam* exam);
	double calcAverage();


private:
	string firstName;
	string lastName;
	string gender;
	string birthday;
	string phoneNumber;
	string email;
	string course;
	string speciality;
	int facultyNumber;
	vector<Exam*> examObject;

};

#endif /* STUDENT_H_ */
