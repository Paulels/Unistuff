#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Referee.h"
using namespace std;

Referee::Referee(){

	rounds=5;

}

int Referee::getRounds(){
	return rounds;
};

Player* Referee::playGame(Player* A,Player* B){
	int i=0;
	for(i=0;i<5;i++){
		if(A->getMove(i)=='R'){ 
			if(B->getMove(i)=='P'){
				B->incrementNumberOfWin();
			}
			else if(B->getMove(i)=='S'){
				A->incrementNumberOfWin();
			}
		}
		else if(A->getMove(i)=='P'){ 
			if(B->getMove(i)=='S'){
				B->incrementNumberOfWin();
			}
			else if(B->getMove(i)=='R'){
				A->incrementNumberOfWin();
			}
		}
		if(A->getMove(i)=='S'){ 
			if(B->getMove(i)=='R'){
				B->incrementNumberOfWin();
			}
			else if(B->getMove(i)=='P'){
				A->incrementNumberOfWin();
			}
		}
	}
	if(A->getNumberOfWins()>=B->getNumberOfWins()){
		A->resetNumberOfWins();
		B->resetNumberOfWins();
		return A;
	}
	else if(B->getNumberOfWins()>A->getNumberOfWins()){
		A->resetNumberOfWins();
		B->resetNumberOfWins();
		return B;
	}
};
