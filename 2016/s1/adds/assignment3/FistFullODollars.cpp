#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "FistFullODollars.h"
using namespace std;

FistFullODollars::FistFullODollars():Player("FistFullODollars"){

	moves="RPPRP";

}

char FistFullODollars::getMove(int x){

	return moves[x];

};

void FistFullODollars::incrementNumberOfWin(){

	numberOfWins++;

};

int FistFullODollars::getNumberOfWins(){

	return numberOfWins;

};

void FistFullODollars::resetNumberOfWins(){

	numberOfWins=0;

};
