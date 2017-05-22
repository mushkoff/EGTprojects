//============================================================================
// Name        : 05-Core-STL-Vector.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using std::map;
using std::endl;
using std::cout;
#include <vector>
using namespace std;

int main() {

	map<int, int, std::less<int> > counters;
	map<int, int>::iterator it;

	int array[] = { 2, 2, 1, 2, 4, 5, 6, 7, 7, 4 };

	vector<int> vc;
	std::vector<int> occur(&array[0], &array[0] + 10);

	for (unsigned int i = 0; i < occur.size(); i++) {
		int key = occur[i];
		it = counters.find(key);
		if (it != counters.end()) {
			counters[key]++;
		} else {
			counters[key] = 1;
		}
	}
	vector<int>::iterator itv = occur.begin();
	cout << "After odding left numbers are" << endl;
	for (it = counters.begin(); it != counters.end(); it++) {
		cout << "###########" << endl;
		cout << it->first << "\t " << it->second << endl;

	}
	cout << "New Numbers are"<<endl;
	for (unsigned int i = 0; i < occur.size(); i++) {
		if (counters[occur[i]] % 2 != 0) {

			occur.erase(occur.begin() + i);
			// we need to create iterator for vector before deleting them!
			i--;

		}
	}
	for (unsigned int i = 0; i < occur.size(); i++) {
		cout << occur[i] << " " << endl;
	}

	return 0;
}
