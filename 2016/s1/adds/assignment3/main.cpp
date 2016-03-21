#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <ctime>
#include <cstdlib>
#include "Human.h"
#include "Player.h"
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

	vector<Player*> players;
	string str;
	int i=0;

	while(i<8){
		cin >> str;
		if(str=="Bureaucrat"){
			players.push_back(new Bureaucrat());
			i++;
		}
		else if(str=="Crescendo"){
			players.push_back(new Crescendo());
			i++;
		}
		else if(str=="FistfullODollars"){
			players.push_back(new FistfullODollars());
			i++;
		}
		else if(str=="PaperDoll"){
			players.push_back(new PaperDoll());
			i++;
		}
		else if(str=="Avalanche"){
			players.push_back(new Avalanche());
			i++;
		}
		else if(str=="Toolbox"){
			players.push_back(new ToolBox());
			i++;
		}
	}




}
