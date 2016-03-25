#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Crescendo.h"
using namespace std;

Crescendo::Crescendo():Player("Crescendo"){

	moves="PSRPS";

}

Crescendo::~Crescendo(){

}

char Crescendo::getMove(int x){

	return moves[x];

};

void Crescendo::incrementNumberOfWin(){

	numberOfWins++;

};

int Crescendo::getNumberOfWins(){

	return numberOfWins;

};

void Crescendo::resetNumberOfWins(){

	numberOfWins=0;

};
