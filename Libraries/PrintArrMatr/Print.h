/*
 * Print.h
 *
 *  Created on: 23.05.2017 ã.
 *      Author: user
 */

#ifndef PRINT_H_
#define PRINT_H_
#include <iostream>

using namespace std;

// templates must be declared in hedder file!!!!
//otherwise they are not working

namespace Print {

template<typename T> void printArray(T* array, T size) {
	cout << "[";
	for (int i = 0; i < size; i++) {
		cout << array[i];
		if (i < size - 1)
			cout << ", ";

	}
	cout << "]";

}
}
template<typename T> void printMatrix(T* matrix, int rows, int colums) {

	for (int i = 0; i < rows; i++) {
		cout << "[";
		for (int j = 0; j < colums; j++) {
			cout << matrix[i][j];
			if (j < colums - 1)
				cout << ", ";

		}
		cout << "]\n";

			}
	};

#endif /* PRINT_H_ */
