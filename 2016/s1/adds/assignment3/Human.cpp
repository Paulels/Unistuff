#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Human.h"
using namespace std;

Human::Human():Player("Human"){

	string s;
	int a=0;
	cout<<"Please enetr five moves as either rock(R), paper(P) or scissors(S) withno spaces between"<<endl;
	getline(cin,s);
	for(a=0;a<5-2;a++){ //Isolating moves from input
		moves[a]=s[a];
	}
}

Human::~Human(){

}

char Human::getMove(int x){

	return moves[x];

};

void Human::incrementNumberOfWin(){

	numberOfWins++;

};

int Human::getNumberOfWins(){

	return numberOfWins;

};

void Human::resetNumberOfWins(){

	numberOfWins=0;

};
