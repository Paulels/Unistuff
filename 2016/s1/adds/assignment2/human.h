#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#ifndef HUMAN_H
#define HUMAN_H

class human{

	private:

		std::string moves;

	public:

		human(); //constructor for human

		void setMoves(std::string s);
		char getMoves(int z); //takes an input so that it knows what move to access

};
#endif //HUMAN_H
