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

//

class MapAbsoluteValue:public MapGeneric{

	private:

		std::deque<int> mappedVec;

		int f(int x);

	public:
int k;

		MapAbsoluteValue();

		std::deque<int> map(std::deque<int> mvec);

};
#endif //MMAPABSOLUTEVALUE_H
