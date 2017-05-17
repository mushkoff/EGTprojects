//============================================================================
// Name        : Exam-TASK-1-BOX.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include "Box.h"

using namespace std;

int main() {

	Box result1;
	Box result2;


	cin >> result1;
	cin >> result2;


	cout << result1 << endl;
	cout << result2 << endl;



	cout<<endl;



	if(result1 < result2){
		cout<<"First box is bigger"<<endl;
	}else{
		cout<<"Second box is bigger"<<endl;
	}

	if (result1 == result2) {
		cout << "Box are equals" << endl;

	} else {
		cout << "Box are different" << endl;
	}

	cout << result1 << endl;

	Box box4 = result1 + result2;
	cout<<box4;

	return 0;
}
