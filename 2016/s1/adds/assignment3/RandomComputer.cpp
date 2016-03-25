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

char RandomComputer::getMove(int x){

	return moves[x];

};

void RandomComputer::incrementNumberOfWin(){

	numberOfWins++;

};

int RandomComputer::getNumberOfWins(){

	return numberOfWins;

};

void RandomComputer::resetNumberOfWins(){

	numberOfWins=0;

};

