#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <ctime>
#include <cstdlib>
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include "Tournament.h"
#include "Avalanche.h"
#include "RandomComputer.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistFullODollars.h"
#include "Referee.h"
using namespace std;

int main(){

	vector<Player> players;
	string str;
	int i=0;

	while(idx <8){
		cin >> str;
		if(input=="Bureaucrat"){
			players.push_back(Bureaucrat());
			i++;
		}
		else if(input=="Crescendo"){
			players.push_back(Crescendo());
			i++;
		}
		else if(input=="FistfullODollars"){
			players.push_back(FistfullODollars());
			i++;
		}
		else if(input=="PaperDoll"){
			players.push_back(PaperDoll());
			i++;
		}
		else if(input=="Avalanche"){
			players.push_back(Avalanche());
			i++;
		}
		else if(input=="Toolbox"){
			players.push_back(ToolBox());
			i++;
		}
	}




}
