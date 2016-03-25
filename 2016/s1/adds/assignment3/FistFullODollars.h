#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H
#include "Player.h"

class FistFullODollars:public Player{

	public:

		FistFullODollars();
		~FistFullODollars();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //FISTFULLODOLLARS_H
