#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Tournament.h"
using namespace std;

Tournament::Tournament(){		//default constructor

}

Tournament::Tournament(vector<Player*> players){		//Conctructor which takes in vector of players and stores it in round1

	round1=players;

}

Player* Tournament::driver(Referee R){

	int matchNumber=0;		//to keep track of who is playing
	int i=0;
	for(i=0;i<4;i++){
		round2.push_back(R.playGame(round1[matchNumber],round1[matchNumber+1]));		//Uses the referees behaviour to see who wins and places the winner in the vector round2
		matchNumber=matchNumber+2;
	}
	matchNumber=0;		//resetting before round 2
	int j=0;
	for(j=0;j<2;j++){
		round3.push_back(R.playGame(round2[matchNumber],round2[matchNumber+1]));		//Uses the referees behaviour to see who wins and places the winner in the vector round3
		matchNumber=matchNumber+2;
	}
	matchNumber=0;		//resetting before the last round
	Player* winner=R.playGame(round3[matchNumber],round3[matchNumber+1]);		//Uses the referees behaviour to see who wins the final round
	return winner;
};
