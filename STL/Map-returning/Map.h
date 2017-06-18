/*
 * Map.h
 *
 *  Created on: 8.06.2017 ã.
 *      Author: user
 */

#ifndef MAP_H_
#define MAP_H_
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
typedef std::map<std::string, vector<int> > typeToQuantity;
typedef std::vector<int> temperatures;

class Map
{
public:
	Map();
	virtual ~Map();

	//stackoverflow
//	map<string, int> myMap;
//
//	myMap = initMap( &myMap );
//  map<string, int> initMap( map<string, int> *theMap )
//	map<string, int> myMap;
//	myMap = initMap(  );
//
//	map<string, int> initMap()
//	{
//	    map<string, int> theMap;
//	    /* do stuff in theMap */
//	    return theMap;
//	}

	typeToQuantity vecToMap(std::string, int size, int array[]);
	temperatures arrayToVec(int size, int array[]);

	int maxTemp();
	typeToQuantity highestTempOfTheWeek(std::string cityName, int size,
			int array[]);

private:

	std::map<std::string, int> sortTemp;
	std::map<std::string, int> highestTemp;
};

#endif /* MAP_H_ */
