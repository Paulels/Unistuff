#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Computer.h"
using namespace std;

Computer::Computer():Player("Computer"){
	moves="RRRRR"; //Dumb computer only plays rock
}

Computer::~Computer(){		//deconstructor

}

char Computer::getMove(int x){

	return moves[x];		//allows to get the individual move according to what roound

};

//all following behaviours are to allow for number of winns to be incremented, returned and reset

void Computer::incrementNumberOfWin(){

	numberOfWins++;

};

int Computer::getNumberOfWins(){

	return numberOfWins;

};

void Computer::resetNumberOfWins(){

	numberOfWins=0;

};
