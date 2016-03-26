#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Avalanche.h"
using namespace std;

Avalanche::Avalanche():Player("Avalanche"){

	moves="RRRRR";		//Only plays rock as its move

}

Avalanche::~Avalanche(){		//deconstructor to allow the object to be deleted

}

char Avalanche::getMove(int x){

	return moves[x];		//allows to get the individual move according to what roound

};

//all following behaviours are to allow for number of winns to be incremented, returned and reset

void Avalanche::incrementNumberOfWin(){

	numberOfWins++;

};

int Avalanche::getNumberOfWins(){

	return numberOfWins;

};

void Avalanche::resetNumberOfWins(){		

	numberOfWins=0;

};
