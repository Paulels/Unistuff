#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include "human.h"
#include "referee.h"
#include "computer.h"

class GameController{

	private:

	public:

		GameController();

		void play(human h,computer c,referee r,int y);

};
#endif  //GAMECONTROLLER_H
