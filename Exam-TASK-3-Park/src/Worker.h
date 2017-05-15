/*
 * Worker.h
 *
 *  Created on: 10.05.2017 ã.
 *      Author: user
 */

#ifndef WORKER_H_
#define WORKER_H_
#include <iostream>
#include <string>

using namespace std;


class Worker {
public:
	Worker();
	Worker(string firstName, string secondName, string lastName, long ID, string address, long phoneNumber, string gender);

	virtual ~Worker();
	const string& getAddress() const;
	void setAddress(const string& address);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getGender() const;
	void setGender(const string& gender);
	long getId() const;
	void setId(long id);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	long getPhoneNumber() const;
	void setPhoneNumber(long phoneNumber);
	const string& getSecondName() const;
	void setSecondName(const string& secondName);
	virtual void printInfo();


private:
	string firstName;
	string secondName;
	string lastName;
	long ID;
	string address;
	long phoneNumber;
	string gender;
};

#endif /* WORKER_H_ */
