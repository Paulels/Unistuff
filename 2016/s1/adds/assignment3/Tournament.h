#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "Human.h"
#include "Player.h"
#include "Avalanche.h"
#include "RandomComputer.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistFullODollars.h"
#include "Referee.h"

//Has 3 vectors of players to store the winners from each round and also stores the winner
//has a driver function which takes in the vector of players and returns the winner

class Tournament{

	private:

		Player* winner;
		std::vector<Player*> round1;
		std::vector<Player*> round2;
		std::vector<Player*> round3;

	public:

		Tournament();
		Tournament(std::vector<Player*> round1);
		Player* driver(Referee R);

};
#endif //TOURNAMENT_H
