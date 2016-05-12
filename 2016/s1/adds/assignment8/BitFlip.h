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

//This class extends Individual and inherits from it
//It defines the function execute
//It has 2 different constuctors and a deconstructor
//it will take a binary string and flip the kth digit

class BitFlip:public Individual{

	private:

		

	public:

		BitFlip(int length);
		BitFlip(std::string s);
		~BitFlip();

		void execute(int k);

};
#endif //BITFLIP_H
