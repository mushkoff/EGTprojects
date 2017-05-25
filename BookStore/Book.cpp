/*
 * Book.cpp
 *
 *  Created on: 25.05.2017 ã.
 *      Author: Mihael Mushkov
 */

#include "Book.h"


Book::Book(string title, string author, int year, double price) {
	setTitle(" ");
	setAuthor(" ");
	setYear(0);
	setPrice(0.0);
}
Book::Book(){

}
Book::~Book() {
	// TODO Auto-generated destructor stub
}

const string& Book::getAuthor() const {
	return author;
}

void Book::setAuthor(const string& author) {
	this->author = author;
}

double Book::getPrice() const {
	return price;
}

void Book::setPrice(double price) {
	this->price = price;
}

const string& Book::getTitle() const {
	return title;
}

void Book::setTitle(const string& title) {
	this->title = title;
}

int Book::getYear() const {
	return year;
}

void Book::setYear(int year) {
	this->year = year;
}

void Book::print() {
	cout << "Title is: " << getTitle() << endl;
	cout << "Author is: " << getAuthor() << endl;
	cout << "Year: " << getYear() << endl;
	cout << "Price is: " << getPrice() << endl;
}
