/*
 * FileOperrands.h
 *
 *  Created on: 25.05.2017 ã.
 *      Author: Mihael Mushkov
 */

#ifndef FILEOPERRANDS_H_
#define FILEOPERRANDS_H_
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
using std::ofstream;

class FileOperrands {

	//declare opening files and other operrands in different class?


public:
	FileOperrands();
	FileOperrands(string type, int onHand, double price);
	virtual ~FileOperrands();
	int getOnHand() const;
	void setOnHand(int onHand);
	double getPrice() const;
	void setPrice(double price);
	const string& getType() const;
	void setType(const string& type);
	void printInfo();
	int fileCreator();
	double priceCalculator();
	int addNewItem();
	int deleteItem();

	 vector <FileOperrands*> file;
private:


	string type;
	int onHand;
	double price;

};

#endif /* FILEOPERRANDS_H_ */
