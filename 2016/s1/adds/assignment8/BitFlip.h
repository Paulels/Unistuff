#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef BITFLIP_H
#define BITFLIP_H
#include "Individual.h"
#include "BinaryNode.h"

//

class BitFlip:public Individual{

	private:

		

	public:

		BitFlip();
		~BitFlip();

		void execute(int k);

};
#endif //BITFLIP_H
