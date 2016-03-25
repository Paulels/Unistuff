#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef PLAYER_H
#define PLAYER_H

class Player{

	protected:

		std::string name;
		std::string moves;
		int numberOfWins;

	public:

		Player();
		Player(std::string);
		

		std::string getName();
		virtual char getMove(int x)=0;
		virtual void incrementNumberOfWin()=0;
		virtual int getNumberOfWins()=0;
		virtual void resetNumberOfWins()=0;

};
#endif //PLAYER_H
