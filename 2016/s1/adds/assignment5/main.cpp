#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterEven.h"
#include "FilterPositive.h"
#include "FilterPositiveTwoDigit.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
using namespace std;

//comments

int main(){

	deque<int> vec;
	int i=0;
	vec.push_back(18);
	vec.push_back(48);
	vec.push_back(37);
	vec.push_back(60);
	vec.push_back(6);

	ReduceMinimum ReduceMinimum;
	ReduceGCD ReduceGCD(vec);
	MapTriple MapTriple;
	MapSquare MapSquare;
	MapAbsoluteValue MapAbsoluteValue;
	FilterPositiveTwoDigit FilterPositiveTwoDigit;
	FilterPositive FilterPositive;
	FilterEven FilterEven;

	deque<int> saved;
	MapAbsoluteValue.map(vec);
	MapTriple.map(vec);
	FilterPositiveTwoDigit.filter(vec);
	FilterEven.filter(vec);

int a=FilterEven.getVecSize();

for(i=0;i<a;i++){
saved.push_back(FilterEven.getFilteredVec(i));
cout<<saved.at(i)<<endl;
}


/*	ReduceMinimum.reduce(vec);

	ReduceGCD.reduce(vec);

	cout<<ReduceMinimum.getReduceInt()<<" "<<ReduceGCD.getReduceInt()<<endl;*/

}
