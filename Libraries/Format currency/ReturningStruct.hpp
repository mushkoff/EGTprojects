/*
 * ReturningStruct.hpp
 *
 *  Created on: 30.05.2017 ã.
 *      Author: user
 */

#ifndef RETURNINGSTRUCT_HPP_
#define RETURNINGSTRUCT_HPP_

struct quotStr
{

	int quotient;
	int remainder;

};

template<class T>

quotStr divide(T a, T b)
{
	quotStr s;
	s.quotient = 0;

	while (a >= b)
	{
		a -= b;
		s.quotient++;

	}
	s.remainder = a;
	return s;

}

#endif /* RETURNINGSTRUCT_HPP_ */
