#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include "Tournament.h"
#include "Avalanche.h"
#include "RandomComputer.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "Referee.h"
#include "FistFullODollars.h"
#include "Toolbox.h"
using namespace std;

int main(){

	vector<Player*> players;		//intialising my vector of players
	string str;
	int i=0;

	//runs through for the 8 inputs and creates new players based on the input

	for(i=0;i<8;i++){
		cin >> str;
		if(str=="Bureaucrat"){
			players.push_back(new Bureaucrat);
		}
		else if(str=="Crescendo"){
			players.push_back(new Crescendo);
		}
		else if(str=="FistfullODollars"){
			players.push_back(new FistfullODollars);
		}
		else if(str=="PaperDoll"){
			players.push_back(new PaperDoll);
		}
		else if(str=="Avalanche"){
			players.push_back(new Avalanche);
		}
		else if(str=="Toolbox"){
			players.push_back(new Toolbox);
		}
	}

	Tournament Tournament(players);		//creating the tournament
	Referee Referee;		//creating the referee
	Player* winner=Tournament.driver(Referee);		//running the tournament and storing the winner
	string s=winner->getName();
	cout<<s<<endl;		//printing out the winner

	//deleting all of the players that were created above

	int j=0;
	for(j=0;j<8;j++){
		delete players[j];
	}
	players.clear(); 

}
