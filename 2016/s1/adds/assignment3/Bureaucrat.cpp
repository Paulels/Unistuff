#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Bureaucrat.h"
using namespace std;

Bureaucrat::Bureaucrat():Player("Bureaucrat"){

	moves="PPPPP";		//Only plays paper

}

Bureaucrat::~Bureaucrat(){		//deconstructor

}

char Bureaucrat::getMove(int x){

	return moves[x];		//allows to get the individual move according to what roound

};

//all following behaviours are to allow for number of winns to be incremented, returned and reset

void Bureaucrat::incrementNumberOfWin(){

	numberOfWins++;

};

int Bureaucrat::getNumberOfWins(){

	return numberOfWins;

};

void Bureaucrat::resetNumberOfWins(){

	numberOfWins=0;

};
