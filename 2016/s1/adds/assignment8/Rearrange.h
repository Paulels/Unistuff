#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef REARRANGE_H
#define REARRANGE_H
#include "Individual.h"
#include "BinaryNode.h"

//This class extends Individual and inherits from it
//It defines the function execute
//It has 2 different constuctors and a deconstructor
//it will take a binary string and rearrange it from the kth digit

class Rearrange:public Individual{

	private:

		

	public:

		Rearrange(int length);
		Rearrange(std::string s);
		~Rearrange();

		void execute(int k);

};
#endif //REARRANGE_H
