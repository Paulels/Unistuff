#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "MapTriple.h"
using namespace std;

MapTriple::MapTriple(){

}

MapTriple::~MapTriple(){

}

int MapTriple::f(int x){

	return 3*x;

};

int MapTriple::map(deque<int> mvec){

	int c;
	c=f(mvec.at(0));
	mappedVec.push_back(c);
	int s=mvec.size();
	if(s==1){
		return 0;
	}
	else{
		mvec.pop_front();
		map(mvec);
	}
};

int MapTriple::getMappedVec(int p){

	return mappedVec.at(p);

};


