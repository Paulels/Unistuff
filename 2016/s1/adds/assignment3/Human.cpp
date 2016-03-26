#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Human.h"
using namespace std;

Human::Human():Player("Human"){

	//to take input if a human wanted to play
	string s;
	int a=0;
	cout<<"Please enetr five moves as either rock(R), paper(P) or scissors(S) with no spaces between"<<endl;
	getline(cin,s);
	for(a=0;a<5;a++){ //Isolating moves from input
		moves[a]=s[a];
	}
}

Human::~Human(){		//deconstructor

}

char Human::getMove(int x){

	return moves[x];		//allows to get the individual move according to what roound

};

//all following behaviours are to allow for number of winns to be incremented, returned and reset

void Human::incrementNumberOfWin(){

	numberOfWins++;

};

int Human::getNumberOfWins(){

	return numberOfWins;

};

void Human::resetNumberOfWins(){

	numberOfWins=0;

};
