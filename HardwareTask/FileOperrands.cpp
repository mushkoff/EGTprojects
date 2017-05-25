/*
 * FileOperrands.cpp
 *
 *  Created on: 25.05.2017 ã.
 *      Author: Mihael Mushkov
 */

#include "FileOperrands.h"

FileOperrands::FileOperrands() {
	setType(" ");
	setOnHand(0);
	setPrice(0.0);

}

FileOperrands::~FileOperrands() {
	// TODO Auto-generated destructor stub
}

int FileOperrands::getOnHand() const {
	return onHand;
}

void FileOperrands::setOnHand(int onHand) {
	this->onHand = onHand;
}

double FileOperrands::getPrice() const {
	return price;
}

void FileOperrands::setPrice(double price) {
	this->price = price;
}

const string& FileOperrands::getType() const {
	return type;
}

FileOperrands::FileOperrands(string type, int onHand, double price) {
	setType(type);
	setOnHand(onHand);
	setPrice(price);
}

void FileOperrands::setType(const string& type) {
	this->type = type;
}

void FileOperrands::printInfo() {
	cout << "The hardware type is: " << getType() << endl;
	cout << "Quantity of the items are: " << getOnHand() << endl;
	cout << "The price is: " << getPrice() << endl;
}

int FileOperrands::fileCreator() {

	ofstream hardware("hardware.dat", ios::out);

	if (!hardware) {
		cout << "Cannot open this file" << endl;
		return -1;

	}
	cout << "Enter hardware type, quantity and price of the item" << endl;

	while (cin >> type >> onHand >> price) {
		hardware << type << " - " << onHand << " - " << price;
		cout << endl;
	}
	return 0;
}

double FileOperrands::priceCalculator() {
	double result;
	result = getPrice() + getOnHand();
	return result;
}

int FileOperrands::addNewItem() {
	vector<FileOperrands*> file; //needs to be done again!
}

int FileOperrands::deleteItem() {
	//needs to be uprgraded
}
