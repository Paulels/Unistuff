#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>
#include <deque>
#include "MapSquare.h"
using namespace std;

MapSquare::MapSquare(){

}

MapSquare::~MapSquare(){

}

int MapSquare::f(int x){

	return x*x;
};

int MapSquare::map(deque<int> mvec){

	int a;
	a=f(mvec.at(0));
	mappedVec.push_back(a);
	int s=mvec.size();
	if(s==1){
		return 0;
	}
	else{
		mvec.pop_front();
		map(mvec);
	}
};

int MapSquare::getMappedVec(int p){

	return mappedVec.at(p);

};
