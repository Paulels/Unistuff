#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef MYBINARYMAP_H
#define MYBINARYMAP_H
#include "asmsymbols.h"

//This class will map my parsed instructions from strings to binary code and print that out

class myBinaryMap{

	public:

		myBinaryMap();
		~myBinaryMap();
		std::string cMap(std::string parsedToken);
		void aMap(std::string tokenValue);

	private:

        symbols_string *dest ;
        symbols_string *comp ;
        symbols_string *jump ;

};
#endif //MYBINARYMAP_H
