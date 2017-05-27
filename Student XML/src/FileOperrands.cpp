/*
 * FileOperrands.cpp
 *
 *  Created on: 26.05.2017 ã.
 *      Author: user
 */

#include "FileOperrands.h"

FileOperrands::FileOperrands()
{
	// TODO Auto-generated constructor stub

}

FileOperrands::~FileOperrands()
{
	// TODO Auto-generated destructor stub
}

void FileOperrands::traversing()
{
	pugi::xml_document doc;

	if (!doc.load_file("students.xml"))
	{
		cout << "FATAL ERROR " << endl;
	}
	else
	{
		cout << "File is succesfuly readed" << endl;
	}
	pugi::xml_node students = doc.child("students");

	for (pugi::xml_node studentObj = students.child("students:student");
			studentObj;
			studentObj = studentObj.next_sibling("students:student"))
	{
		string firstName =
				studentObj.child("students:firstName").text().as_string();
		string lastName =
				studentObj.child("students:lastName").text().as_string();
		string gender = studentObj.child("students:gender").text().as_string();
		string birthday =
				studentObj.child("students:birthdate").text().as_string();
		string phoneNumber =
				studentObj.child("students:phone").text().as_string();
		string email = studentObj.child("students:email").text().as_string();
		string course = studentObj.child("students:course").text().as_string();
		string speciality =
				studentObj.child("students:specialty").text().as_string();
		int facultyNumber =
				studentObj.child("students:facultyNumber").text().as_int();

		Student *nStudent = new Student(firstName, lastName, gender, birthday,
				phoneNumber, email, course, speciality, facultyNumber);

		for (pugi::xml_node examObj =
				studentObj.child("exams:examList").first_child(); examObj;
				examObj = examObj.next_sibling())
		{
			//CHANGE THE NAMES!!!!!
			string name = examObj.child("exams:name").text().as_string();
			string teacher = examObj.child("exams:lecturer").text().as_string();
			double grade = examObj.child("exams:grade").text().as_double();

			Exam *nExam = new Exam(name, teacher, grade);

			nStudent->addExam(nExam);

		}
			//using vector
			studentObject.push_back(nStudent);

			// using map

			mapS[facultyNumber] = nStudent;



	}
	//		Printing by vector
//	        for(unsigned int i = 0; i < studentObject.size(); i++)
//	        {
//	        	cout<<endl<<endl;
//	        	studentObject[i]->printInfo();
//	        }

}

void FileOperrands::printByMap()
{
	map<int, Student*>::iterator it;


	for (it = mapS.begin(); it != mapS.end(); it++)
	{


		it->second->printInfo();
		cout << endl << endl;
	}
}

