/*
 * TreesWorker.cpp
 *
 *  Created on: 10.05.2017 ã.
 *      Author: user
 */

#include "TreesWorker.h"

TreesWorker::TreesWorker() :
		Worker() {
	setPayPerTree(3.1);
	setWorkedTrees(151);
	setExtras(0);

}

TreesWorker::~TreesWorker() {
	// TODO Auto-generated destructor stub
}

double TreesWorker::getExtras() const {
	return extras;
}

void TreesWorker::setExtras(const double extras) {
	if(this->extras == 1){
		this->extras = 0.6;

	}else{

	}
	this->extras = 0.3;
	//choosing working place city or out of the city range
}

double TreesWorker::getPayPerTree() const {
	return payPerTree;
}

void TreesWorker::setPayPerTree(const double payPerTree) {
	this->payPerTree = payPerTree;
}

double TreesWorker::getWorkedTrees() const {
	return workedTrees;
}

TreesWorker::TreesWorker(string firstName, string secondName, string lastName,
		long ID, string address, long phoneNumber, string gender,
		double payPerTree, double workedTrees, double extras) :
		Worker(firstName, secondName, lastName, ID, address, phoneNumber,
				gender) {
	setPayPerTree(payPerTree);
	setWorkedTrees(workedTrees);
	setExtras(extras);
}

void TreesWorker::setWorkedTrees(const double workedTrees) {
	this->workedTrees = workedTrees;
}

double TreesWorker::calcSalary() {
	double salary;
	if (getWorkedTrees() < 150) {
		return salary = (getWorkedTrees() * getPayPerTree()) - 250;
	}
	if (getWorkedTrees() > 300) {
		return salary = (getWorkedTrees() * getPayPerTree()) + 650;
	} else {
		return salary = getPayPerTree() * getWorkedTrees();
	}
}

void TreesWorker::printInfo() {
	Worker::printInfo();
	cout<<"Trees worker payment per tree is : "<<getPayPerTree()<<endl;
	cout<<"Trees worker worked trees are : "<<getWorkedTrees()<<endl;
	cout<<"Trees worker extras is : "<<getExtras()<<endl;
}
