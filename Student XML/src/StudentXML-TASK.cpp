//============================================================================
// Name        : StudentXML-TASK.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "pugixml.hpp"
#include "FileOperrands.h"
#include "Student.h"
#include "Exam.h"

using namespace std;

int main()
{
	//changed tab and code structuring

	FileOperrands fo;

	fo.traversing();
	fo.printByMap();
	cout << endl;


	return 0;
}
