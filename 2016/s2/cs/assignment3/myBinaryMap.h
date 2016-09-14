#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef MYBINARYMAP_H
#define MYBINARYMAP_H

//

class myBinaryMap{

	public:

		myBinaryMap();
		~myBinaryMap();
		std::string cMap(std::string parsedToken);
		std::string aMap(std::string tokenValue);

};
#endif //MYBINARYMAP_H
