//============================================================================
// Name        : HardwareTask.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "FileOperrands.h"
using namespace std;

enum RequestType { ADD_FILE = 1, CALCULATE_PRICE, SHOW_INFO, ADD_ITEM, DELETE_ITEM, EXIT };
int  request;

int main() {
	FileOperrands fo;

	while (request != EXIT){
		switch  (request) {
		case ADD_FILE:
          fo.fileCreator();
          cout<<"Hardware.dat file added"<<endl;
          break;
		case CALCULATE_PRICE:
			cout<<"Price per selected items is: "<<endl;
			fo.priceCalculator();
			break;
		case SHOW_INFO:
			for(unsigned int i = 0; i < fo.file.size(); i++){
				fo.printInfo();
			}
//		case ADD_ITEM:
//
//
			//need to overlook the vector functions
		}
	}





	return 0;
}
