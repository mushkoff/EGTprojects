/*
 * RestourantMenu.cpp
 *
 *  Created on: 28.05.2017 ã.
 *      Author: user
 */

#include "RestourantMenu.h"

RestourantMenu::RestourantMenu()
{

	setStrName(" ");
	setStrDescription(" ");
	setDPrice(0.0);

}

RestourantMenu::~RestourantMenu()
{
	// TODO Auto-generated destructor stub
}




void RestourantMenu::setStrName(const string& strName)
{
	m_strName = strName;
}
void RestourantMenu::setStrDescription(const string& strDescription)
{
	m_strDescription = strDescription;
}
void RestourantMenu::setDPrice(const double dPrice)
{
	m_dPrice = dPrice;
}

RestourantMenu::RestourantMenu(string m_strName,
		string m_strDescription, double m_dPrice)

{

	setStrName(m_strName);
	setStrDescription(m_strDescription);
	setDPrice(m_dPrice);

}

double RestourantMenu::getDPrice() const
{
	return m_dPrice;
}

const string& RestourantMenu::getStrName() const
{
	return m_strName;
}

const string& RestourantMenu::getStrDescription() const
{
	return m_strDescription;
}

void RestourantMenu::PrintInfo()
{
	cout<<"Today`s Menu is: "<<endl;
	cout<<"Meal: "<<getStrName()<<endl;
	cout<<"It contains: "<<getStrDescription()<<endl;
	cout<<"And it costs ONLY: "<<getDPrice()<<"$"<<endl;
}
