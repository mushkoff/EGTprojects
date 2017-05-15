/*
 * Operations.h
 *
 *  Created on: 10.05.2017 ã.
 *      Author: user
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include <iostream>
#include <string>
#include <vector>

#include "TreesWorker.h"
#include "Worker.h"
#include "GrassWorker.h"

using namespace std;

class Operations {
public:
	Operations();
	virtual ~Operations();
    void printInfo();
	double sumOfGrassSalaries();
	const vector<Worker*>& getWork() const;
	void setWork(const vector<Worker*>& work);
	void addWorker(Worker&);


private:

	vector<Worker*> work;

};

#endif /* OPERATIONS_H_ */
