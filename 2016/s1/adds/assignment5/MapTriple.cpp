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
k=1;
}

int MapTriple::f(int x){

	return 3*x;

};

deque<int> MapTriple::map(deque<int> mvec){

	int c;
	c=f(mvec[0]);
	mappedVec.push_back(c);
	int s=mvec.size();
	if(s==1){
		return mappedVec;
	}
	else{
		mvec.pop_front();
		map(mvec);
	}
};

