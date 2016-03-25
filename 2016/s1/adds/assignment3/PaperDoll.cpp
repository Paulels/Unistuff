#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "PaperDoll.h"
using namespace std;

PaperDoll::PaperDoll():Player("PaperDoll"){

	moves="PSSPS";

}

char PaperDoll::getMove(int x){

	return moves[x];

};

void PaperDoll::incrementNumberOfWin(){

	numberOfWins++;

};

int PaperDoll::getNumberOfWins(){

	return numberOfWins;

};

void PaperDoll::resetNumberOfWins(){

	numberOfWins=0;

};
