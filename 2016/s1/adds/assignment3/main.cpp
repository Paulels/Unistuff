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

	vector<Player*> players;
	string str;
	int i=0;

	while(i<8){
		cin >> str;
		if(str=="Bureaucrat"){
			players.push_back(new Bureaucrat);
			i++;
		}
		else if(str=="Crescendo"){
			players.push_back(new Crescendo);
			i++;
		}
		else if(str=="FistFullODollars"){
			players.push_back(new FistFullODollars);
			i++;
		}
		else if(str=="PaperDoll"){
			players.push_back(new PaperDoll);
			i++;
		}
		else if(str=="Avalanche"){
			players.push_back(new Avalanche);
			i++;
		}
		else if(str=="Toolbox"){
			players.push_back(new Toolbox);
			i++;
		}
	}


	Tournament Tournament(players);
	Referee Referee;
	Player* winner=Tournament.driver(Referee);
	string s=winner->getName();
	cout<<s<<endl;



	int j=0;
	for(j=0;j<players.size();j++){
		delete players[j];
	}
	players.clear(); 

}
