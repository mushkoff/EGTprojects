/*
 * Book.h
 *
 *  Created on: 25.05.2017 ã.
 *      Author: Mihael Mushkov
 */

#ifndef BOOK_H_
#define BOOK_H_
#include <string>
#include <iostream>
#include "pugixml.hpp"
#include <vector>

using namespace std;

class Book {
public:
	Book();
	Book(string title, string author, int year, double price);
	virtual ~Book();
	const string& getAuthor() const;
	void setAuthor(const string& author);
	double getPrice() const;
	void setPrice(double price);
	const string& getTitle() const;
	void setTitle(const string& title);
	int getYear() const;
	void setYear(int year);
	void print();

private:
	string title;
	string author;
	int year;
	double price;

};

#endif /* BOOK_H_ */
