#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef PLAYER_H
#define PLAYER_H

//Base class for all players which is abstract
//Passes on most of its behaviours so that they can be redefined in the derived classes
//every player has a name

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
		virtual ~Player();

};
#endif //PLAYER_H
