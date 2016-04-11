#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include "MapGeneric.h"

//This class takes in a deque and then makes all of the values in it positive
//it stores the mapped deque 
//It has both a public recursive function and a private function
//it inherits from MapGeneric

class MapAbsoluteValue:public MapGeneric{

	private:

		std::deque<int> mappedVec;

		int f(int x);

	public:

		MapAbsoluteValue();
		~MapAbsoluteValue();

		int getMappedVec(int p);
		int map(std::deque<int> mvec);

};
#endif //MMAPABSOLUTEVALUE_H
