//============================================================================
// Name        : BookstoreXML-TASK.cpp
// Author      : Mihael Mushkov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Book.h"
#include "pugixml.hpp"
#include "pugiconfig.hpp"

using namespace std;

int main() {

	vector<Book> booksObj;
	pugi::xml_document doc;

	if (doc.load_file("books.xml")) {
		cout << "File is succesfuly opened!" << endl;
	} else {
		cout << "FATAL ERROR" << endl;
	}
	pugi::xml_node books = doc.child("bookstore");

	for (pugi::xml_node book = books.child("book"); book;
			book = book.next_sibling("book")) {
		Book b1;
		b1.setTitle(book.child("title").text().as_string());
		b1.setAuthor(book.child("author").text().as_string());
		b1.setYear(book.child("year").text().as_int());
		b1.setPrice(book.child("price").text().as_double());
		booksObj.push_back(b1);

	}
	for (unsigned i = 0; i < booksObj.size(); i++) {
		booksObj[i].print();
		cout << endl;
	}

	return 0;
}
