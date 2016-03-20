#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#ifndef REFEREE_H
#define REFEREE_H
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

class Referee{

	private:

		int numberOfGames; //How many games are played

	public:

		Referee(); //Constructor for referee

		void setNumberOfGames(char c);
		int getNumberOfGames();
		
		//Plays the game to see who wins
		void playGame(human H,computer C,int y);

};
#endif  //REFEREE_H
