#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include "RandomComputer.h"
using namespace std;

RandomComputer::RandomComputer():Player("RandomComputer"){

	//Makes the moves of random so they are different every time
	int i=0;
	int x=0;
	srand(time(NULL));
	for(i=0;i<5;i++){
		x=rand()%3;
		if(x==0){
			moves[i]='R';
		}
		else if(x==1){
			moves[i]='P';
		}
		else{
			moves[i]='S';
		}
	}

}

RandomComputer::~RandomComputer(){		//deconstructor

}

char RandomComputer::getMove(int x){

	return moves[x];		//allows to get the individual move according to what roound

};

//all following behaviours are to allow for number of winns to be incremented, returned and reset

void RandomComputer::incrementNumberOfWin(){

	numberOfWins++;

};

int RandomComputer::getNumberOfWins(){

	return numberOfWins;

};

void RandomComputer::resetNumberOfWins(){

	numberOfWins=0;

};

