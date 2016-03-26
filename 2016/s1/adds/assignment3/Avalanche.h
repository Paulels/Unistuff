#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Player.h"

//Inherits all of its states and behaviours from Player class and just redefines behaviours

class Avalanche:public Player{

	public:

		Avalanche();
		~Avalanche();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //AVALANCHE_H
