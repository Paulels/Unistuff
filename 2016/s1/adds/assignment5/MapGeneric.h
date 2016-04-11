#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef MAPGENERIC_H
#define MAPGENERIC_H

//This is the generic map class that is purely virtual 
//It has a recursive function and a private function which work together to map the values

class MapGeneric{

	private:

		virtual int f(int x)=0;

	public:

		MapGeneric();

		virtual int map(std::deque<int> mvec)=0;

};
#endif //MAPGENERIC_H
