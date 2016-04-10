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
	vec.push_back(36);
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

//deque<int> saved;	
//saved=MapSquare.map(vec);
//MapTriple.map(vec);
//MapAbsoluteValue.map(vec);
//FilterPositiveTwoDigit.filter(vec);
//FilterPositive.filter(vec);
//FilterEven.filter(vec);

	ReduceMinimum.reduce(vec);

	ReduceGCD.reduce(vec);

	cout<<ReduceMinimum.getReduceInt()<<" "<<ReduceGCD.getReduceInt()<<endl;
	//cout<<MapTriple.k<<MapSquare.k<<MapAbsoluteValue.k<<FilterPositiveTwoDigit.k<<FilterPositive.k<<FilterEven.k<<endl;
}
