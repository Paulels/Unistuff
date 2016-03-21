#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Human.h"
using namespace std;

Human::Human():Player("Human"){

}

void Human::setMoves(string s){
	int a=0;
	int b=2;
	int c=0;
	while(s[c]!='\0'){ //getting the length of input
		c++; 
	}
	for(a=0;a<c-2;a++){ //Isolating moves from input
		moves[a]=s[b]; 
		b++;
	}
};

char Human::getMoves(int z){ //allows input to know which move to access
	char s=moves[z];
	return s;
};
