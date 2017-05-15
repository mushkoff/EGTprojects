//============================================================================
// Name        : 05-Triangle-OperatorOverload.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {

	Triangle t1;
	Triangle t2;

	cin >> t1;
	cin >> t2;
	cout << t1;
	cout << endl;
	cout << t2;
	cout << endl;

	if (t1 == t2) {
		cout << "They are equals" << endl;

	} else {
		cout << "They are different" << endl;
	}
	if(t1 != t2){
		cout<<"They are different"<<endl;
	}else{
		cout<<"They are NOT different"<<endl;
	}

	return 0;
}
