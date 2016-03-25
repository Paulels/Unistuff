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

Computer::~Computer(){

}

char Computer::getMove(int x){

	return moves[x];

};

void Computer::incrementNumberOfWin(){

	numberOfWins++;

};

int Computer::getNumberOfWins(){

	return numberOfWins;

};

void Computer::resetNumberOfWins(){

	numberOfWins=0;

};
