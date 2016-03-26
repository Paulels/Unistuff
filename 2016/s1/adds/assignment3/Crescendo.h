#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Player.h"

//Inherits all of its states and behaviours from Player class and just redefines behaviours

class Crescendo:public Player{

	public:

		Crescendo();
		~Crescendo();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //CRESCENDO_H
