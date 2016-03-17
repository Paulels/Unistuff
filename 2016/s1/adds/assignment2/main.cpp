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

	string str; //initialises for input
	getline(cin,str); //Gets user input
	human human; 
	human.setMoves(str);
	computer computer;
	referee referee;
	referee.setNumberOfGames(str[0]); //refers to the first character in str which will be number of games
	int y=referee.getNumberOfGames();
	GameController GameController;
	GameController.play(human,computer,referee,y); //runs for the actual playing of the games
	}
}
