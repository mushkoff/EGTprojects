/*
 * Operations.cpp
 *
 *  Created on: 10.05.2017 ã.
 *      Author: user
 */

#include "Operations.h"

Operations::Operations() {
	// TODO Auto-generated constructor stub

}

Operations::~Operations() {
	// TODO Auto-generated destructor stub
}

void Operations::printInfo() {
	for (unsigned int i = 0; work.size(); i++) {
		work[i]->printInfo();

		if (GrassWorker* ptr = dynamic_cast<GrassWorker*>(work[i])) {
			cout << ptr->calcSalary();
			//	cout << ptr->getWorkerdArea();
		}
	}
}

double Operations::sumOfGrassSalaries() {
	return 0;
}

void Operations::addWorker(Worker& obj) {
	work.push_back(&obj);
	// 0x2131231 0x2344 0x5432323
}
