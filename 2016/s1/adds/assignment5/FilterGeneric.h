#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

//This is the generic filter class that is purely virtual
//It has a recursive public function and a private function which work together to filter the deque

class FilterGeneric{

	private:

		virtual bool f(int x)=0;

	public:

		FilterGeneric();

		virtual int filter(std::deque<int> fvec)=0;

};
#endif //FILTERGENERIC_H
