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

	for(i=0;i<8;i++){
		cin >> str;
		if(str=="Bureaucrat"){
			players.push_back(new Bureaucrat);
		}
		else if(str=="Crescendo"){
			players.push_back(new Crescendo);
		}
		else if(str=="FistFullODollars"){
			players.push_back(new FistFullODollars);
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
		else{
return 0;
		}
	}


	Tournament Tournament(players);
	Referee Referee;
	Player* winner=Tournament.driver(Referee);
	string s=winner->getName();
	cout<<s<<endl;



	int j=0;
	for(j=0;j<8;j++){
		delete players[j];
	}
	players.clear(); 

}
