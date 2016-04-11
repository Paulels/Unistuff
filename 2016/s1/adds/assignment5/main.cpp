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

//Takes in a users input of 20 numbers with commas and/or spaces inbetween and it prints ot the 
//minimum and the greatest common denominator of these values one they have been mapped and filtered

int main(){

	//getting users input as a string
	string s;
	deque<int> vec;
	getline(cin,s);

	stringstream ss(s); //constructing a stringstream object

	int j;

	while(ss>>j){				//stores the numbers as integers in j
		vec.push_back(j);		
		if(ss.peek()==',' ||ss.peek()==' '){	//checks to see what the next character in the stream 
			ss.ignore();						//and ignores it if it is a space or comma
		}
	}

	//Initialising my classes
	MapTriple MapTriple;
	MapSquare MapSquare;
	MapAbsoluteValue MapAbsoluteValue;
	FilterPositiveTwoDigit FilterPositiveTwoDigit;
	FilterPositive FilterPositive;
	FilterEven FilterEven;

	deque<int> saved;		//deque used to store the results of the mapping and filtering
	int i=0;

	//mapping for the absolute value and tripling and then filtering positive two digit numbers
	//that are even 
	//inbetween each map and filter I store the result in saved and then  that is my input for the
	//next stage, I then clear out saved ready to store the next results
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

	//initialising the reduce classes
	ReduceMinimum ReduceMinimum;
	ReduceGCD ReduceGCD;

	ReduceMinimum.setReduceInt(saved.at(0));
	ReduceGCD.setReduceInt(saved.at(0));

	ReduceMinimum.setOriginalVec(saved);
	ReduceGCD.setOriginalVec(saved);

	//reducing the deque saved down to the minimum and GCD
	ReduceMinimum.reduce(saved);
	ReduceGCD.reduce(saved);

	//Printing out the results
	cout<<ReduceMinimum.getReduceInt()<<" "<<ReduceGCD.getReduceInt()<<endl;

}
