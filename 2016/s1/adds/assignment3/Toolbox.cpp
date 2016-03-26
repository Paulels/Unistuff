#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Toolbox.h"
using namespace std;

Toolbox::Toolbox():Player("Toolbox"){

	moves="SSSSS";		//Only plays scissors

}

Toolbox::~Toolbox(){		//deconstuctor

}

char Toolbox::getMove(int x){

	return moves[x];		//allows to get the individual move according to what roound

};

//all following behaviours are to allow for number of winns to be incremented, returned and reset

void Toolbox::incrementNumberOfWin(){

	numberOfWins++;

};

int Toolbox::getNumberOfWins(){

	return numberOfWins;

};

void Toolbox::resetNumberOfWins(){

	numberOfWins=0;

};

