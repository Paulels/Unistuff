#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <vector>
#ifndef SORT_H
#define SORT_H

//

class Sort{

	protected:

		

	public:

		Sort();
		~Sort();

		virtual void sort(int *A,int start,int end)=0;

};
#endif //SORT_H
