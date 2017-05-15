/*
 * TreesWorker.h
 *
 *  Created on: 10.05.2017 ã.
 *      Author: user
 */

#ifndef TREESWORKER_H_
#define TREESWORKER_H_
#include <iostream>
#include "Worker.h"

class TreesWorker: public Worker {
public:
	TreesWorker();
	TreesWorker(string firstName, string secondName, string lastName, long ID, string address, long phoneNumber, string gender,
			double payPerTree, double workedTrees, double extras);
	virtual ~TreesWorker();
	double getExtras() const;
	void setExtras(const double extras);
	double getPayPerTree() const;
	void setPayPerTree(const double payPerTree);
	double getWorkedTrees() const;
	void setWorkedTrees(const double workedTrees);
	double calcSalary();
	virtual void printInfo();

private:
	double payPerTree;
	double workedTrees;
	double extras; //you have to choose 1 - for city working place  or 0 - for out of the city range


};

#endif /* TREESWORKER_H_ */
