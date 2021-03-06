#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Player.h"

//Inherits all of its states and behaviours from Player class and just redefines behaviours

class PaperDoll:public Player{

	public:

		PaperDoll();
		~PaperDoll();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //PAPERDOLL_H
