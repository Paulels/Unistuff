#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Referee.h"
using namespace std;

Referee::Referee(){		//constructor that sets rounds equal to 5

	rounds=5;

}

int Referee::getRounds(){		//so you winn be able to see how many rounds are being played
	return rounds;
};

Player* Referee::playGame(Player* A,Player* B){
	int i=0;

	//run through each round of the game to see who wins, then returns the player with the most wins and resets their win count
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
	if(A->getNumberOfWins()>B->getNumberOfWins()){
		A->resetNumberOfWins();
		B->resetNumberOfWins();
		return A;
	}
	else if(B->getNumberOfWins()>A->getNumberOfWins()){
		A->resetNumberOfWins();
		B->resetNumberOfWins();
		return B;
	}
	else{
		A->resetNumberOfWins();
		B->resetNumberOfWins();
		return A;
	}
};
