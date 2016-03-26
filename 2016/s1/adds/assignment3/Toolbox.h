#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Player.h"

//Inherits all of its states and behaviours from Player class and just redefines behaviours

class Toolbox:public Player{

	public:

		Toolbox();
		~Toolbox();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //TOOLBOX_H
