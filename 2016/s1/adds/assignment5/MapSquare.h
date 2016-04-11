#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include "MapGeneric.h"

//This class takes in a deque and then squares all of the values in it
//it stores the mapped deque 
//It has both a public recursive function and a private function
//it inherits from MapGeneric

class MapSquare:public MapGeneric{

	private:

		std::deque<int> mappedVec;

		int f(int x);

	public:

		MapSquare();
		~MapSquare();

		int getMappedVec(int p);
		int map(std::deque<int> mvec);

};
#endif //MAPSQUARE_H
