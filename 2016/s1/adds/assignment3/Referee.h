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

class Referee{

	private:

		int rounds; 

	public:

		Referee(); //Constructor for referee

		Player* playGame(Player* A,Player* B);
		int getRounds();

};
#endif  //REFEREE_H
