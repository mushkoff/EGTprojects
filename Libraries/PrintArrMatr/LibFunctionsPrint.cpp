//============================================================================
// Name        : LibFunctionsPrint.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Print.h"

using namespace Print;

int main() {

//	int size;
//	cout << "Please the size of array" << endl;
//	cin >> size;
//	cout << "Please enter values for the array" << endl;
//
//	int array[size];
//	for (int i = 0; i < size; i++) {
//		cin >> array[i];
//	}
//
//	printArray(array, size);
//

	int rows;
	int colums;
	cout << "Please enter rows of the matrix" << endl;
	cin >> rows;
	cout << "Please enter colums of the matrix" << endl;
	cin >> colums;
	cout << "Please enter values of the matrix" << endl;

	int** matrix = new int*[rows];
	for (int i = 0; i < rows; i++) {

		matrix[i] = new int[colums];
	}

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < colums; j++) {
			cin >> matrix[i][j];
		}
	}
	printMatrix(matrix, rows, colums);

	return 0;
}
