#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Avalanche.h"
using namespace std;

Avalanche::Avalanche():Player("Avalanche"){

	moves="RRRRR";
}

char Avalanche::getMove(int x){

	return moves[x];

};

void Avalanche::incrementNumberOfWins(){

	numberOfWins++;

};

int Avalanche::getNumberOfWins(){

	return numberOfWins;

};

void Avalanche::resetNumberOfWins(){

	numberOfWins=0;

};
