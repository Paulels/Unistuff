#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Player.h"

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
