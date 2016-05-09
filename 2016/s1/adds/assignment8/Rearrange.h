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

//

class Rearrange:public Individual{

	private:

		

	public:

		Rearrange();
		~Rearrange();

		void execute(int k);

};
#endif //REARRANGE_H
