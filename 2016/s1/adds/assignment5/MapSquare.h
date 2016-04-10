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

//

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
