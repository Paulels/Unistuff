#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H
#include "MapGeneric.h"

//

class MapTriple:public MapGeneric{

	private:

		std::deque<int> mappedVec;

		int f(int x);

	public:

		MapTriple();
		~MapTriple();

		int map(std::deque<int> mvec);
		int getMappedVec(int p);


};
#endif //MAPTRIPLE_H
