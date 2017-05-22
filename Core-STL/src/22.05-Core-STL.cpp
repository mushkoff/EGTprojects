//============================================================================
// Name        : 05-Core-STL.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


//TASK 6

// 29.05 - MONDAY!!!!!
// PUGI DOWNLAOD XML
// reading info from XML files and adding them to objects or vectors
//object creations
// add to vector/map

//STL EXAM - vector and map(multi map)
// File reading (bin, etc.) XML

#include <map>
using std::endl;
using std::cout;
using std::map;

int main() {

	map<int, int, std::less<int> > counters;

	// key : array element    value : how many times

	//4 - 20

	map<int, int>::iterator it;
	//creating iterator

	int array[] = { 2, 3, 56, 46, 65, 45, 5, 67, 74, 44 };

	for (unsigned int i = 0; i < 10; i++) {
		int key = array[i];
		counters.find(key);
		if (it != counters.end()) {
			// true - we have it iterator in the map
			counters[key]++;
			//moving to next key
		} else { //else we can`t find the end iterator in the map
			counters[key] = 1;
		}
	}
	cout << "Number " << " " << "Occurances " << endl;
	for (it = counters.begin(); it != counters.end(); it++) {
		cout << it->first << "\t " << it->second << endl;
	}

	return 0;
}
