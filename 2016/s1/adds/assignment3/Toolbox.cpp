#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Toolbox.h"
using namespace std;

Toolbox::Toolbox():Player("Toolbox"){

	moves="SSSSS";

}

char Toolbox::getMove(int x){

	return moves[x];

};

void Toolbox::incrementNumberOfWin(){

	numberOfWins++;

};

int Toolbox::getNumberOfWins(){

	return numberOfWins;

};

void Toolbox::resetNumberOfWins(){

	numberOfWins=0;

};

