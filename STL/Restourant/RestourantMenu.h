/*
 * RestourantMenu.h
 *
 *  Created on: 28.05.2017 ã.
 *      Author: user
 */
#include <iostream>
#include <string>
#ifndef RESTOURANTMENU_H_
#define RESTOURANTMENU_H_

using namespace std;

class RestourantMenu
{
public:
	RestourantMenu();
	RestourantMenu(string m_strName,
			string m_strDescription, double m_dPrice);
	virtual ~RestourantMenu();
	//setters

	void setStrName(const string& strName);
	void setStrDescription(const string& strDescription);
	void setDPrice(double DPrice);
	//getters

	const string& getStrName() const;
	const string& getStrDescription() const;
	double getDPrice() const;

	void PrintInfo();

private:

	string m_strName;
	string m_strDescription;
	double m_dPrice;
};

#endif /* RESTOURANTMENU_H_ */
