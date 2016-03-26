#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "FistFullODollars.h"
using namespace std;

FistfullODollars::FistfullODollars():Player("FistFullODollars"){

	moves="RPPRP";		//Plays moves in order of rock, paper, paper

}

FistfullODollars::~FistfullODollars(){		//deconstructor

}

char FistfullODollars::getMove(int x){

	return moves[x];		//allows to get the individual move according to what roound

};

//all following behaviours are to allow for number of winns to be incremented, returned and reset

void FistfullODollars::incrementNumberOfWin(){

	numberOfWins++;

};

int FistfullODollars::getNumberOfWins(){

	return numberOfWins;

};

void FistfullODollars::resetNumberOfWins(){

	numberOfWins=0;

};
