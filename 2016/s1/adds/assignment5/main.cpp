#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include <sstream>
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

	string s;
	deque<int> vec;
	getline(cin,s);

	stringstream ss(s);

	int j;

	while(ss>>j){
		vec.push_back(j);
		if(ss.peek()==',' ||ss.peek()==' '){
			ss.ignore();
		}
	}

	MapTriple MapTriple;
	MapSquare MapSquare;
	MapAbsoluteValue MapAbsoluteValue;
	FilterPositiveTwoDigit FilterPositiveTwoDigit;
	FilterPositive FilterPositive;
	FilterEven FilterEven;

	deque<int> saved;
	int i=0;

	MapAbsoluteValue.map(vec);

	for(i=0;i<20;i++){
		saved.push_back(MapAbsoluteValue.getMappedVec(i));
	}

	MapTriple.map(saved);
	saved.clear();

	for(i=0;i<20;i++){
		saved.push_back(MapTriple.getMappedVec(i));
	}

	int a;
	FilterPositiveTwoDigit.filter(saved);
	a=FilterPositiveTwoDigit.getVecSize();
	saved.clear();

	for(i=0;i<a;i++){
		saved.push_back(FilterPositiveTwoDigit.getFilteredVec(i));
	}

	FilterEven.filter(saved);
	a=FilterEven.getVecSize();
	saved.clear();

	for(i=0;i<a;i++){
		saved.push_back(FilterEven.getFilteredVec(i));
	}

	ReduceMinimum ReduceMinimum;
	ReduceGCD ReduceGCD;

	ReduceMinimum.setReduceInt(saved.at(0));
	ReduceGCD.setReduceInt(saved.at(0));

	ReduceMinimum.setOriginalVec(saved);
	ReduceGCD.setOriginalVec(saved);

	ReduceMinimum.reduce(saved);
	ReduceGCD.reduce(saved);

	cout<<ReduceMinimum.getReduceInt()<<" "<<ReduceGCD.getReduceInt()<<endl;

}
