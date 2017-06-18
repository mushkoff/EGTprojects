/*
 * Map.cpp
 *
 *  Created on: 8.06.2017 ã.
 *      Author: user
 */

#include "Map.h"
#include <algorithm>
#include <iterator>

Map::Map()
{
	// TODO Auto-generated constructor stub

}

Map::~Map()
{
	// TODO Auto-generated destructor stub
}

//int Map::maxTemp()
//{
//}

typeToQuantity Map::vecToMap(std::string cityName, int size, int array[])
{
	typeToQuantity newMap;

	newMap[cityName] = arrayToVec(size, array);

	for (typeToQuantity::iterator it = newMap.begin(); it != newMap.end(); ++it)
	{

		std::cout << "City is :" << it->first << "\n";
		std::cout << "Temperatures are: ";
		for (unsigned int i = 0; i < it->second.size(); i++)
		{
			std::cout << it->second[i] << "\n";
		}
	}

	return newMap;

}

typeToQuantity Map::highestTempOfTheWeek(std::string cityName, int size,
		int array[])
{
	typeToQuantity maxTemp;

	int maxT = 0;

	maxTemp[cityName] = arrayToVec(size, array);
	typeToQuantity::iterator it;

	for (it = maxTemp.begin(); it != maxTemp.end(); ++it)
	{
		std::cout << "Hottest city is : " << it->first;

		for (unsigned int i = 0; i < it->second.size(); ++i)
		{
			if (maxT > it->second[i])
			{
				maxT = it->second[it->second.size() - 1];
			}
		}
		std::cout << "Temperature is : " << maxT << std::endl;
	}
	return maxTemp;

}
temperatures Map::arrayToVec(int size, int array[])
{

	temperatures tempAr;

	//assign = std::vector<int> m_vec;

	tempAr.assign(array, array + size);

	sort(tempAr.begin(), tempAr.begin() + size);

	for (unsigned int i = 0; i < tempAr.size(); ++i)
	{
		std::cout << tempAr[i] << std::endl;
	}

	return tempAr;
}
