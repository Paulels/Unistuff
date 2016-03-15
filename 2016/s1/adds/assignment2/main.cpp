#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include "human.h"
#include "computer.h"
#include "referee.h"
#include "GameController.h"
using namespace std;

int main(){

	string str;
	getline(cin,str);
	if(str[1]!=' '){
		cout<<"Enter in the form of k, followed by k moves with a space inbetween."<<endl;
	}
	else{
	human human;
	human.setMoves(str);
	computer computer;
	referee referee;
	referee.setNumberOfGames(str[0]);
	int y=referee.getNumberOfGames();
	GameController GameController;
	GameController.play(human,computer,referee,y);
	}
}
