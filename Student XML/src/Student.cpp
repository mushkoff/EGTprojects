/*
 * Student.cpp
 *
 *  Created on: 26.05.2017 ã.
 *      Author: user
 */

#include "Student.h"

Student::Student() {
	setFirstName(" ");
	setLastName(" ");
	setGender(" ");
	setBirthday(" ");
	setPhoneNumber(" ");
	setEmail(" ");
	setCourse(" ");
	setSpeciality(" ");
	setFacultyNumber(0);

}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

const string& Student::getBirthday() const {
	return birthday;
}

void Student::setBirthday(const string& birthday) {
	this->birthday = birthday;
}

const string& Student::getCourse() const {
	return course;
}

void Student::setCourse(const string& course) {
	this->course = course;
}

const string& Student::getEmail() const {
	return email;
}

void Student::setEmail(const string& email) {
	this->email = email;
}

const vector<Exam*>& Student::getExamObj() const {
	return examObject;
}

void Student::setExamObj(const vector<Exam*>& examObj) {
	this->examObject = examObject;
}

int Student::getFacultyNumber() const {
	return facultyNumber;
}

void Student::setFacultyNumber(int facultyNumber) {
	this->facultyNumber = facultyNumber;
}

const string& Student::getFirstName() const {
	return firstName;
}

void Student::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

const string& Student::getGender() const {
	return gender;
}

void Student::setGender(const string& gender) {
	this->gender = gender;
}

const string& Student::getLastName() const {
	return lastName;
}

void Student::setLastName(const string& lastName) {
	this->lastName = lastName;
}

const string& Student::getPhoneNumber() const {
	return phoneNumber;
}

void Student::setPhoneNumber(const string& phoneNumber){
	this->phoneNumber = phoneNumber;
}

const string& Student::getSpeciality() const {
	return speciality;
}

Student::Student(string firstName, string lastName, string gender,
		string birthday, string phoneNumber, string email, string course,
		string speciality, int facultyNumber) {
	setFirstName(firstName);
	setLastName(lastName);
	setGender(gender);
	setBirthday(birthday);
	setPhoneNumber(phoneNumber);
	setEmail(email);
	setCourse(course);
	setSpeciality(speciality);
	setFacultyNumber(facultyNumber);
}

void Student::setSpeciality(const string& speciality) {
	this->speciality = speciality;
}

void Student::printInfo() {
	cout << "Student information" << endl;
	cout << "First name is: " << getFirstName() << endl;
	cout << "Last name is: " << getLastName() << endl;
	cout << "Gender is: " << getGender() << endl;
	cout << "Date of birth is: " << getBirthday() << endl;
	cout << "Phone number is: " << getPhoneNumber() << endl;
	cout << "Email is: " << getEmail() << endl;
	cout << "Course is: " << getCourse() << endl;
	cout << "Speciality is: " << getSpeciality() << endl;
	cout << "Faculty number is: " << getFacultyNumber() << endl;
	cout << "List of exams are ";
	for (unsigned int i = 0; i < examObject.size(); i++)
	{
		examObject[i]->printInfo();
	}
	cout<<"Avarage grade is: "<<calcAverage()<<endl;

}

void Student::addExam(Exam* exam) {
    examObject.push_back(exam);
}

double Student::calcAverage()
{
	double result = 0;
	double grades = 0;


	for(unsigned int i = 0; i < examObject.size(); i++)
	{

     grades = grades + examObject[i]->getGrade();


	}
	return result = grades / examObject.size();
}
