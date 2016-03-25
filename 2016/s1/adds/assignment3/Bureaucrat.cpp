#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Bureaucrat.h"
using namespace std;

Bureaucrat::Bureaucrat():Player("Bureaucrat"){

	moves="PPPPP";

}

Bureaucrat::~Bureaucrat(){

}

char Bureaucrat::getMove(int x){

	return moves[x];

};

void Bureaucrat::incrementNumberOfWin(){

	numberOfWins++;

};

int Bureaucrat::getNumberOfWins(){

	return numberOfWins;

};

void Bureaucrat::resetNumberOfWins(){

	numberOfWins=0;

};
