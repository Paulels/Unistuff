#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "FistFullODollars.h"
using namespace std;

FistfullODollars::FistfullODollars():Player("FistFullODollars"){

	moves="RPPRP";

}

FistfullODollars::~FistfullODollars(){

}

char FistfullODollars::getMove(int x){

	return moves[x];

};

void FistfullODollars::incrementNumberOfWin(){

	numberOfWins++;

};

int FistfullODollars::getNumberOfWins(){

	return numberOfWins;

};

void FistfullODollars::resetNumberOfWins(){

	numberOfWins=0;

};
