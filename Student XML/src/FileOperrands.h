/*
 * FileOperrands.h
 *
 *  Created on: 26.05.2017 �.
 *      Author: user
 */

#ifndef FILEOPERRANDS_H_
#define FILEOPERRANDS_H_
#include "Exam.h"
#include "Student.h"
#include <iomanip>
#include <iostream>
#include <vector>
#include <map>
#include "pugixml.hpp"


using namespace std;

class FileOperrands {

public:
	FileOperrands();
	void traversing();
	void printByMap();



	virtual ~FileOperrands();
private:

	vector<Student*> studentObject;
	map<int, Student*> mapS;
};

#endif /* FILEOPERRANDS_H_ */
