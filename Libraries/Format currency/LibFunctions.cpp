//============================================================================
// Name        : LibFunctions.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "CurrencyFormat.h"
using namespace CurrencyFormat;
using namespace std;

int main() {

	double a;
	char USD = '\u0024';
	string GBR = "£ GBR "; // char symbols are not working for GBR char(156)
	string EUR = "EUR "; // char symbols are not working for EUR
	int str;
	cout << "Please enter the amount of your money: " << endl;
	cin >> a;
	cout << "Please enter your currency in symbols (USD,EU,GBR.etc)(: " << endl;
	cout << "For USD please press 1" << endl;
	cout << "For GBR please press 2" << endl;
	cout << "For EUR please press 3" << endl;
	cin >> str;

	switch (str) {
	case 1:
		cout << USD;
		break;
	case 2:
		cout << GBR;
		break;
	case 3:
		cout << EUR;
		break;
	default:
		cout << "Invalid choice" << endl;
	}
	cout << currencyFormat(a) << endl;

	return 0;
}
