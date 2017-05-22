/*
 * CurrencyFormat.cpp
 *
 *  Created on: 22.05.2017 ã.
 *      Author: user
 */

#include "CurrencyFormat.h"

string CurrencyFormat::currencyFormat(double amount) {

	string result;
	stringstream ss; // using stringstream library

	ss << fixed << setprecision(3) << amount;
	// making sure that we will take only 2 sighns after the point 2131231.12(31231)

	int amountSize = ss.str().size();
	//taking the STRING size of the double number elements

	char tempAmount[amountSize]; // putting in into char array so we can use it ONE by ONE
	ss.get(tempAmount, amountSize); // transfering numbers into the char array

	int counter = 0;
	for (int i = 0; i < amountSize; i++) {

		result = tempAmount[amountSize - i - 1] + result;
		// We take the last element of the array, so we can count from the dot

		if (counter >= 3) {

			result = " " + result;
			counter = 0;

		}

		if (i > 3) {
			//making sure we passed the dot "."

			counter++;

		}

	}

	return result;
}
