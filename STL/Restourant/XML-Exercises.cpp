//============================================================================
// Name        : XML-Exercises.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "FileOperands.h"
#include "RestourantMenu.h"
#include "pugixml.hpp"
#include "pugiconfig.hpp"
#include <cstdlib>
#include <vector>


using namespace std;

int main() {


	FileOperands fo;

	fo.LoadXML();
	fo.PrintMenu();
	fo.CreateFile();




	return 0;
}
