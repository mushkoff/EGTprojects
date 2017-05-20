//============================================================================
// Name        : 04-FirmwareEmploye.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Employee.h"
#include "Expert.h"
#include "Manager.h"
#include "SeniorExpert.h"
#include "JuniorExpert.h"
#include "CompanyOperations.h"

using namespace std;

int main() {

	Adress ad1(4789, "Badnina", 89);
	Adress ad2;
	Adress ad3(1000, "Sofia - Mladost", 150);

	Employee em1("Daniel", "Sakalev", "JavaScript", 10.5, 125, ad3);
	Employee em2;
	Employee em3("Svetlio", "Ivanov", "Python", 6.11, 200, ad1);

	Manager m1;
	Manager m2("Daniel", "Kisimov", "Matematics", 15.3, 125, ad2, 9);
	Manager m3("Nikolai", "Petrov", "Logistics", 14.55, 131, ad3, 10);

	Expert ex1("Ivan", "Kosev", "Software Erasing", 20.12, 110, ad1, 650);
	Expert ex2;
	Expert ex3("John", "Smith", "Security", 9.44, 190, ad2, 235);

	SeniorExpert se1;
	SeniorExpert se2("Andrey", "Schevcenko", "PR", 19.90, 141, ad2, 800,
			"Software development");
	SeniorExpert s3("Vasil", "Vasilev", "OBJ C", 40.90, 155, ad1, 1200,
			"Machines Programming CO");

	JuniorExpert je1;
	JuniorExpert j2("Russel", "Crown", "BrainFuck", 4.90, 190, ad2, 120, "C",
			"Bachelor Iconomics", true);
	JuniorExpert j3("Gregg", "Forman", "Frogg", 8.13, 180, ad3, 150, "C--",
			"Master IT", false);


	CompanyOperations co;

//	co.addEmployee(m1);
//	co.addEmployee(se2);
	cout<<j3.calcSalary()<<endl;
	j3.print();
	cout<<endl;
	ex3.print();
	co.addEmployee(j2);
	co.addEmployee(se2);

	cout<<co.sumOfSalaries()<<endl;

	return 0;
}
