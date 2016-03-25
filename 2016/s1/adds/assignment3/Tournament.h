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

class Tournament{

	private:

		Player* winner;
		std::vector<Player*> round1;
		std::vector<Player*> round2;
		std::vector<Player*> round3;

	public:

		Tournament(std::vector<Player*> round1);
		Player* driver(Referee R);

};
#endif //TOURNAMENT_H
