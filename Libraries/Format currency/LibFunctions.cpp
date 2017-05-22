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
	string str;
	cout << "Please enter the amount of your money: " << endl;
	cin >> a;
	cout << "Please enter your currency in symbol (USD,EU,GBR.etc): " << endl;
	cin >> str;
	cout << currencyFormat(a) << str << endl;

	return 0;
}
