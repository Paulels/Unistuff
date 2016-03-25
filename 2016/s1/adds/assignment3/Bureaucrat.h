#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Player.h"

class Bureaucrat:public Player{

	public:

		Bureaucrat();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //BUREAUCRAT_H
