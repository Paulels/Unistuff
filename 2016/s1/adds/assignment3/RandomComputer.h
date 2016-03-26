#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Player.h"

//Inherits all of its states and behaviours from Player class and just redefines behaviours

class RandomComputer:public Player{

	public:

		RandomComputer();
		~RandomComputer();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //RANDOMCOMPUTER_H
