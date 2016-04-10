#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef MAPGENERIC_H
#define MAPGENERIC_H

//

class MapGeneric{

	private:

		virtual int f(int x)=0;

	public:

		MapGeneric();

		virtual std::deque<int> map(std::deque<int> mvec)=0;

};
#endif //MAPGENERIC_H
