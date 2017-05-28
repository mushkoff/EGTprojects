/*
 * FileOperands.h
 *
 *  Created on: 28.05.2017 ã.
 *      Author: user
 */

#ifndef FILEOPERANDS_H_
#define FILEOPERANDS_H_
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <vector>
#include "RestourantMenu.h"
#include "pugixml.hpp"
#include "pugiconfig.hpp"
#include <fstream>

using namespace std;

class FileOperands
{
public:
	FileOperands();
	virtual ~FileOperands();

	void LoadXML();
	void PrintMenu();
    void CreateFile();


private:

	vector<RestourantMenu*> m_vecMenu;
};

#endif /* FILEOPERANDS_H_ */
