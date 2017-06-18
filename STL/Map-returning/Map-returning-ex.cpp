/*
 * Map-returning-ex.cpp
 *
 *  Created on: 8.06.2017 ã.
 *      Author: user
 */

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "Map.h"

int main()
{

	Map newMap;

	int sofia[7] =
	{ 23, 25, 26, 21, 29, 35, -1 };
	int plovdiv[7] =
	{ 24, 27, 29, 29, 38, 20, 40 };
	int varna[7] =
	{ 19, -1, -24, 20, 2, 9, 20 };

	newMap.arrayToVec(7, sofia);
	newMap.vecToMap("plovdiv", 7, plovdiv);
	newMap.highestTempOfTheWeek("varna",7,varna);

	return 0;
}

