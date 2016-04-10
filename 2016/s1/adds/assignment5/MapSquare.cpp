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
k=2;
}

int MapSquare::f(int x){

	return x*x;
};

deque<int> MapSquare::map(deque<int> mvec){

	int a;
	a=f(mvec[0]);
	mappedVec.push_back(a);
	int s=mvec.size();
	if(s==1){
		return mappedVec;
	}
	else{
		mvec.pop_front();
		map(mvec);
	}
};
