/*
 * FileOperands.cpp
 *
 *  Created on: 28.05.2017 ã.
 *      Author: user
 */

#include "FileOperands.h"
#include <iomanip>

FileOperands::FileOperands()
{
	// TODO Auto-generated constructor stub

}

FileOperands::~FileOperands()
{
	// TODO Auto-generated destructor stub
}

void FileOperands::LoadXML()
{

	pugi::xml_document doc;

	if (!doc.load_file("menu.xml"))
	{
		cout << "ERROR, CANNOT OPEN THIS FILE" << endl;
		exit(1);
	}
	else
	{

	}
	cout << "File succesfully loaded" << endl;
	pugi::xml_node todayMenu = doc.child("menu");
	for (pugi::xml_node meal = todayMenu.child("meal"); meal;
			meal = meal.next_sibling("meal"))
	{
		string m_strDescription;
		string m_strDesc;
		string m_strName;
		double m_dPrice = 0.0;

		m_strName = meal.child("name").text().as_string();
		m_strDescription = meal.child("description").text().as_string();
		m_dPrice = meal.child("price").text().as_double();

		RestourantMenu *newMenu = new RestourantMenu(m_strName,
				m_strDescription, m_dPrice);

		m_vecMenu.push_back(newMenu);

	}

}

void FileOperands::PrintMenu()
{
	for (unsigned int i = 0; i < m_vecMenu.size(); i++)
	{
		m_vecMenu[i]->PrintInfo();
		cout << endl;
	}
}

void FileOperands::CreateFile()
{
	ofstream RestourantMenu("RestourantMenu.txt", ios::out);

	if (!RestourantMenu)
	{
		cout << "ERROR, CAN NOT CREATE FILE" << endl;
	}
	else
	{
		cout << "File is succesfully created" << endl;
	}
	string m_strName, m_strDescription;
	double m_dPrice;
	int m_iPosition;

	FileOperands fo;

	RestourantMenu << left << setw(5) << "*" << setw(20) << "Meal Name"
			<< setw(40) << "It contains" << setw(15) << "Price" << endl;
	for (unsigned int i = 0; i < m_vecMenu.size(); i++)
	{
		m_iPosition = i + 1;
		m_strName = m_vecMenu[i]->getStrName();
		m_strDescription = m_vecMenu[i]->getStrDescription();
		m_dPrice = m_vecMenu[i]->getDPrice();

		RestourantMenu << left << setw(5) << m_iPosition << setw(20)
				<< m_strName << setw(40) << m_strDescription << setw(15)
				<< right << m_dPrice << endl;
	}

}

