#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Tournament.h"
using namespace std;

Tournament::Tournament(vector<Player*> players){

	round1=players;

}

Player* Tournament::driver(Referee R){

	int matchNumber=0;
	int i=0;
	for(i=0;i<4;i++){
		round2.push_back(R.playGame(round1[matchNumber],round1[matchNumber+1]));
		matchNumber=matchNumber+2;
	}
	matchNumber=0;
	int j=0;
	for(j=0;j<2;j++){
		round3.push_back(R.playGame(round2[matchNumber],round2[matchNumber+1]));
		matchNumber=matchNumber+2;
	}
	matchNumber=0;
	Player* winner=R.playGame(round3[matchNumber],round3[matchNumber+1]);
	return winner;
};
