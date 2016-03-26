#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Crescendo.h"
using namespace std;

Crescendo::Crescendo():Player("Crescendo"){

	moves="PSRPS";		//plays moves in the order of paper, scissos, rock

}

Crescendo::~Crescendo(){		//deconstructor

}

char Crescendo::getMove(int x){

	return moves[x];		//allows to get the individual move according to what roound

};

//all following behaviours are to allow for number of winns to be incremented, returned and reset

void Crescendo::incrementNumberOfWin(){

	numberOfWins++;

};

int Crescendo::getNumberOfWins(){

	return numberOfWins;

};

void Crescendo::resetNumberOfWins(){

	numberOfWins=0;

};
