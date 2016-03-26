#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H
#include "Player.h"

//Inherits all of its states and behaviours from Player class and just redefines behaviours

class FistfullODollars:public Player{

	public:

		FistfullODollars();
		~FistfullODollars();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //FISTFULLODOLLARS_H
