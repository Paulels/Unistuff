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
int k;

		MapSquare();

		std::deque<int> map(std::deque<int> mvec);

};
#endif //MAPSQUARE_H
