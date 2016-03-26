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
#include "Avalanche.h"
#include "RandomComputer.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistFullODollars.h"

//referee stores the number of rounds beinmg played
//It playes the individual ganmes in the tournament and returns the winner of those games

class Referee{

	private:

		int rounds; 

	public:

		Referee(); //Constructor for referee

		Player* playGame(Player* A,Player* B);
		int getRounds();

};
#endif  //REFEREE_H
