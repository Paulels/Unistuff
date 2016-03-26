#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "PaperDoll.h"
using namespace std;

PaperDoll::PaperDoll():Player("PaperDoll"){

	moves="PSSPS";		//Plays moves in the order of paer, scissors, scissors

}

PaperDoll::~PaperDoll(){		//deconstructor

}

char PaperDoll::getMove(int x){

	return moves[x];		//allows to get the individual move according to what roound

};

//all following behaviours are to allow for number of winns to be incremented, returned and reset

void PaperDoll::incrementNumberOfWin(){

	numberOfWins++;

};

int PaperDoll::getNumberOfWins(){

	return numberOfWins;

};

void PaperDoll::resetNumberOfWins(){

	numberOfWins=0;

};
