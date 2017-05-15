//============================================================================
// Name        : Exam-TASK-3-Park.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Worker.h"
#include "GrassWorker.h"
#include "Operations.h"
#include "TreesWorker.h"
using namespace std;

int main() {

	 Operations co;

	 TreesWorker *tree = new TreesWorker("Georgi", "Georgiev", "Georgiev", 1789525656, "Mladost", 3589999, "male", 2.5,200,0);
	 TreesWorker *tree2 = new TreesWorker("Niki", "Nikolov", "Nikolov", 6789525, "Lulin", 3665899, "male", 6.1,140,1);

	 GrassWorker *gr = new GrassWorker("Niki", "Nikolov", "Nikolov", 63789525, "Lulin", 36365899, "male", 2.1,14000);
     GrassWorker *gr2 = new GrassWorker("dsada", "sdada", "dada", 63789525, "Lulin", 36365899, "male", 3.1,15000);
	 co.addWorker(*tree);
	 co.addWorker(*tree2);
	 co.addWorker(*gr);
	 co.addWorker(*gr2);

	 co.printInfo();




//	Worker w1;
//    Worker w2("Georgi", "Stefanov", "Georgiev", 57895256, "Mladost", 23899, "male");
//
//
//    TreesWorker t1("Georgi", "Georgiev", "Georgiev", 1789525656, "Mladost", 3589999, "male", 2.5,200,0);
//    TreesWorker t2;
//    TreesWorker t3("Niki", "Nikolov", "Nikolov", 6789525, "Lulin", 3665899, "male", 6.1,140,1);
//
//    GrassWorker g1;
//    GrassWorker g2 ("Niki", "Nikolov", "Nikolov", 63789525, "Lulin", 36365899, "male", 2.1,14000);

//    g2.printInfo();
//    cout<<endl;
//
//    t2.printInfo();
//    cout<<endl;
//    g1.calcSalary();
//    cout<<endl;



   // co.printInfo();








	return 0;
}
