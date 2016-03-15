#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "human.h"
using namespace std;

human::human(){

}

void human::setMoves(string s){
	int a=0;
	int b=2;
	int c=0;
	while(s[c]!='\0'){
		c++;
	}
	for(a=0;a<c-2;a++){
		moves[a]=s[b];
		b++;
	}
};

char human::getMoves(int z){
	char s=moves[z];
	return s;
};
